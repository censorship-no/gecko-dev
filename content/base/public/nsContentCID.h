/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * The contents of this file are subject to the Netscape Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/NPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is mozilla.org code.
 *
 * The Initial Developer of the Original Code is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 1998 Netscape Communications Corporation. All
 * Rights Reserved.
 *
 * Contributor(s): 
 */

#ifndef nsContentCID_h__
#define nsContentCID_h__

#include "nsISupports.h"
#include "nsIFactory.h"
#include "nsIComponentManager.h"

// {1691E1F7-EE41-11d4-9885-00C04FA0CF4B}
#define NS_STYLESET_CID \
{ 0x1691e1f7, 0xee41, 0x11d4, { 0x98, 0x85, 0x0, 0xc0, 0x4f, 0xa0, 0xcf, 0x4b } }

// {96882B70-8A27-11d2-8EAF-00805F29F370}
#define NS_HTMLSTYLESHEET_CID \
{ 0x96882b70, 0x8a27, 0x11d2, { 0x8e, 0xaf, 0x0, 0x80, 0x5f, 0x29, 0xf3, 0x70 } }

// {972D8D8F-F0DA-11d4-9885-00C04FA0CF4B}
#define NS_DOCUMENT_VIEWER_CID \
{ 0x972d8d8f, 0xf0da, 0x11d4, { 0x98, 0x85, 0x0, 0xc0, 0x4f, 0xa0, 0xcf, 0x4b } }

// {A5121627-EDB6-11d4-9885-00C04FA0CF4B}
#define NS_ANONYMOUSCONTENT_CID \
{ 0xa5121627, 0xedb6, 0x11d4, { 0x98, 0x85, 0x0, 0xc0, 0x4f, 0xa0, 0xcf, 0x4b } }

// {FC886801-E768-11d4-9885-00C04FA0CF4B}
#define NS_CONTENT_DOCUMENT_LOADER_FACTORY_CID \
 { 0xfc886801, 0xe768, 0x11d4, { 0x98, 0x85, 0x0, 0xc0, 0x4f, 0xa0, 0xcf, 0x4b } }

/* a6cf90f9-15b3-11d2-932e-00805f8add32 */
#define NS_LAYOUT_DEBUGGER_CID \
 { 0xa6cf90f9, 0x15b3, 0x11d2,{0x93, 0x2e, 0x00, 0x80, 0x5f, 0x8a, 0xdd, 0x32}}

/* a6cf90fc-15b3-11d2-932e-00805f8add32 */
#define NS_HTML_ELEMENT_FACTORY_CID \
 { 0xa6cf90fc, 0x15b3, 0x11d2,{0x93, 0x2e, 0x00, 0x80, 0x5f, 0x8a, 0xdd, 0x32}}

#define NS_HTMLDOCUMENT_CID                       \
{ /* 5d0fcdd0-4daa-11d2-b328-00805f8a3859 */      \
 0x5d0fcdd0, 0x4daa, 0x11d2,                      \
 {0xb3, 0x28, 0x00, 0x80, 0x5f, 0x8a, 0x38, 0x59}}

#define NS_XMLDOCUMENT_CID                        \
{ /* a6cf9063-15b3-11d2-932e-00805f8add32 */      \
 0xa6cf9063, 0x15b3, 0x11d2,                      \
 {0x93, 0x2e, 0x00, 0x80, 0x5f, 0x8a, 0xdd, 0x32}}

#define NS_XML_ELEMENT_FACTORY_CID                \
{ /* CF170391-79CC-11d3-BE44-0020A6361667 */      \
 0xcf170391, 0x79cc, 0x11d3,                      \
 {0xbe, 0x44, 0x0, 0x20, 0xa6, 0x36, 0x16, 0x67}}

#define NS_IMAGEDOCUMENT_CID                      \
{ /* e11a6080-4daa-11d2-b328-00805f8a3859 */      \
 0xe11a6080, 0x4daa, 0x11d2,                      \
 {0xb3, 0x28, 0x00, 0x80, 0x5f, 0x8a, 0x38, 0x59}}

// {A1FDE864-E802-11d4-9885-00C04FA0CF4B}
#define NS_HTMLHRELEMENT_CID                   \
{ 0xa1fde864, 0xe802, 0x11d4, { 0x98, 0x85, 0x0, 0xc0, 0x4f, 0xa0, 0xcf, 0x4b } }

// {A1FDE865-E802-11d4-9885-00C04FA0CF4B}
#define NS_HTMLINPUTELEMENT_CID                   \
{ 0xa1fde865, 0xe802, 0x11d4, { 0x98, 0x85, 0x0, 0xc0, 0x4f, 0xa0, 0xcf, 0x4b } }

// {A1FDE866-E802-11d4-9885-00C04FA0CF4B}
#define NS_HTMLATTRIBUTES_CID                   \
{ 0xa1fde866, 0xe802, 0x11d4, { 0x98, 0x85, 0x0, 0xc0, 0x4f, 0xa0, 0xcf, 0x4b } }

#define NS_HTMLIMAGEELEMENT_CID                   \
{ /* d6008c40-4dad-11d2-b328-00805f8a3859 */      \
 0xd6008c40, 0x4dad, 0x11d2,                      \
 {0xb3, 0x28, 0x00, 0x80, 0x5f, 0x8a, 0x38, 0x59}}

#define NS_HTMLOPTIONELEMENT_CID                  \
{ /* a6cf90f5-15b3-11d2-932e-00805f8add32 */      \
 0xa6cf90f5, 0x15b3, 0x11d2,                      \
 {0x93, 0x2e, 0x00, 0x80, 0x5f, 0x8a, 0xdd, 0x32}}

#define NS_NAMESPACEMANAGER_CID                   \
{ /* d9783472-8fe9-11d2-9d3c-0060088f9ff7 */      \
 0xd9783472, 0x8fe9, 0x11d2,                      \
 {0x9d, 0x3c, 0x00, 0x60, 0x08, 0x8f, 0x9f, 0xf7}}

/* a6cf90d7-15b3-11d2-932e-00805f8add32 */
#define NS_FRAME_UTIL_CID \
 { 0xa6cf90d5, 0x15b3, 0x11d2,{0x93, 0x2e, 0x00, 0x80, 0x5f, 0x8a, 0xdd, 0x32}}


// XXX This should really be factored into a style-specific DLL so
// that all the HTML, generic layout, and style stuff isn't munged
// together.

// {2E363D60-872E-11d2-B531-000000000000}
#define NS_CSSPARSER_CID \
{ 0x2e363d60, 0x872e, 0x11d2, { 0xb5, 0x31, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }

// {95F46161-D177-11d2-BF86-00105A1B0627}
#define NS_HTML_CSS_STYLESHEET_CID \
{ 0x95f46161, 0xd177, 0x11d2, { 0xbf, 0x86, 0x0, 0x10, 0x5a, 0x1b, 0x6, 0x27 } }

// {A1FDE867-E802-11d4-9885-00C04FA0CF4B}
#define NS_CSS_STYLESHEET_CID \
{ 0xa1fde867, 0xe802, 0x11d4, { 0x98, 0x85, 0x0, 0xc0, 0x4f, 0xa0, 0xcf, 0x4b } }

// {eaca2576-0d4a-11d3-9d7e-0060088f9ff7}
#define NS_CSS_LOADER_CID \
{ 0xeaca2576, 0x0d4a, 0x11d3, { 0x9d, 0x7e, 0x00, 0x60, 0x08, 0x8f, 0x9f, 0xf7 } }

// {96882B71-8A27-11d2-8EAF-00805F29F370}
#define NS_TEXTNODE_CID \
{ 0x96882b71, 0x8a27, 0x11d2, { 0x8e, 0xaf, 0x0, 0x80, 0x5f, 0x29, 0xf3, 0x70 } }

// {96882B72-8A27-11d2-8EAF-00805F29F370}
#define NS_SELECTION_CID \
{ 0x96882b72, 0x8a27, 0x11d2, { 0x8e, 0xaf, 0x0, 0x80, 0x5f, 0x29, 0xf3, 0x70 } }

#define NS_FRAMESELECTION_CID \
{/* {905F80F1-8A7B-11d2-918C-0080C8E44DB5}*/ \
 0x905f80f1, 0x8a7b, 0x11d2, { 0x91, 0x8c, 0x0, 0x80, 0xc8, 0xe4, 0x4d, 0xb5 } }

#define NS_DOMSELECTION_CID \
{/* {C87A37FC-8109-4ce2-A322-8CDEC925379F}*/ \
 0xc87a37fc, 0x8109, 0x4ce2, { 0xa3, 0x22, 0x8c, 0xde, 0xc9, 0x25, 0x37, 0x9f } }

#define NS_RANGE_CID \
{/* {56AD2981-8A87-11d2-918C-0080C8E44DB5}*/ \
 0x56ad2981, 0x8a87, 0x11d2, { 0x91, 0x8c, 0x0, 0x80, 0xc8, 0xe4, 0x4d, 0xb5 } }

// {A1FDE868-E802-11d4-9885-00C04FA0CF4B}
#define NS_ATTRIBUTECONTENT_CID \
{ 0xa1fde868, 0xe802, 0x11d4, { 0x98, 0x85, 0x0, 0xc0, 0x4f, 0xa0, 0xcf, 0x4b } }

#define NS_CONTENTITERATOR_CID \
{/* {a6cf90e3-15b3-11d2-932e-00805f8add32}*/ \
 0xa6cf90e3, 0x15b3, 0x11d2, {0x93, 0x2e, 0x00, 0x80, 0x5f, 0x8a, 0xdd, 0x32 } }

#define NS_GENERATEDSUBTREEITERATOR_CID \
{/* {9A45253B-EB8F-49f1-B925-E9EA90D3EB3A}*/ \
 0x9a45253b, 0xeb8f, 0x49f1, { 0xb9, 0x25, 0xe9, 0xea, 0x90, 0xd3, 0xeb, 0x3a } }

#define NS_GENERATEDCONTENTITERATOR_CID \
{/* {A364930F-E353-49f1-AC69-91637EB8B757}*/ \
 0xa364930f, 0xe353, 0x49f1, { 0xac, 0x69, 0x91, 0x63, 0x7e, 0xb8, 0xb7, 0x57 } }

#define NS_SUBTREEITERATOR_CID \
{/* {a6cf90e5-15b3-11d2-932e-00805f8add32}*/ \
 0xa6cf90e5, 0x15b3, 0x11d2, {0x93, 0x2e, 0x00, 0x80, 0x5f, 0x8a, 0xdd, 0x32 } }

// {09F689E0-B4DA-11d2-A68B-00104BDE6048}
#define NS_EVENTLISTENERMANAGER_CID \
{ 0x9f689e0, 0xb4da, 0x11d2, { 0xa6, 0x8b, 0x0, 0x10, 0x4b, 0xde, 0x60, 0x48 } }

// {A1FDE862-E802-11d4-9885-00C04FA0CF4B}
#define NS_EVENTSTATEMANAGER_CID \
{ 0xa1fde862, 0xe802, 0x11d4, { 0x98, 0x85, 0x0, 0xc0, 0x4f, 0xa0, 0xcf, 0x4b } }

// {64F300A1-C88C-11d3-97FB-00400553EEF0}
#define NS_XBLSERVICE_CID \
{ 0x64f300a1, 0xc88c, 0x11d3, { 0x97, 0xfb, 0x0, 0x40, 0x5, 0x53, 0xee, 0xf0 } }

// {15671AF5-39F9-4c70-8CE3-72C97111B52D}
#define NS_BINDINGMANAGER_CID \
{ 0x15671af5, 0x39f9, 0x4c70, { 0x8c, 0xe3, 0x72, 0xc9, 0x71, 0x11, 0xb5, 0x2d } }

// 3a9cd622-264d-11d4-ba06-0060b0fc76dd
#define NS_DOM_IMPLEMENTATION_CID \
{ 0x3a9cd622, 0x264d, 0x11d4, {0xba, 0x06, 0x00, 0x60, 0xb0, 0xfc, 0x76, 0xdd } }

// {AE52FE52-683A-437D-B661-DE55F4E0A873}
#define NS_NODEINFOMANAGER_CID \
{ 0xae52fe52, 0x683a, 0x437d, { 0xb6, 0x61, 0xde, 0x55, 0xf4, 0xe0, 0xa8, 0x73 } }

// {ECEA1B28-AE54-4047-8BBE-C624235106B4}
#define NS_COMPUTEDDOMSTYLE_CID \
{ 0xecea1b28, 0xae54, 0x4047, { 0x8b, 0xbe, 0xc6, 0x24, 0x23, 0x51, 0x06, 0xb4 } }

// {4aef38b7-6364-4e23-a5e7-12f837fbbd9c}
#define NS_XMLCONTENTSERIALIZER_CID \
{ 0x4aef38b7, 0x6364, 0x4e23, { 0xa5, 0xe7, 0x12, 0xf8, 0x37, 0xfb, 0xbd, 0x9c } }

// {9d3f70da-86e9-11d4-95ec-00b0d03e37b7}
#define NS_HTMLCONTENTSERIALIZER_CID \
{ 0x9d3f70da, 0x86e9, 0x11d4, { 0x95, 0xec, 0x00, 0xb0, 0xd0, 0x3e, 0x37, 0xb7 } }

// {6030f7ef-32ed-46a7-9a63-6a5d3f90445f}
#define NS_PLAINTEXTSERIALIZER_CID \
{ 0x6030f7ef, 0x32ed, 0x46a7, { 0x9a, 0x63, 0x6a, 0x5d, 0x3f, 0x90, 0x44, 0x5f } }

#endif /* nsContentCID_h__ */
