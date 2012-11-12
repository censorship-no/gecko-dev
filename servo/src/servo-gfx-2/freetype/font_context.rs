extern mod freetype;

use freetype::{
    FT_Error,
    FT_Library,
};
use freetype::bindgen::{
    FT_Init_FreeType, 
    FT_Done_FreeType
};


pub struct FreeTypeFontContextHandle {
    ctx: FT_Library,

    drop {
        assert self.ctx.is_not_null();
        FT_Done_FreeType(self.ctx);
    }
}

pub impl FreeTypeFontContextHandle {
    static pub fn new() -> FreeTypeFontContextHandle {
        let lib: FT_Library = ptr::null();
        let res = FT_Init_FreeType(ptr::addr_of(&lib));
        // FIXME: error handling
        assert res == 0 as FT_Error;

        FreeTypeFontContext { 
            ctx: lib,
        }
    }
}