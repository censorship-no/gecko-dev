/* This file exists just to make it easier to import things inside of
 ./text/ without specifying the file they came out of imports.
 
Note that you still must define each of the files as a module in
servo.rc. This is not ideal and may be changed in the future. */

pub use shaper::Shaper;
pub use text_run::TextRun;
pub use text_run::SendableTextRun;
