use font::{Font, FontDescriptor, FontGroup, FontStyle, SelectorPlatformName, SelectorStubDummy};
use font::{SpecifiedFontStyle};
use font_list::FontList;
use native::FontHandle;
use util::cache;

use azure::azure_hl::BackendType;
use core::dvec::DVec;

// TODO(Issue #164): delete, and get default font from font list
const TEST_FONT: [u8 * 33004] = #include_bin("JosefinSans-SemiBold.ttf");

fn test_font_bin() -> ~[u8] {
    return vec::from_fn(33004, |i| TEST_FONT[i]);
}

// TODO(Rust #3934): creating lots of new dummy styles is a workaround
// for not being able to store symbolic enums in top-level constants.
pub fn dummy_style() -> FontStyle {
    use font::FontWeight300;
    return FontStyle {
        pt_size: 20f,
        weight: FontWeight300,
        italic: false,
        oblique: false,
        families: ~"Helvetica, serif",
    }
}

// TODO(Issue #163): this is a workaround for static methods and
// typedefs not working well together. It should be removed.
#[cfg(target_os = "macos")]
type FontContextHandle/& = quartz::font_context::QuartzFontContextHandle;

#[cfg(target_os = "linux")]
type FontContextHandle/& = freetype::font_context::FreeTypeFontContextHandle;

pub impl FontContextHandle {
    #[cfg(target_os = "macos")]
    static pub fn new() -> FontContextHandle {
        quartz::font_context::QuartzFontContextHandle::new()
    }

    #[cfg(target_os = "linux")]
    static pub fn new() -> FontContextHandle {
        freetype::font_context::FreeTypeFontContextHandle::new()
    }
}

pub struct FontContext {
    instance_cache: cache::MonoCache<FontDescriptor, @Font>,
    font_list: Option<FontList>, // only needed by layout
    handle: FontContextHandle,
    backend: BackendType,
}

pub impl FontContext {
    static fn new(backend: BackendType, needs_font_list: bool) -> FontContext {
        let handle = FontContextHandle::new();
        let font_list = if needs_font_list { Some(FontList::new(&handle)) } else { None };
        FontContext { 
            // TODO(Rust #3902): remove extraneous type parameters once they are inferred correctly.
            instance_cache: cache::new::<FontDescriptor, @Font, cache::MonoCache<FontDescriptor, @Font>>(10),
            font_list: move font_list,
            handle: move handle,
            backend: backend
        }
    }

    fn get_resolved_font_for_style(style: &SpecifiedFontStyle) -> @FontGroup {
        // TODO(Issue #178, E): implement a cache of FontGroup instances.
        self.create_font_group(style)
    }

    fn get_font_by_descriptor(desc: &FontDescriptor) -> Result<@Font, ()> {
        match self.instance_cache.find(desc) {
            Some(f) => Ok(f),
            None => { 
                let result = self.create_font_instance(desc);
                match result {
                    Ok(font) => {
                        self.instance_cache.insert(desc, font);
                    }, _ => {}
                };
                result
            }
        }
    }

    priv fn create_font_group(style: &SpecifiedFontStyle) -> @FontGroup {
        // TODO(Issue #178, D): implement private font matching 
        // TODO(Issue #174): implement by-platform-name FontSelectors
        let desc = FontDescriptor::new(&font_context::dummy_style(), &SelectorStubDummy);
        let fonts = DVec();
        match self.get_font_by_descriptor(&desc) {
            Ok(instance) => fonts.push(instance),
            Err(()) => {}
        }

        assert fonts.len() > 0;
        // TODO(Issue #179): Split FontStyle into specified and used styles
        let used_style = copy *style;

        @FontGroup::new(style.families.to_managed(), &used_style, dvec::unwrap(move fonts))
    }

    priv fn create_font_instance(desc: &FontDescriptor) -> Result<@Font, ()> {
        match desc.selector {
            SelectorStubDummy => {
                let font_bin = @test_font_bin();
                let handle = FontHandle::new(&self.handle, font_bin, desc.style.pt_size);
                let handle = if handle.is_ok() {
                    result::unwrap(move handle)
                } else {
                    return Err(handle.get_err());
                };
                
                return Ok(@Font::new(font_bin, move handle, copy desc.style, self.backend));
            },
            // TODO(Issue #174): implement by-platform-name font selectors.
            SelectorPlatformName(_) => { fail ~"FontContext::create_font_instance() can't yet handle SelectorPlatformName." }
        }
    }
}
