<!DOCTYPE html>
<!-- saved from url=(0101)https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JASSIGNMENTS?tab=statement -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style id="ace-tomorrow-night">.ace-tomorrow-night .ace_gutter {background: #25282c;color: #C5C8C6}.ace-tomorrow-night .ace_print-margin {width: 1px;background: #25282c}.ace-tomorrow-night {background-color: #1D1F21;color: #C5C8C6}.ace-tomorrow-night .ace_cursor {color: #AEAFAD}.ace-tomorrow-night .ace_marker-layer .ace_selection {background: #373B41}.ace-tomorrow-night.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px #1D1F21;}.ace-tomorrow-night .ace_marker-layer .ace_step {background: rgb(102, 82, 0)}.ace-tomorrow-night .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid #4B4E55}.ace-tomorrow-night .ace_marker-layer .ace_active-line {background: #282A2E}.ace-tomorrow-night .ace_gutter-active-line {background-color: #282A2E}.ace-tomorrow-night .ace_marker-layer .ace_selected-word {border: 1px solid #373B41}.ace-tomorrow-night .ace_invisible {color: #4B4E55}.ace-tomorrow-night .ace_keyword,.ace-tomorrow-night .ace_meta,.ace-tomorrow-night .ace_storage,.ace-tomorrow-night .ace_storage.ace_type,.ace-tomorrow-night .ace_support.ace_type {color: #B294BB}.ace-tomorrow-night .ace_keyword.ace_operator {color: #8ABEB7}.ace-tomorrow-night .ace_constant.ace_character,.ace-tomorrow-night .ace_constant.ace_language,.ace-tomorrow-night .ace_constant.ace_numeric,.ace-tomorrow-night .ace_keyword.ace_other.ace_unit,.ace-tomorrow-night .ace_support.ace_constant,.ace-tomorrow-night .ace_variable.ace_parameter {color: #DE935F}.ace-tomorrow-night .ace_constant.ace_other {color: #CED1CF}.ace-tomorrow-night .ace_invalid {color: #CED2CF;background-color: #DF5F5F}.ace-tomorrow-night .ace_invalid.ace_deprecated {color: #CED2CF;background-color: #B798BF}.ace-tomorrow-night .ace_fold {background-color: #81A2BE;border-color: #C5C8C6}.ace-tomorrow-night .ace_entity.ace_name.ace_function,.ace-tomorrow-night .ace_support.ace_function,.ace-tomorrow-night .ace_variable {color: #81A2BE}.ace-tomorrow-night .ace_support.ace_class,.ace-tomorrow-night .ace_support.ace_type {color: #F0C674}.ace-tomorrow-night .ace_heading,.ace-tomorrow-night .ace_markup.ace_heading,.ace-tomorrow-night .ace_string {color: #B5BD68}.ace-tomorrow-night .ace_entity.ace_name.ace_tag,.ace-tomorrow-night .ace_entity.ace_other.ace_attribute-name,.ace-tomorrow-night .ace_meta.ace_tag,.ace-tomorrow-night .ace_string.ace_regexp,.ace-tomorrow-night .ace_variable {color: #CC6666}.ace-tomorrow-night .ace_comment {color: #969896}.ace-tomorrow-night .ace_indent-guide {background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAEklEQVQImWNgYGBgYHB3d/8PAAOIAdULw8qMAAAAAElFTkSuQmCC) right repeat-y}
/*# sourceURL=ace/css/ace-tomorrow-night */</style><style id="autocompletion.css">
.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {
    background-color: #CAD6FA;
    z-index: 1;
}
.ace_dark.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {
    background-color: #3a674e;
}
.ace_editor.ace_autocomplete .ace_line-hover {
    border: 1px solid #abbffe;
    margin-top: -1px;
    background: rgba(233,233,253,0.4);
    position: absolute;
    z-index: 2;
}
.ace_dark.ace_editor.ace_autocomplete .ace_line-hover {
    border: 1px solid rgba(109, 150, 13, 0.8);
    background: rgba(58, 103, 78, 0.62);
}
.ace_completion-meta {
    opacity: 0.5;
    margin-left: 0.9em;
}
.ace_completion-message {
    margin-left: 0.9em;
    color: blue;
}
.ace_editor.ace_autocomplete .ace_completion-highlight{
    color: #2d69c7;
}
.ace_dark.ace_editor.ace_autocomplete .ace_completion-highlight{
    color: #93ca12;
}
.ace_editor.ace_autocomplete {
    width: 300px;
    z-index: 200000;
    border: 1px lightgray solid;
    position: fixed;
    box-shadow: 2px 3px 5px rgba(0,0,0,.2);
    line-height: 1.4;
    background: #fefefe;
    color: #111;
}
.ace_dark.ace_editor.ace_autocomplete {
    border: 1px #484747 solid;
    box-shadow: 2px 3px 5px rgba(0, 0, 0, 0.51);
    line-height: 1.4;
    background: #25282c;
    color: #c1c1c1;
}
.ace_autocomplete .ace_text-layer  {
    width: calc(100% - 8px);
}
.ace_autocomplete .ace_line {
    display: flex;
    align-items: center;
}
.ace_autocomplete .ace_line > * {
    min-width: 0;
    flex: 0 0 auto;
}
.ace_autocomplete .ace_line .ace_ {
    flex: 0 1 auto;
    overflow: hidden;
    text-overflow: ellipsis;
}
.ace_autocomplete .ace_completion-spacer {
    flex: 1;
}
.ace_autocomplete.ace_loading:after  {
    content: "";
    position: absolute;
    top: 0px;
    height: 2px;
    width: 8%;
    background: blue;
    z-index: 100;
    animation: ace_progress 3s infinite linear;
    animation-delay: 300ms;
    transform: translateX(-100%) scaleX(1);
}
@keyframes ace_progress {
    0% { transform: translateX(-100%) scaleX(1) }
    50% { transform: translateX(625%) scaleX(2) } 
    100% { transform: translateX(1500%) scaleX(3) } 
}
@media (prefers-reduced-motion) {
    .ace_autocomplete.ace_loading:after {
        transform: translateX(625%) scaleX(2);
        animation: none;
     }
}

/*# sourceURL=ace/css/autocompletion.css */</style><style id="snippets.css">
.ace_snippet-marker {
    -moz-box-sizing: border-box;
    box-sizing: border-box;
    background: rgba(194, 193, 208, 0.09);
    border: 1px dotted rgba(211, 208, 235, 0.62);
    position: absolute;
}
/*# sourceURL=ace/css/snippets.css */</style><style id="error_marker.css">
    .error_widget_wrapper {
        background: inherit;
        color: inherit;
        border:none
    }
    .error_widget {
        border-top: solid 2px;
        border-bottom: solid 2px;
        margin: 5px 0;
        padding: 10px 40px;
        white-space: pre-wrap;
    }
    .error_widget.ace_error, .error_widget_arrow.ace_error{
        border-color: #ff5a5a
    }
    .error_widget.ace_warning, .error_widget_arrow.ace_warning{
        border-color: #F1D817
    }
    .error_widget.ace_info, .error_widget_arrow.ace_info{
        border-color: #5a5a5a
    }
    .error_widget.ace_ok, .error_widget_arrow.ace_ok{
        border-color: #5aaa5a
    }
    .error_widget_arrow {
        position: absolute;
        border: solid 5px;
        border-top-color: transparent!important;
        border-right-color: transparent!important;
        border-left-color: transparent!important;
        top: -5px;
    }

/*# sourceURL=ace/css/error_marker.css */</style><style id="ace-tm">.ace-tm .ace_gutter {
  background: #f0f0f0;
  color: #333;
}

.ace-tm .ace_print-margin {
  width: 1px;
  background: #e8e8e8;
}

.ace-tm .ace_fold {
    background-color: #6B72E6;
}

.ace-tm {
  background-color: #FFFFFF;
  color: black;
}

.ace-tm .ace_cursor {
  color: black;
}
        
.ace-tm .ace_invisible {
  color: rgb(191, 191, 191);
}

.ace-tm .ace_storage,
.ace-tm .ace_keyword {
  color: blue;
}

.ace-tm .ace_constant {
  color: rgb(197, 6, 11);
}

.ace-tm .ace_constant.ace_buildin {
  color: rgb(88, 72, 246);
}

.ace-tm .ace_constant.ace_language {
  color: rgb(88, 92, 246);
}

.ace-tm .ace_constant.ace_library {
  color: rgb(6, 150, 14);
}

.ace-tm .ace_invalid {
  background-color: rgba(255, 0, 0, 0.1);
  color: red;
}

.ace-tm .ace_support.ace_function {
  color: rgb(60, 76, 114);
}

.ace-tm .ace_support.ace_constant {
  color: rgb(6, 150, 14);
}

.ace-tm .ace_support.ace_type,
.ace-tm .ace_support.ace_class {
  color: rgb(109, 121, 222);
}

.ace-tm .ace_keyword.ace_operator {
  color: rgb(104, 118, 135);
}

.ace-tm .ace_string {
  color: rgb(3, 106, 7);
}

.ace-tm .ace_comment {
  color: rgb(76, 136, 107);
}

.ace-tm .ace_comment.ace_doc {
  color: rgb(0, 102, 255);
}

.ace-tm .ace_comment.ace_doc.ace_tag {
  color: rgb(128, 159, 191);
}

.ace-tm .ace_constant.ace_numeric {
  color: rgb(0, 0, 205);
}

.ace-tm .ace_variable {
  color: rgb(49, 132, 149);
}

.ace-tm .ace_xml-pe {
  color: rgb(104, 104, 91);
}

.ace-tm .ace_entity.ace_name.ace_function {
  color: #0000A2;
}


.ace-tm .ace_heading {
  color: rgb(12, 7, 255);
}

.ace-tm .ace_list {
  color:rgb(185, 6, 144);
}

.ace-tm .ace_meta.ace_tag {
  color:rgb(0, 22, 142);
}

.ace-tm .ace_string.ace_regex {
  color: rgb(255, 0, 0)
}

.ace-tm .ace_marker-layer .ace_selection {
  background: rgb(181, 213, 255);
}
.ace-tm.ace_multiselect .ace_selection.ace_start {
  box-shadow: 0 0 3px 0px white;
}
.ace-tm .ace_marker-layer .ace_step {
  background: rgb(252, 255, 0);
}

.ace-tm .ace_marker-layer .ace_stack {
  background: rgb(164, 229, 101);
}

.ace-tm .ace_marker-layer .ace_bracket {
  margin: -1px 0 0 -1px;
  border: 1px solid rgb(192, 192, 192);
}

.ace-tm .ace_marker-layer .ace_active-line {
  background: rgba(0, 0, 0, 0.07);
}

.ace-tm .ace_gutter-active-line {
    background-color : #dcdcdc;
}

.ace-tm .ace_marker-layer .ace_selected-word {
  background: rgb(250, 250, 255);
  border: 1px solid rgb(200, 200, 250);
}

.ace-tm .ace_indent-guide {
  background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;
}

.ace-tm .ace_indent-guide-active {
  background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAIGNIUk0AAHolAACAgwAA+f8AAIDpAAB1MAAA6mAAADqYAAAXb5JfxUYAAAAZSURBVHjaYvj///9/hivKyv8BAAAA//8DACLqBhbvk+/eAAAAAElFTkSuQmCC") right repeat-y;
}

/*# sourceURL=ace/css/ace-tm */</style><style id="ace_editor.css">
.ace_br1 {border-top-left-radius    : 3px;}
.ace_br2 {border-top-right-radius   : 3px;}
.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}
.ace_br4 {border-bottom-right-radius: 3px;}
.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}
.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}
.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}
.ace_br8 {border-bottom-left-radius : 3px;}
.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}
.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}
.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}
.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}


.ace_editor {
    position: relative;
    overflow: hidden;
    padding: 0;
    font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'Source Code Pro', 'source-code-pro', monospace;
    direction: ltr;
    text-align: left;
    -webkit-tap-highlight-color: rgba(0, 0, 0, 0);
}

.ace_scroller {
    position: absolute;
    overflow: hidden;
    top: 0;
    bottom: 0;
    background-color: inherit;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    cursor: text;
}

.ace_content {
    position: absolute;
    box-sizing: border-box;
    min-width: 100%;
    contain: style size layout;
    font-variant-ligatures: no-common-ligatures;
}

.ace_keyboard-focus:focus {
    box-shadow: inset 0 0 0 2px #5E9ED6;
    outline: none;
}

.ace_dragging .ace_scroller:before{
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    content: '';
    background: rgba(250, 250, 250, 0.01);
    z-index: 1000;
}
.ace_dragging.ace_dark .ace_scroller:before{
    background: rgba(0, 0, 0, 0.01);
}

.ace_gutter {
    position: absolute;
    overflow : hidden;
    width: auto;
    top: 0;
    bottom: 0;
    left: 0;
    cursor: default;
    z-index: 4;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    contain: style size layout;
}

.ace_gutter-active-line {
    position: absolute;
    left: 0;
    right: 0;
}

.ace_scroller.ace_scroll-left:after {
    content: "";
    position: absolute;
    top: 0;
    right: 0;
    bottom: 0;
    left: 0;
    box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;
    pointer-events: none;
}

.ace_gutter-cell, .ace_gutter-cell_svg-icons {
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    padding-left: 19px;
    padding-right: 6px;
    background-repeat: no-repeat;
}

.ace_gutter-cell_svg-icons .ace_gutter_annotation {
    margin-left: -14px;
    float: left;
}

.ace_gutter-cell .ace_gutter_annotation {
    margin-left: -19px;
    float: left;
}

.ace_gutter-cell.ace_error, .ace_icon.ace_error, .ace_icon.ace_error_fold {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: 2px center;
}

.ace_gutter-cell.ace_warning, .ace_icon.ace_warning, .ace_icon.ace_warning_fold {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: 2px center;
}

.ace_gutter-cell.ace_info, .ace_icon.ace_info {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");
    background-repeat: no-repeat;
    background-position: 2px center;
}
.ace_dark .ace_gutter-cell.ace_info, .ace_dark .ace_icon.ace_info {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");
}

.ace_icon_svg.ace_error {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiI+CjxnIHN0cm9rZS13aWR0aD0iMiIgc3Ryb2tlPSJyZWQiIHNoYXBlLXJlbmRlcmluZz0iZ2VvbWV0cmljUHJlY2lzaW9uIj4KPGNpcmNsZSBmaWxsPSJub25lIiBjeD0iOCIgY3k9IjgiIHI9IjciIHN0cm9rZS1saW5lam9pbj0icm91bmQiLz4KPGxpbmUgeDE9IjExIiB5MT0iNSIgeDI9IjUiIHkyPSIxMSIvPgo8bGluZSB4MT0iMTEiIHkxPSIxMSIgeDI9IjUiIHkyPSI1Ii8+CjwvZz4KPC9zdmc+");
    background-color: crimson;
}
.ace_icon_svg.ace_warning {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiI+CjxnIHN0cm9rZS13aWR0aD0iMiIgc3Ryb2tlPSJkYXJrb3JhbmdlIiBzaGFwZS1yZW5kZXJpbmc9Imdlb21ldHJpY1ByZWNpc2lvbiI+Cjxwb2x5Z29uIHN0cm9rZS1saW5lam9pbj0icm91bmQiIGZpbGw9Im5vbmUiIHBvaW50cz0iOCAxIDE1IDE1IDEgMTUgOCAxIi8+CjxyZWN0IHg9IjgiIHk9IjEyIiB3aWR0aD0iMC4wMSIgaGVpZ2h0PSIwLjAxIi8+CjxsaW5lIHgxPSI4IiB5MT0iNiIgeDI9IjgiIHkyPSIxMCIvPgo8L2c+Cjwvc3ZnPg==");
    background-color: darkorange;
}
.ace_icon_svg.ace_info {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiI+CjxnIHN0cm9rZS13aWR0aD0iMiIgc3Ryb2tlPSJibHVlIiBzaGFwZS1yZW5kZXJpbmc9Imdlb21ldHJpY1ByZWNpc2lvbiI+CjxjaXJjbGUgZmlsbD0ibm9uZSIgY3g9IjgiIGN5PSI4IiByPSI3IiBzdHJva2UtbGluZWpvaW49InJvdW5kIi8+Cjxwb2x5bGluZSBwb2ludHM9IjggMTEgOCA4Ii8+Cjxwb2x5bGluZSBwb2ludHM9IjkgOCA2IDgiLz4KPGxpbmUgeDE9IjEwIiB5MT0iMTEiIHgyPSI2IiB5Mj0iMTEiLz4KPHJlY3QgeD0iOCIgeT0iNSIgd2lkdGg9IjAuMDEiIGhlaWdodD0iMC4wMSIvPgo8L2c+Cjwvc3ZnPg==");
    background-color: royalblue;
}

.ace_icon_svg.ace_error_fold {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyMCAxNiIgZmlsbD0ibm9uZSI+CiAgPHBhdGggZD0ibSAxOC45Mjk4NTEsNy44Mjk4MDc2IGMgMC4xNDYzNTMsNi4zMzc0NjA0IC02LjMyMzE0Nyw3Ljc3Nzg0NDQgLTcuNDc3OTEyLDcuNzc3ODQ0NCAtMi4xMDcyNzI2LC0wLjEyODc1IDUuMTE3Njc4LDAuMzU2MjQ5IDUuMDUxNjk4LC03Ljg3MDA2MTggLTAuNjA0NjcyLC04LjAwMzk3MzQ5IC03LjA3NzI3MDYsLTcuNTYzMTE4OSAtNC44NTczLC03LjQzMDM5NTU2IDEuNjA2LC0wLjExNTE0MjI1IDYuODk3NDg1LDEuMjYyNTQ1OTYgNy4yODM1MTQsNy41MjI2MTI5NiB6IiBmaWxsPSJjcmltc29uIiBzdHJva2Utd2lkdGg9IjIiLz4KICA8cGF0aCBmaWxsLXJ1bGU9ImV2ZW5vZGQiIGNsaXAtcnVsZT0iZXZlbm9kZCIgZD0ibSA4LjExNDc1NjIsMi4wNTI5ODI4IGMgMy4zNDkxNjk4LDAgNi4wNjQxMzI4LDIuNjc2ODYyNyA2LjA2NDEzMjgsNS45Nzg5NTMgMCwzLjMwMjExMjIgLTIuNzE0OTYzLDUuOTc4OTIwMiAtNi4wNjQxMzI4LDUuOTc4OTIwMiAtMy4zNDkxNDczLDAgLTYuMDY0MTc3MiwtMi42NzY4MDggLTYuMDY0MTc3MiwtNS45Nzg5MjAyIDAuMDA1MzksLTMuMjk5ODg2MSAyLjcxNzI2NTYsLTUuOTczNjQwOCA2LjA2NDE3NzIsLTUuOTc4OTUzIHogbSAwLC0xLjczNTgyNzE5IGMgLTQuMzIxNDgzNiwwIC03LjgyNDc0MDM4LDMuNDU0MDE4NDkgLTcuODI0NzQwMzgsNy43MTQ3ODAxOSAwLDQuMjYwNzI4MiAzLjUwMzI1Njc4LDcuNzE0NzQ1MiA3LjgyNDc0MDM4LDcuNzE0NzQ1MiA0LjMyMTQ0OTgsMCA3LjgyNDY5OTgsLTMuNDU0MDE3IDcuODI0Njk5OCwtNy43MTQ3NDUyIDAsLTIuMDQ2MDkxNCAtMC44MjQzOTIsLTQuMDA4MzY3MiAtMi4yOTE3NTYsLTUuNDU1MTc0NiBDIDEyLjE4MDIyNSwxLjEyOTk2NDggMTAuMTkwMDEzLDAuMzE3MTU1NjEgOC4xMTQ3NTYyLDAuMzE3MTU1NjEgWiBNIDYuOTM3NDU2Myw4LjI0MDU5ODUgNC42NzE4Njg1LDEwLjQ4NTg1MiA2LjAwODY4MTQsMTEuODc2NzI4IDguMzE3MDAzNSw5LjYwMDc5MTEgMTAuNjI1MzM3LDExLjg3NjcyOCAxMS45NjIxMzgsMTAuNDg1ODUyIDkuNjk2NTUwOCw4LjI0MDU5ODUgMTEuOTYyMTM4LDYuMDA2ODA2NiAxMC41NzMyNDYsNC42Mzc0MzM1IDguMzE3MDAzNSw2Ljg3MzQyOTcgNi4wNjA3NjA3LDQuNjM3NDMzNSA0LjY3MTg2ODUsNi4wMDY4MDY2IFoiIGZpbGw9ImNyaW1zb24iIHN0cm9rZS13aWR0aD0iMiIvPgo8L3N2Zz4=");
    background-color: crimson;
}
.ace_icon_svg.ace_warning_fold {
    -webkit-mask-image: url("data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMjAiIGhlaWdodD0iMTYiIHZpZXdCb3g9IjAgMCAyMCAxNiIgZmlsbD0ibm9uZSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj4KPHBhdGggZmlsbC1ydWxlPSJldmVub2RkIiBjbGlwLXJ1bGU9ImV2ZW5vZGQiIGQ9Ik0xNC43NzY5IDE0LjczMzdMOC42NTE5MiAyLjQ4MzY5QzguMzI5NDYgMS44Mzg3NyA3LjQwOTEzIDEuODM4NzcgNy4wODY2NyAyLjQ4MzY5TDAuOTYxNjY5IDE0LjczMzdDMC42NzA3NzUgMTUuMzE1NSAxLjA5MzgzIDE2IDEuNzQ0MjkgMTZIMTMuOTk0M0MxNC42NDQ4IDE2IDE1LjA2NzggMTUuMzE1NSAxNC43NzY5IDE0LjczMzdaTTMuMTYwMDcgMTQuMjVMNy44NjkyOSA0LjgzMTU2TDEyLjU3ODUgMTQuMjVIMy4xNjAwN1pNOC43NDQyOSAxMS42MjVWMTMuMzc1SDYuOTk0MjlWMTEuNjI1SDguNzQ0MjlaTTYuOTk0MjkgMTAuNzVWNy4yNUg4Ljc0NDI5VjEwLjc1SDYuOTk0MjlaIiBmaWxsPSIjRUM3MjExIi8+CjxwYXRoIGQ9Ik0xMS4xOTkxIDIuOTUyMzhDMTAuODgwOSAyLjMxNDY3IDEwLjM1MzcgMS44MDUyNiA5LjcwNTUgMS41MDlMMTEuMDQxIDEuMDY5NzhDMTEuNjg4MyAwLjk0OTgxNCAxMi4zMzcgMS4yNzI2MyAxMi42MzE3IDEuODYxNDFMMTcuNjEzNiAxMS44MTYxQzE4LjM1MjcgMTMuMjkyOSAxNy41OTM4IDE1LjA4MDQgMTYuMDE4IDE1LjU3NDVDMTYuNDA0NCAxNC40NTA3IDE2LjMyMzEgMTMuMjE4OCAxNS43OTI0IDEyLjE1NTVMMTEuMTk5MSAyLjk1MjM4WiIgZmlsbD0iI0VDNzIxMSIvPgo8L3N2Zz4=");
    background-color: darkorange;
}

.ace_scrollbar {
    contain: strict;
    position: absolute;
    right: 0;
    bottom: 0;
    z-index: 6;
}

.ace_scrollbar-inner {
    position: absolute;
    cursor: text;
    left: 0;
    top: 0;
}

.ace_scrollbar-v{
    overflow-x: hidden;
    overflow-y: scroll;
    top: 0;
}

.ace_scrollbar-h {
    overflow-x: scroll;
    overflow-y: hidden;
    left: 0;
}

.ace_print-margin {
    position: absolute;
    height: 100%;
}

.ace_text-input {
    position: absolute;
    z-index: 0;
    width: 0.5em;
    height: 1em;
    opacity: 0;
    background: transparent;
    -moz-appearance: none;
    appearance: none;
    border: none;
    resize: none;
    outline: none;
    overflow: hidden;
    font: inherit;
    padding: 0 1px;
    margin: 0 -1px;
    contain: strict;
    -ms-user-select: text;
    -moz-user-select: text;
    -webkit-user-select: text;
    user-select: text;
    /*with `pre-line` chrome inserts &nbsp; instead of space*/
    white-space: pre!important;
}
.ace_text-input.ace_composition {
    background: transparent;
    color: inherit;
    z-index: 1000;
    opacity: 1;
}
.ace_composition_placeholder { color: transparent }
.ace_composition_marker { 
    border-bottom: 1px solid;
    position: absolute;
    border-radius: 0;
    margin-top: 1px;
}

[ace_nocontext=true] {
    transform: none!important;
    filter: none!important;
    clip-path: none!important;
    mask : none!important;
    contain: none!important;
    perspective: none!important;
    mix-blend-mode: initial!important;
    z-index: auto;
}

.ace_layer {
    z-index: 1;
    position: absolute;
    overflow: hidden;
    /* workaround for chrome bug https://github.com/ajaxorg/ace/issues/2312*/
    word-wrap: normal;
    white-space: pre;
    height: 100%;
    width: 100%;
    box-sizing: border-box;
    /* setting pointer-events: auto; on node under the mouse, which changes
        during scroll, will break mouse wheel scrolling in Safari */
    pointer-events: none;
}

.ace_gutter-layer {
    position: relative;
    width: auto;
    text-align: right;
    pointer-events: auto;
    height: 1000000px;
    contain: style size layout;
}

.ace_text-layer {
    font: inherit !important;
    position: absolute;
    height: 1000000px;
    width: 1000000px;
    contain: style size layout;
}

.ace_text-layer > .ace_line, .ace_text-layer > .ace_line_group {
    contain: style size layout;
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
}

.ace_hidpi .ace_text-layer,
.ace_hidpi .ace_gutter-layer,
.ace_hidpi .ace_content,
.ace_hidpi .ace_gutter {
    contain: strict;
}
.ace_hidpi .ace_text-layer > .ace_line, 
.ace_hidpi .ace_text-layer > .ace_line_group {
    contain: strict;
}

.ace_cjk {
    display: inline-block;
    text-align: center;
}

.ace_cursor-layer {
    z-index: 4;
}

.ace_cursor {
    z-index: 4;
    position: absolute;
    box-sizing: border-box;
    border-left: 2px solid;
    /* workaround for smooth cursor repaintng whole screen in chrome */
    transform: translatez(0);
}

.ace_multiselect .ace_cursor {
    border-left-width: 1px;
}

.ace_slim-cursors .ace_cursor {
    border-left-width: 1px;
}

.ace_overwrite-cursors .ace_cursor {
    border-left-width: 0;
    border-bottom: 1px solid;
}

.ace_hidden-cursors .ace_cursor {
    opacity: 0.2;
}

.ace_hasPlaceholder .ace_hidden-cursors .ace_cursor {
    opacity: 0;
}

.ace_smooth-blinking .ace_cursor {
    transition: opacity 0.18s;
}

.ace_animate-blinking .ace_cursor {
    animation-duration: 1000ms;
    animation-timing-function: step-end;
    animation-name: blink-ace-animate;
    animation-iteration-count: infinite;
}

.ace_animate-blinking.ace_smooth-blinking .ace_cursor {
    animation-duration: 1000ms;
    animation-timing-function: ease-in-out;
    animation-name: blink-ace-animate-smooth;
}
    
@keyframes blink-ace-animate {
    from, to { opacity: 1; }
    60% { opacity: 0; }
}

@keyframes blink-ace-animate-smooth {
    from, to { opacity: 1; }
    45% { opacity: 1; }
    60% { opacity: 0; }
    85% { opacity: 0; }
}

.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {
    position: absolute;
    z-index: 3;
}

.ace_marker-layer .ace_selection {
    position: absolute;
    z-index: 5;
}

.ace_marker-layer .ace_bracket {
    position: absolute;
    z-index: 6;
}

.ace_marker-layer .ace_error_bracket {
    position: absolute;
    border-bottom: 1px solid #DE5555;
    border-radius: 0;
}

.ace_marker-layer .ace_active-line {
    position: absolute;
    z-index: 2;
}

.ace_marker-layer .ace_selected-word {
    position: absolute;
    z-index: 4;
    box-sizing: border-box;
}

.ace_line .ace_fold {
    box-sizing: border-box;

    display: inline-block;
    height: 11px;
    margin-top: -2px;
    vertical-align: middle;

    background-image:
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");
    background-repeat: no-repeat, repeat-x;
    background-position: center center, top left;
    color: transparent;

    border: 1px solid black;
    border-radius: 2px;

    cursor: pointer;
    pointer-events: auto;
}

.ace_dark .ace_fold {
}

.ace_fold:hover{
    background-image:
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");
}

.ace_tooltip {
    background-color: #f5f5f5;
    border: 1px solid gray;
    border-radius: 1px;
    box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);
    color: black;
    max-width: 100%;
    padding: 3px 4px;
    position: fixed;
    z-index: 999999;
    box-sizing: border-box;
    cursor: default;
    white-space: pre-wrap;
    word-wrap: break-word;
    line-height: normal;
    font-style: normal;
    font-weight: normal;
    letter-spacing: normal;
    pointer-events: none;
    overflow: auto;
    max-width: min(60em, 66vw);
    overscroll-behavior: contain;
}
.ace_tooltip pre {
    white-space: pre-wrap;
}

.ace_tooltip.ace_dark {
    background-color: #636363;
    color: #fff;
}

.ace_tooltip:focus {
    outline: 1px solid #5E9ED6;
}

.ace_icon {
    display: inline-block;
    width: 18px;
    vertical-align: top;
}

.ace_icon_svg {
    display: inline-block;
    width: 12px;
    vertical-align: top;
    -webkit-mask-repeat: no-repeat;
    -webkit-mask-size: 12px;
    -webkit-mask-position: center;
}

.ace_folding-enabled > .ace_gutter-cell, .ace_folding-enabled > .ace_gutter-cell_svg-icons {
    padding-right: 13px;
}

.ace_fold-widget {
    box-sizing: border-box;

    margin: 0 -12px 0 1px;
    display: none;
    width: 11px;
    vertical-align: top;

    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: center;

    border-radius: 3px;
    
    border: 1px solid transparent;
    cursor: pointer;
}

.ace_folding-enabled .ace_fold-widget {
    display: inline-block;   
}

.ace_fold-widget.ace_end {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");
}

.ace_fold-widget.ace_closed {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");
}

.ace_fold-widget:hover {
    border: 1px solid rgba(0, 0, 0, 0.3);
    background-color: rgba(255, 255, 255, 0.2);
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);
}

.ace_fold-widget:active {
    border: 1px solid rgba(0, 0, 0, 0.4);
    background-color: rgba(0, 0, 0, 0.05);
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);
}
/**
 * Dark version for fold widgets
 */
.ace_dark .ace_fold-widget {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");
}
.ace_dark .ace_fold-widget.ace_end {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");
}
.ace_dark .ace_fold-widget.ace_closed {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");
}
.ace_dark .ace_fold-widget:hover {
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);
    background-color: rgba(255, 255, 255, 0.1);
}
.ace_dark .ace_fold-widget:active {
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);
}

.ace_inline_button {
    border: 1px solid lightgray;
    display: inline-block;
    margin: -1px 8px;
    padding: 0 5px;
    pointer-events: auto;
    cursor: pointer;
}
.ace_inline_button:hover {
    border-color: gray;
    background: rgba(200,200,200,0.2);
    display: inline-block;
    pointer-events: auto;
}

.ace_fold-widget.ace_invalid {
    background-color: #FFB4B4;
    border-color: #DE5555;
}

.ace_fade-fold-widgets .ace_fold-widget {
    transition: opacity 0.4s ease 0.05s;
    opacity: 0;
}

.ace_fade-fold-widgets:hover .ace_fold-widget {
    transition: opacity 0.05s ease 0.05s;
    opacity:1;
}

.ace_underline {
    text-decoration: underline;
}

.ace_bold {
    font-weight: bold;
}

.ace_nobold .ace_bold {
    font-weight: normal;
}

.ace_italic {
    font-style: italic;
}


.ace_error-marker {
    background-color: rgba(255, 0, 0,0.2);
    position: absolute;
    z-index: 9;
}

.ace_highlight-marker {
    background-color: rgba(255, 255, 0,0.2);
    position: absolute;
    z-index: 8;
}

.ace_mobile-menu {
    position: absolute;
    line-height: 1.5;
    border-radius: 4px;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    background: white;
    box-shadow: 1px 3px 2px grey;
    border: 1px solid #dcdcdc;
    color: black;
}
.ace_dark > .ace_mobile-menu {
    background: #333;
    color: #ccc;
    box-shadow: 1px 3px 2px grey;
    border: 1px solid #444;

}
.ace_mobile-button {
    padding: 2px;
    cursor: pointer;
    overflow: hidden;
}
.ace_mobile-button:hover {
    background-color: #eee;
    opacity:1;
}
.ace_mobile-button:active {
    background-color: #ddd;
}

.ace_placeholder {
    font-family: arial;
    transform: scale(0.9);
    transform-origin: left;
    white-space: pre;
    opacity: 0.7;
    margin: 0 10px;
}

.ace_ghost_text {
    opacity: 0.5;
    font-style: italic;
}

.ace_ghost_text > div {
    white-space: pre;
}

.ghost_text_line_wrapped::after {
    content: "↩";
    position: absolute;
}

.ace_lineWidgetContainer.ace_ghost_text {
    margin: 0px 4px
}

.ace_screenreader-only {
    position:absolute;
    left:-10000px;
    top:auto;
    width:1px;
    height:1px;
    overflow:hidden;
}
/*# sourceURL=ace/css/ace_editor.css */</style><style id="ace_scrollbar.css">.ace_editor>.ace_sb-v div, .ace_editor>.ace_sb-h div{
  position: absolute;
  background: rgba(128, 128, 128, 0.6);
  -moz-box-sizing: border-box;
  box-sizing: border-box;
  border: 1px solid #bbb;
  border-radius: 2px;
  z-index: 8;
}
.ace_editor>.ace_sb-v, .ace_editor>.ace_sb-h {
  position: absolute;
  z-index: 6;
  background: none;
  overflow: hidden!important;
}
.ace_editor>.ace_sb-v {
  z-index: 6;
  right: 0;
  top: 0;
  width: 12px;
}
.ace_editor>.ace_sb-v div {
  z-index: 8;
  right: 0;
  width: 100%;
}
.ace_editor>.ace_sb-h {
  bottom: 0;
  left: 0;
  height: 12px;
}
.ace_editor>.ace_sb-h div {
  bottom: 0;
  height: 100%;
}
.ace_editor>.ace_sb_grabbed {
  z-index: 8;
  background: #000;
}
/*# sourceURL=ace/css/ace_scrollbar.css */</style>
  <link rel="icon" href="https://www.codechef.com/favicon.ico" type="image/x-icon">
  <title>Janmansh and Assignments Practice Problem in 500 to 1000 difficulty problems</title>
  
  <meta name="description" content="Test your  knowledge with our Janmansh and Assignments practice problem.  Dive into the world of logical-problems challenges at CodeChef.">
  <meta name="og:image" content="https://cdn.codechef.com/sites/all/themes/abessive/cc-logo.png">
  <meta name="og:type" content="website">
  <meta name="theme-color" content="#000000">
  <meta name="robots" content="index, follow">
  <link rel="canonical" href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JASSIGNMENTS">
  <script type="text/javascript" async="" src="./DAY7-CODE_files/analytics.js.download"></script><script type="text/javascript" async="" src="./DAY7-CODE_files/js"></script><script async="" src="./DAY7-CODE_files/gtm.js.download"></script><script async="" src="./DAY7-CODE_files/client" type="text/javascript"></script>
  <style type="text/css">@font-face {font-family:Open Sans;font-style:normal;font-weight:300;src:url(/cf-fonts/v/open-sans/5.0.20/greek/wght/normal.woff2);unicode-range:U+0370-03FF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:300;src:url(/cf-fonts/v/open-sans/5.0.20/latin-ext/wght/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:300;src:url(/cf-fonts/v/open-sans/5.0.20/cyrillic-ext/wght/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:300;src:url(/cf-fonts/v/open-sans/5.0.20/hebrew/wght/normal.woff2);unicode-range:U+0590-05FF,U+200C-2010,U+20AA,U+25CC,U+FB1D-FB4F;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:300;src:url(/cf-fonts/v/open-sans/5.0.20/vietnamese/wght/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:300;src:url(/cf-fonts/v/open-sans/5.0.20/greek-ext/wght/normal.woff2);unicode-range:U+1F00-1FFF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:300;src:url(/cf-fonts/v/open-sans/5.0.20/latin/wght/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:300;src:url(/cf-fonts/v/open-sans/5.0.20/cyrillic/wght/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:400;src:url(/cf-fonts/v/open-sans/5.0.20/latin-ext/wght/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:400;src:url(/cf-fonts/v/open-sans/5.0.20/latin/wght/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:400;src:url(/cf-fonts/v/open-sans/5.0.20/cyrillic-ext/wght/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:400;src:url(/cf-fonts/v/open-sans/5.0.20/greek/wght/normal.woff2);unicode-range:U+0370-03FF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:400;src:url(/cf-fonts/v/open-sans/5.0.20/cyrillic/wght/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:400;src:url(/cf-fonts/v/open-sans/5.0.20/greek-ext/wght/normal.woff2);unicode-range:U+1F00-1FFF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:400;src:url(/cf-fonts/v/open-sans/5.0.20/vietnamese/wght/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:400;src:url(/cf-fonts/v/open-sans/5.0.20/hebrew/wght/normal.woff2);unicode-range:U+0590-05FF,U+200C-2010,U+20AA,U+25CC,U+FB1D-FB4F;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:600;src:url(/cf-fonts/v/open-sans/5.0.20/cyrillic/wght/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:600;src:url(/cf-fonts/v/open-sans/5.0.20/hebrew/wght/normal.woff2);unicode-range:U+0590-05FF,U+200C-2010,U+20AA,U+25CC,U+FB1D-FB4F;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:600;src:url(/cf-fonts/v/open-sans/5.0.20/cyrillic-ext/wght/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:600;src:url(/cf-fonts/v/open-sans/5.0.20/latin-ext/wght/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:600;src:url(/cf-fonts/v/open-sans/5.0.20/greek/wght/normal.woff2);unicode-range:U+0370-03FF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:600;src:url(/cf-fonts/v/open-sans/5.0.20/greek-ext/wght/normal.woff2);unicode-range:U+1F00-1FFF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:600;src:url(/cf-fonts/v/open-sans/5.0.20/vietnamese/wght/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:600;src:url(/cf-fonts/v/open-sans/5.0.20/latin/wght/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:700;src:url(/cf-fonts/v/open-sans/5.0.20/vietnamese/wght/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:700;src:url(/cf-fonts/v/open-sans/5.0.20/latin-ext/wght/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:700;src:url(/cf-fonts/v/open-sans/5.0.20/cyrillic-ext/wght/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:700;src:url(/cf-fonts/v/open-sans/5.0.20/hebrew/wght/normal.woff2);unicode-range:U+0590-05FF,U+200C-2010,U+20AA,U+25CC,U+FB1D-FB4F;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:700;src:url(/cf-fonts/v/open-sans/5.0.20/cyrillic/wght/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:700;src:url(/cf-fonts/v/open-sans/5.0.20/greek-ext/wght/normal.woff2);unicode-range:U+1F00-1FFF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:700;src:url(/cf-fonts/v/open-sans/5.0.20/latin/wght/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:700;src:url(/cf-fonts/v/open-sans/5.0.20/greek/wght/normal.woff2);unicode-range:U+0370-03FF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:800;src:url(/cf-fonts/v/open-sans/5.0.20/latin-ext/wght/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:800;src:url(/cf-fonts/v/open-sans/5.0.20/greek/wght/normal.woff2);unicode-range:U+0370-03FF;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:800;src:url(/cf-fonts/v/open-sans/5.0.20/cyrillic-ext/wght/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:800;src:url(/cf-fonts/v/open-sans/5.0.20/hebrew/wght/normal.woff2);unicode-range:U+0590-05FF,U+200C-2010,U+20AA,U+25CC,U+FB1D-FB4F;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:800;src:url(/cf-fonts/v/open-sans/5.0.20/latin/wght/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:800;src:url(/cf-fonts/v/open-sans/5.0.20/vietnamese/wght/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:800;src:url(/cf-fonts/v/open-sans/5.0.20/cyrillic/wght/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Open Sans;font-style:normal;font-weight:800;src:url(/cf-fonts/v/open-sans/5.0.20/greek-ext/wght/normal.woff2);unicode-range:U+1F00-1FFF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:100;src:url(/cf-fonts/v/roboto-mono/5.0.16/latin/wght/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:100;src:url(/cf-fonts/v/roboto-mono/5.0.16/cyrillic/wght/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:100;src:url(/cf-fonts/v/roboto-mono/5.0.16/cyrillic-ext/wght/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:100;src:url(/cf-fonts/v/roboto-mono/5.0.16/greek/wght/normal.woff2);unicode-range:U+0370-03FF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:100;src:url(/cf-fonts/v/roboto-mono/5.0.16/latin-ext/wght/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:100;src:url(/cf-fonts/v/roboto-mono/5.0.16/vietnamese/wght/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:300;src:url(/cf-fonts/v/roboto-mono/5.0.16/latin-ext/wght/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:300;src:url(/cf-fonts/v/roboto-mono/5.0.16/cyrillic/wght/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:300;src:url(/cf-fonts/v/roboto-mono/5.0.16/cyrillic-ext/wght/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:300;src:url(/cf-fonts/v/roboto-mono/5.0.16/greek/wght/normal.woff2);unicode-range:U+0370-03FF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:300;src:url(/cf-fonts/v/roboto-mono/5.0.16/latin/wght/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:300;src:url(/cf-fonts/v/roboto-mono/5.0.16/vietnamese/wght/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:400;src:url(/cf-fonts/v/roboto-mono/5.0.16/cyrillic-ext/wght/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:400;src:url(/cf-fonts/v/roboto-mono/5.0.16/latin/wght/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:400;src:url(/cf-fonts/v/roboto-mono/5.0.16/latin-ext/wght/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:400;src:url(/cf-fonts/v/roboto-mono/5.0.16/vietnamese/wght/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:400;src:url(/cf-fonts/v/roboto-mono/5.0.16/cyrillic/wght/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:400;src:url(/cf-fonts/v/roboto-mono/5.0.16/greek/wght/normal.woff2);unicode-range:U+0370-03FF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:500;src:url(/cf-fonts/v/roboto-mono/5.0.16/greek/wght/normal.woff2);unicode-range:U+0370-03FF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:500;src:url(/cf-fonts/v/roboto-mono/5.0.16/latin-ext/wght/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:500;src:url(/cf-fonts/v/roboto-mono/5.0.16/cyrillic-ext/wght/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:500;src:url(/cf-fonts/v/roboto-mono/5.0.16/latin/wght/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:500;src:url(/cf-fonts/v/roboto-mono/5.0.16/cyrillic/wght/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:500;src:url(/cf-fonts/v/roboto-mono/5.0.16/vietnamese/wght/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:700;src:url(/cf-fonts/v/roboto-mono/5.0.16/cyrillic/wght/normal.woff2);unicode-range:U+0301,U+0400-045F,U+0490-0491,U+04B0-04B1,U+2116;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:700;src:url(/cf-fonts/v/roboto-mono/5.0.16/latin/wght/normal.woff2);unicode-range:U+0000-00FF,U+0131,U+0152-0153,U+02BB-02BC,U+02C6,U+02DA,U+02DC,U+0304,U+0308,U+0329,U+2000-206F,U+2074,U+20AC,U+2122,U+2191,U+2193,U+2212,U+2215,U+FEFF,U+FFFD;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:700;src:url(/cf-fonts/v/roboto-mono/5.0.16/cyrillic-ext/wght/normal.woff2);unicode-range:U+0460-052F,U+1C80-1C88,U+20B4,U+2DE0-2DFF,U+A640-A69F,U+FE2E-FE2F;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:700;src:url(/cf-fonts/v/roboto-mono/5.0.16/latin-ext/wght/normal.woff2);unicode-range:U+0100-02AF,U+0304,U+0308,U+0329,U+1E00-1E9F,U+1EF2-1EFF,U+2020,U+20A0-20AB,U+20AD-20CF,U+2113,U+2C60-2C7F,U+A720-A7FF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:700;src:url(/cf-fonts/v/roboto-mono/5.0.16/greek/wght/normal.woff2);unicode-range:U+0370-03FF;font-display:swap;}@font-face {font-family:Roboto Mono;font-style:normal;font-weight:700;src:url(/cf-fonts/v/roboto-mono/5.0.16/vietnamese/wght/normal.woff2);unicode-range:U+0102-0103,U+0110-0111,U+0128-0129,U+0168-0169,U+01A0-01A1,U+01AF-01B0,U+0300-0301,U+0303-0304,U+0308-0309,U+0323,U+0329,U+1EA0-1EF9,U+20AB;font-display:swap;}</style>

  <!-- Initial loader classes -->
  <style>
    @keyframes spin {
      0% {
        transform: rotate(0deg);
      }
      100% {
        transform: rotate(360deg);
      }
    }

    .loadingIcon {
      border: 0.4em solid rgba(0, 0, 0, 0.0);
      border-top: 0.4em solid #2A67B1;
      border-radius: 50%;
      width: 4em;
      height: 4em;
      animation: spin 1s linear infinite;
      color: #2A67B1;
    }

    .loading {
      width: 100%;
      height: 100vh;
      display: flex;
      flex-direction: column;
      justify-content: center;
      align-items: center;
      color: rgb(108, 116, 134);
      background: inherit;
      z-index: 100;
      position: absolute;
    }

    .message {
      padding: 16px;
      text-align: center;
      font-family: sans-serif;
    }

    /* Dark Mode styles */
    .loader-icon-dark {
      border-top: 0.4em solid #5780b0;
    }
    .dark {
      background: #1d1e23;
      color: rgb(255 255 255 / 60%);
    }
  </style>
  <script type="text/javascript">

    const languageIdeRoutes = [
      'python', 'java', 'cpp', 'c', 'pypy', 'csharp', 'javascript', 'go', 'php', 'kotlin', 'rust', 'r', 'sql', 'html',
      'oracledb'
    ];

    if (
      (['pro', 'contests'].includes(window.location.pathname.split('/').filter(Boolean).pop())) ||
      (['learn', 'games', 'viewsolution',
        'submit', 'practice', 'dashboard', 'getting-started', 'skill-test', 'college-program', 'practice-old',
        'roadmap', 'blogs', 'roadmaps', 'blogs', 'skill-tests', 'ide', 'mobile'
      ].includes(window.location.pathname.split('/').filter(Boolean)[0])) ||
      (['submit'].includes(window.location.pathname.split('/').filter(Boolean)[1])) ||
      (['status'].includes(window.location.pathname.split('/').filter(Boolean).slice(-2, -1).pop())) || [
        // Regex to match the practice and contest submit routes
        /^\/(submit\/([A-Z]+[A-Z0-9_]*)+|problems\/([A-Z]+[A-Z0-9_]*)+|([A-Z]+[A-Z0-9_]*)+\/submit\/([A-Z]+[A-Z0-9_]*)+|([A-Z]+[A-Z0-9_]*)+\/problems\/([A-Z]+[A-Z0-9_]*)+)$/
      ].some((regexp) => (regexp.test(window.location.pathname))) ||
      (languageIdeRoutes.some(lang => window.location.pathname.includes(`${lang}-online-compiler`)))
    ) {
      const metaElement = document.createElement('meta');
      metaElement.setAttribute('name', 'viewport');
      metaElement.setAttribute('content', 'width=device-width, initial-scale=1');
      document.head.appendChild(metaElement);
    }

    (function (w, d, s, l, i) {
      w[l] = w[l] || [];
      w[l].push({
        'gtm.start': new Date().getTime(),
        event: 'gtm.js'
      });
      var f = d.getElementsByTagName(s)[0],
        j = d.createElement(s),
        dl = l != 'dataLayer' ? '&l=' + l : '';
      j.async = true;
      j.src =
        'https://www.googletagmanager.com/gtm.js?id=' + i + dl;
      f.parentNode.insertBefore(j, f);
    })(window, document, 'script', 'dataLayer', 'GTM-TV5X2M');
  </script>
  <script type="module" crossorigin="" src="./DAY7-CODE_files/index-ZqFJPXIs.js.download"></script>
  <link rel="modulepreload" crossorigin="" href="https://static.codechef.com/build/react2/assets/vendor-zROx3hlC.js">
  <link rel="modulepreload" crossorigin="" href="https://static.codechef.com/build/react2/assets/@material-ui-4DicYcu0.js">
  <link rel="modulepreload" crossorigin="" href="https://static.codechef.com/build/react2/assets/sweetalert2-7m5fHpSs.js">
  <link rel="modulepreload" crossorigin="" href="https://static.codechef.com/build/react2/assets/moment-qLcDxn7m.js">
  <link rel="stylesheet" crossorigin="" href="./DAY7-CODE_files/sweetalert2-xhNZC6U0.css">
  <link rel="stylesheet" crossorigin="" href="./DAY7-CODE_files/index-ruvBpr_5.css">
<meta name="viewport" content="width=device-width, initial-scale=1"><style data-jss="" data-meta="MuiSvgIcon">
.MuiSvgIcon-root {
  fill: currentColor;
  width: 1em;
  height: 1em;
  display: inline-block;
  font-size: 1.5rem;
  transition: fill 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  flex-shrink: 0;
  user-select: none;
}
.MuiSvgIcon-colorPrimary {
  color: #3f51b5;
}
.MuiSvgIcon-colorSecondary {
  color: #f50057;
}
.MuiSvgIcon-colorAction {
  color: rgba(0, 0, 0, 0.54);
}
.MuiSvgIcon-colorError {
  color: #f44336;
}
.MuiSvgIcon-colorDisabled {
  color: rgba(0, 0, 0, 0.26);
}
.MuiSvgIcon-fontSizeInherit {
  font-size: inherit;
}
.MuiSvgIcon-fontSizeSmall {
  font-size: 1.25rem;
}
.MuiSvgIcon-fontSizeLarge {
  font-size: 2.1875rem;
}
</style><style data-jss="" data-meta="MuiCollapse">
.MuiCollapse-container {
  height: 0;
  overflow: hidden;
  transition: height 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiCollapse-entered {
  height: auto;
  overflow: visible;
}
.MuiCollapse-hidden {
  visibility: hidden;
}
.MuiCollapse-wrapper {
  display: flex;
}
.MuiCollapse-wrapperInner {
  width: 100%;
}
</style><style data-jss="" data-meta="MuiPaper">
.MuiPaper-root {
  color: rgba(0, 0, 0, 0.87);
  transition: box-shadow 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  background-color: #fff;
}
.MuiPaper-rounded {
  border-radius: 4px;
}
.MuiPaper-outlined {
  border: 1px solid rgba(0, 0, 0, 0.12);
}
.MuiPaper-elevation0 {
  box-shadow: none;
}
.MuiPaper-elevation1 {
  box-shadow: 0px 2px 1px -1px rgba(0,0,0,0.2),0px 1px 1px 0px rgba(0,0,0,0.14),0px 1px 3px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation2 {
  box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation3 {
  box-shadow: 0px 3px 3px -2px rgba(0,0,0,0.2),0px 3px 4px 0px rgba(0,0,0,0.14),0px 1px 8px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation4 {
  box-shadow: 0px 2px 4px -1px rgba(0,0,0,0.2),0px 4px 5px 0px rgba(0,0,0,0.14),0px 1px 10px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation5 {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 5px 8px 0px rgba(0,0,0,0.14),0px 1px 14px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation6 {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation7 {
  box-shadow: 0px 4px 5px -2px rgba(0,0,0,0.2),0px 7px 10px 1px rgba(0,0,0,0.14),0px 2px 16px 1px rgba(0,0,0,0.12);
}
.MuiPaper-elevation8 {
  box-shadow: 0px 5px 5px -3px rgba(0,0,0,0.2),0px 8px 10px 1px rgba(0,0,0,0.14),0px 3px 14px 2px rgba(0,0,0,0.12);
}
.MuiPaper-elevation9 {
  box-shadow: 0px 5px 6px -3px rgba(0,0,0,0.2),0px 9px 12px 1px rgba(0,0,0,0.14),0px 3px 16px 2px rgba(0,0,0,0.12);
}
.MuiPaper-elevation10 {
  box-shadow: 0px 6px 6px -3px rgba(0,0,0,0.2),0px 10px 14px 1px rgba(0,0,0,0.14),0px 4px 18px 3px rgba(0,0,0,0.12);
}
.MuiPaper-elevation11 {
  box-shadow: 0px 6px 7px -4px rgba(0,0,0,0.2),0px 11px 15px 1px rgba(0,0,0,0.14),0px 4px 20px 3px rgba(0,0,0,0.12);
}
.MuiPaper-elevation12 {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 12px 17px 2px rgba(0,0,0,0.14),0px 5px 22px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation13 {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 13px 19px 2px rgba(0,0,0,0.14),0px 5px 24px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation14 {
  box-shadow: 0px 7px 9px -4px rgba(0,0,0,0.2),0px 14px 21px 2px rgba(0,0,0,0.14),0px 5px 26px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation15 {
  box-shadow: 0px 8px 9px -5px rgba(0,0,0,0.2),0px 15px 22px 2px rgba(0,0,0,0.14),0px 6px 28px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation16 {
  box-shadow: 0px 8px 10px -5px rgba(0,0,0,0.2),0px 16px 24px 2px rgba(0,0,0,0.14),0px 6px 30px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation17 {
  box-shadow: 0px 8px 11px -5px rgba(0,0,0,0.2),0px 17px 26px 2px rgba(0,0,0,0.14),0px 6px 32px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation18 {
  box-shadow: 0px 9px 11px -5px rgba(0,0,0,0.2),0px 18px 28px 2px rgba(0,0,0,0.14),0px 7px 34px 6px rgba(0,0,0,0.12);
}
.MuiPaper-elevation19 {
  box-shadow: 0px 9px 12px -6px rgba(0,0,0,0.2),0px 19px 29px 2px rgba(0,0,0,0.14),0px 7px 36px 6px rgba(0,0,0,0.12);
}
.MuiPaper-elevation20 {
  box-shadow: 0px 10px 13px -6px rgba(0,0,0,0.2),0px 20px 31px 3px rgba(0,0,0,0.14),0px 8px 38px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation21 {
  box-shadow: 0px 10px 13px -6px rgba(0,0,0,0.2),0px 21px 33px 3px rgba(0,0,0,0.14),0px 8px 40px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation22 {
  box-shadow: 0px 10px 14px -6px rgba(0,0,0,0.2),0px 22px 35px 3px rgba(0,0,0,0.14),0px 8px 42px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation23 {
  box-shadow: 0px 11px 14px -7px rgba(0,0,0,0.2),0px 23px 36px 3px rgba(0,0,0,0.14),0px 9px 44px 8px rgba(0,0,0,0.12);
}
.MuiPaper-elevation24 {
  box-shadow: 0px 11px 15px -7px rgba(0,0,0,0.2),0px 24px 38px 3px rgba(0,0,0,0.14),0px 9px 46px 8px rgba(0,0,0,0.12);
}
</style><style data-jss="" data-meta="MuiAccordion">
.MuiAccordion-root {
  position: relative;
  transition: margin 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiAccordion-root:before {
  top: -1px;
  left: 0;
  right: 0;
  height: 1px;
  content: "";
  opacity: 1;
  position: absolute;
  transition: opacity 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  background-color: rgba(0, 0, 0, 0.12);
}
.MuiAccordion-root.Mui-expanded {
  margin: 16px 0;
}
.MuiAccordion-root.Mui-disabled {
  background-color: rgba(0, 0, 0, 0.12);
}
.MuiAccordion-root.Mui-expanded + .MuiAccordion-root:before {
  display: none;
}
.MuiAccordion-root.Mui-expanded:first-child {
  margin-top: 0;
}
.MuiAccordion-root.Mui-expanded:last-child {
  margin-bottom: 0;
}
.MuiAccordion-root.Mui-expanded:before {
  opacity: 0;
}
.MuiAccordion-root:first-child:before {
  display: none;
}
.MuiAccordion-rounded {
  border-radius: 0;
}
.MuiAccordion-rounded:first-child {
  border-top-left-radius: 4px;
  border-top-right-radius: 4px;
}
.MuiAccordion-rounded:last-child {
  border-bottom-left-radius: 4px;
  border-bottom-right-radius: 4px;
}
@supports (-ms-ime-align: auto) {
  .MuiAccordion-rounded:last-child {
    border-bottom-left-radius: 0;
    border-bottom-right-radius: 0;
  }
}
</style><style data-jss="" data-meta="MuiAccordionDetails">
.MuiAccordionDetails-root {
  display: flex;
  padding: 8px 16px 16px;
}
</style><style data-jss="" data-meta="MuiTouchRipple">
.MuiTouchRipple-root {
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  z-index: 0;
  overflow: hidden;
  position: absolute;
  border-radius: inherit;
  pointer-events: none;
}
.MuiTouchRipple-ripple {
  opacity: 0;
  position: absolute;
}
.MuiTouchRipple-rippleVisible {
  opacity: 0.3;
  animation: MuiTouchRipple-keyframes-enter 550ms cubic-bezier(0.4, 0, 0.2, 1);
  transform: scale(1);
}
.MuiTouchRipple-ripplePulsate {
  animation-duration: 200ms;
}
.MuiTouchRipple-child {
  width: 100%;
  height: 100%;
  display: block;
  opacity: 1;
  border-radius: 50%;
  background-color: currentColor;
}
.MuiTouchRipple-childLeaving {
  opacity: 0;
  animation: MuiTouchRipple-keyframes-exit 550ms cubic-bezier(0.4, 0, 0.2, 1);
}
.MuiTouchRipple-childPulsate {
  top: 0;
  left: 0;
  position: absolute;
  animation: MuiTouchRipple-keyframes-pulsate 2500ms cubic-bezier(0.4, 0, 0.2, 1) 200ms infinite;
}
@-webkit-keyframes MuiTouchRipple-keyframes-enter {
  0% {
    opacity: 0.1;
    transform: scale(0);
  }
  100% {
    opacity: 0.3;
    transform: scale(1);
  }
}
@-webkit-keyframes MuiTouchRipple-keyframes-exit {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
  }
}
@-webkit-keyframes MuiTouchRipple-keyframes-pulsate {
  0% {
    transform: scale(1);
  }
  50% {
    transform: scale(0.92);
  }
  100% {
    transform: scale(1);
  }
}
</style><style data-jss="" data-meta="MuiButtonBase">
.MuiButtonBase-root {
  color: inherit;
  border: 0;
  cursor: pointer;
  margin: 0;
  display: inline-flex;
  outline: 0;
  padding: 0;
  position: relative;
  align-items: center;
  user-select: none;
  border-radius: 0;
  vertical-align: middle;
  -moz-appearance: none;
  justify-content: center;
  text-decoration: none;
  background-color: transparent;
  -webkit-appearance: none;
  -webkit-tap-highlight-color: transparent;
}
.MuiButtonBase-root::-moz-focus-inner {
  border-style: none;
}
.MuiButtonBase-root.Mui-disabled {
  cursor: default;
  pointer-events: none;
}
@media print {
  .MuiButtonBase-root {
    -webkit-print-color-adjust: exact;
  }
}
</style><style data-jss="" data-meta="MuiIconButton">
.MuiIconButton-root {
  flex: 0 0 auto;
  color: rgba(0, 0, 0, 0.54);
  padding: 12px;
  overflow: visible;
  font-size: 1.5rem;
  text-align: center;
  transition: background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  border-radius: 50%;
}
.MuiIconButton-root:hover {
  background-color: rgba(0, 0, 0, 0.04);
}
.MuiIconButton-root.Mui-disabled {
  color: rgba(0, 0, 0, 0.26);
  background-color: transparent;
}
@media (hover: none) {
  .MuiIconButton-root:hover {
    background-color: transparent;
  }
}
.MuiIconButton-edgeStart {
  margin-left: -12px;
}
.MuiIconButton-sizeSmall.MuiIconButton-edgeStart {
  margin-left: -3px;
}
.MuiIconButton-edgeEnd {
  margin-right: -12px;
}
.MuiIconButton-sizeSmall.MuiIconButton-edgeEnd {
  margin-right: -3px;
}
.MuiIconButton-colorInherit {
  color: inherit;
}
.MuiIconButton-colorPrimary {
  color: #3f51b5;
}
.MuiIconButton-colorPrimary:hover {
  background-color: rgba(63, 81, 181, 0.04);
}
@media (hover: none) {
  .MuiIconButton-colorPrimary:hover {
    background-color: transparent;
  }
}
.MuiIconButton-colorSecondary {
  color: #f50057;
}
.MuiIconButton-colorSecondary:hover {
  background-color: rgba(245, 0, 87, 0.04);
}
@media (hover: none) {
  .MuiIconButton-colorSecondary:hover {
    background-color: transparent;
  }
}
.MuiIconButton-sizeSmall {
  padding: 3px;
  font-size: 1.125rem;
}
.MuiIconButton-label {
  width: 100%;
  display: flex;
  align-items: inherit;
  justify-content: inherit;
}
</style><style data-jss="" data-meta="MuiAccordionSummary">
.MuiAccordionSummary-root {
  display: flex;
  padding: 0px 16px;
  min-height: 48px;
  transition: min-height 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiAccordionSummary-root:hover:not(.Mui-disabled) {
  cursor: pointer;
}
.MuiAccordionSummary-root.Mui-expanded {
  min-height: 64px;
}
.MuiAccordionSummary-root.Mui-focused {
  background-color: rgba(0, 0, 0, 0.12);
}
.MuiAccordionSummary-root.Mui-disabled {
  opacity: 0.38;
}
.MuiAccordionSummary-content {
  margin: 12px 0;
  display: flex;
  flex-grow: 1;
  transition: margin 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiAccordionSummary-content.Mui-expanded {
  margin: 20px 0;
}
.MuiAccordionSummary-expandIcon {
  transform: rotate(0deg);
  transition: transform 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiAccordionSummary-expandIcon:hover {
  background-color: transparent;
}
.MuiAccordionSummary-expandIcon.Mui-expanded {
  transform: rotate(180deg);
}
</style><style data-jss="" data-meta="MuiBackdrop">
.MuiBackdrop-root {
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  display: flex;
  z-index: -1;
  position: fixed;
  align-items: center;
  justify-content: center;
  background-color: rgba(0, 0, 0, 0.5);
  -webkit-tap-highlight-color: transparent;
}
.MuiBackdrop-invisible {
  background-color: transparent;
}
</style><style data-jss="" data-meta="MuiBackdrop">
.MuiBackdrop-root {
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  display: flex;
  z-index: -1;
  position: fixed;
  align-items: center;
  justify-content: center;
  background-color: rgba(0, 0, 0, 0.5);
  -webkit-tap-highlight-color: transparent;
}
.MuiBackdrop-invisible {
  background-color: transparent;
}
</style><style data-jss="" data-meta="MuiBox">

</style><style data-jss="" data-meta="MuiBox">
</style><style data-jss="" data-meta="MuiBox">
</style><style data-jss="" data-meta="MuiDialog">
@media print {
  .MuiDialog-root {
    position: absolute !important;
  }
}
.MuiDialog-scrollPaper {
  display: flex;
  align-items: center;
  justify-content: center;
}
.MuiDialog-scrollBody {
  overflow-x: hidden;
  overflow-y: auto;
  text-align: center;
}
.MuiDialog-scrollBody:after {
  width: 0;
  height: 100%;
  content: "";
  display: inline-block;
  vertical-align: middle;
}
.MuiDialog-container {
  height: 100%;
  outline: 0;
}
@media print {
  .MuiDialog-container {
    height: auto;
  }
}
.MuiDialog-paper {
  margin: 32px;
  position: relative;
  overflow-y: auto;
}
@media print {
  .MuiDialog-paper {
    box-shadow: none;
    overflow-y: visible;
  }
}
.MuiDialog-paperScrollPaper {
  display: flex;
  max-height: calc(100% - 64px);
  flex-direction: column;
}
.MuiDialog-paperScrollBody {
  display: inline-block;
  text-align: left;
  vertical-align: middle;
}
.MuiDialog-paperWidthFalse {
  max-width: calc(100% - 64px);
}
.MuiDialog-paperWidthXs {
  max-width: 444px;
}
@media (max-width:507.95px) {
  .MuiDialog-paperWidthXs.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthSm {
  max-width: 600px;
}
@media (max-width:663.95px) {
  .MuiDialog-paperWidthSm.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthMd {
  max-width: 960px;
}
@media (max-width:1023.95px) {
  .MuiDialog-paperWidthMd.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthLg {
  max-width: 1280px;
}
@media (max-width:1343.95px) {
  .MuiDialog-paperWidthLg.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthXl {
  max-width: 1920px;
}
@media (max-width:1983.95px) {
  .MuiDialog-paperWidthXl.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperFullWidth {
  width: calc(100% - 64px);
}
.MuiDialog-paperFullScreen {
  width: 100%;
  height: 100%;
  margin: 0;
  max-width: 100%;
  max-height: none;
  border-radius: 0;
}
.MuiDialog-paperFullScreen.MuiDialog-paperScrollBody {
  margin: 0;
  max-width: 100%;
}
</style><style data-jss="" data-meta="MuiDivider">
.MuiDivider-root {
  border: none;
  height: 1px;
  margin: 0;
  flex-shrink: 0;
  background-color: rgba(0, 0, 0, 0.12);
}
.MuiDivider-absolute {
  left: 0;
  width: 100%;
  bottom: 0;
  position: absolute;
}
.MuiDivider-inset {
  margin-left: 72px;
}
.MuiDivider-light {
  background-color: rgba(0, 0, 0, 0.08);
}
.MuiDivider-middle {
  margin-left: 16px;
  margin-right: 16px;
}
.MuiDivider-vertical {
  width: 1px;
  height: 100%;
}
.MuiDivider-flexItem {
  height: auto;
  align-self: stretch;
}
</style><style data-jss="" data-meta="MuiFab">
.MuiFab-root {
  color: rgba(0, 0, 0, 0.87);
  width: 56px;
  height: 56px;
  padding: 0;
  font-size: 0.875rem;
  min-width: 0;
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
  box-sizing: border-box;
  min-height: 36px;
  transition: background-color 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,box-shadow 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,border 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  font-family: "Roboto", "Helvetica", "Arial", sans-serif;
  font-weight: 500;
  line-height: 1.75;
  border-radius: 50%;
  letter-spacing: 0.02857em;
  text-transform: uppercase;
  background-color: #e0e0e0;
}
.MuiFab-root:active {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 12px 17px 2px rgba(0,0,0,0.14),0px 5px 22px 4px rgba(0,0,0,0.12);
}
.MuiFab-root:hover {
  text-decoration: none;
  background-color: #d5d5d5;
}
.MuiFab-root.Mui-focusVisible {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
}
.MuiFab-root.Mui-disabled {
  color: rgba(0, 0, 0, 0.26);
  box-shadow: none;
  background-color: rgba(0, 0, 0, 0.12);
}
@media (hover: none) {
  .MuiFab-root:hover {
    background-color: #e0e0e0;
  }
}
.MuiFab-root:hover.Mui-disabled {
  background-color: rgba(0, 0, 0, 0.12);
}
.MuiFab-label {
  width: 100%;
  display: inherit;
  align-items: inherit;
  justify-content: inherit;
}
.MuiFab-primary {
  color: #fff;
  background-color: #3f51b5;
}
.MuiFab-primary:hover {
  background-color: #303f9f;
}
@media (hover: none) {
  .MuiFab-primary:hover {
    background-color: #3f51b5;
  }
}
.MuiFab-secondary {
  color: #fff;
  background-color: #f50057;
}
.MuiFab-secondary:hover {
  background-color: #c51162;
}
@media (hover: none) {
  .MuiFab-secondary:hover {
    background-color: #f50057;
  }
}
.MuiFab-extended {
  width: auto;
  height: 48px;
  padding: 0 16px;
  min-width: 48px;
  min-height: auto;
  border-radius: 24px;
}
.MuiFab-extended.MuiFab-sizeSmall {
  width: auto;
  height: 34px;
  padding: 0 8px;
  min-width: 34px;
  border-radius: 17px;
}
.MuiFab-extended.MuiFab-sizeMedium {
  width: auto;
  height: 40px;
  padding: 0 16px;
  min-width: 40px;
  border-radius: 20px;
}
.MuiFab-colorInherit {
  color: inherit;
}
.MuiFab-sizeSmall {
  width: 40px;
  height: 40px;
}
.MuiFab-sizeMedium {
  width: 48px;
  height: 48px;
}
</style><style data-jss="" data-meta="MuiInputBase">
@-webkit-keyframes mui-auto-fill {}
@-webkit-keyframes mui-auto-fill-cancel {}
.MuiInputBase-root {
  color: rgba(0, 0, 0, 0.87);
  cursor: text;
  display: inline-flex;
  position: relative;
  font-size: 1rem;
  box-sizing: border-box;
  align-items: center;
  font-family: "Roboto", "Helvetica", "Arial", sans-serif;
  font-weight: 400;
  line-height: 1.1876em;
  letter-spacing: 0.00938em;
}
.MuiInputBase-root.Mui-disabled {
  color: rgba(0, 0, 0, 0.38);
  cursor: default;
}
.MuiInputBase-multiline {
  padding: 6px 0 7px;
}
.MuiInputBase-multiline.MuiInputBase-marginDense {
  padding-top: 3px;
}
.MuiInputBase-fullWidth {
  width: 100%;
}
.MuiInputBase-input {
  font: inherit;
  color: currentColor;
  width: 100%;
  border: 0;
  height: 1.1876em;
  margin: 0;
  display: block;
  padding: 6px 0 7px;
  min-width: 0;
  background: none;
  box-sizing: content-box;
  animation-name: mui-auto-fill-cancel;
  letter-spacing: inherit;
  animation-duration: 10ms;
  -webkit-tap-highlight-color: transparent;
}
.MuiInputBase-input::-webkit-input-placeholder {
  color: currentColor;
  opacity: 0.42;
  transition: opacity 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiInputBase-input::-moz-placeholder {
  color: currentColor;
  opacity: 0.42;
  transition: opacity 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiInputBase-input:-ms-input-placeholder {
  color: currentColor;
  opacity: 0.42;
  transition: opacity 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiInputBase-input::-ms-input-placeholder {
  color: currentColor;
  opacity: 0.42;
  transition: opacity 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiInputBase-input:focus {
  outline: 0;
}
.MuiInputBase-input:invalid {
  box-shadow: none;
}
.MuiInputBase-input::-webkit-search-decoration {
  -webkit-appearance: none;
}
.MuiInputBase-input.Mui-disabled {
  opacity: 1;
}
.MuiInputBase-input:-webkit-autofill {
  animation-name: mui-auto-fill;
  animation-duration: 5000s;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input::-webkit-input-placeholder {
  opacity: 0 !important;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input::-moz-placeholder {
  opacity: 0 !important;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input:-ms-input-placeholder {
  opacity: 0 !important;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input::-ms-input-placeholder {
  opacity: 0 !important;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input:focus::-webkit-input-placeholder {
  opacity: 0.42;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input:focus::-moz-placeholder {
  opacity: 0.42;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input:focus:-ms-input-placeholder {
  opacity: 0.42;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input:focus::-ms-input-placeholder {
  opacity: 0.42;
}
.MuiInputBase-inputMarginDense {
  padding-top: 3px;
}
.MuiInputBase-inputMultiline {
  height: auto;
  resize: none;
  padding: 0;
}
.MuiInputBase-inputTypeSearch {
  -moz-appearance: textfield;
  -webkit-appearance: textfield;
}
</style><style data-jss="" data-meta="MuiFormControl">
.MuiFormControl-root {
  border: 0;
  margin: 0;
  display: inline-flex;
  padding: 0;
  position: relative;
  min-width: 0;
  flex-direction: column;
  vertical-align: top;
}
.MuiFormControl-marginNormal {
  margin-top: 16px;
  margin-bottom: 8px;
}
.MuiFormControl-marginDense {
  margin-top: 8px;
  margin-bottom: 4px;
}
.MuiFormControl-fullWidth {
  width: 100%;
}
</style><style data-jss="" data-meta="MuiLinearProgress">
.MuiLinearProgress-root {
  height: 4px;
  overflow: hidden;
  position: relative;
}
@media print {
  .MuiLinearProgress-root {
    -webkit-print-color-adjust: exact;
  }
}
.MuiLinearProgress-colorPrimary {
  background-color: rgb(182, 188, 226);
}
.MuiLinearProgress-colorSecondary {
  background-color: rgb(251, 158, 191);
}
.MuiLinearProgress-buffer {
  background-color: transparent;
}
.MuiLinearProgress-query {
  transform: rotate(180deg);
}
.MuiLinearProgress-dashed {
  width: 100%;
  height: 100%;
  position: absolute;
  animation: MuiLinearProgress-keyframes-buffer 3s infinite linear;
  margin-top: 0;
}
.MuiLinearProgress-dashedColorPrimary {
  background-size: 10px 10px;
  background-image: radial-gradient(rgb(182, 188, 226) 0%, rgb(182, 188, 226) 16%, transparent 42%);
  background-position: 0 -23px;
}
.MuiLinearProgress-dashedColorSecondary {
  background-size: 10px 10px;
  background-image: radial-gradient(rgb(251, 158, 191) 0%, rgb(251, 158, 191) 16%, transparent 42%);
  background-position: 0 -23px;
}
.MuiLinearProgress-bar {
  top: 0;
  left: 0;
  width: 100%;
  bottom: 0;
  position: absolute;
  transition: transform 0.2s linear;
  transform-origin: left;
}
.MuiLinearProgress-barColorPrimary {
  background-color: #3f51b5;
}
.MuiLinearProgress-barColorSecondary {
  background-color: #f50057;
}
.MuiLinearProgress-bar1Indeterminate {
  width: auto;
  animation: MuiLinearProgress-keyframes-indeterminate1 2.1s cubic-bezier(0.65, 0.815, 0.735, 0.395) infinite;
}
.MuiLinearProgress-bar1Determinate {
  transition: transform .4s linear;
}
.MuiLinearProgress-bar1Buffer {
  z-index: 1;
  transition: transform .4s linear;
}
.MuiLinearProgress-bar2Indeterminate {
  width: auto;
  animation: MuiLinearProgress-keyframes-indeterminate2 2.1s cubic-bezier(0.165, 0.84, 0.44, 1) 1.15s infinite;
}
.MuiLinearProgress-bar2Buffer {
  transition: transform .4s linear;
}
@-webkit-keyframes MuiLinearProgress-keyframes-indeterminate1 {
  0% {
    left: -35%;
    right: 100%;
  }
  60% {
    left: 100%;
    right: -90%;
  }
  100% {
    left: 100%;
    right: -90%;
  }
}
@-webkit-keyframes MuiLinearProgress-keyframes-indeterminate2 {
  0% {
    left: -200%;
    right: 100%;
  }
  60% {
    left: 107%;
    right: -8%;
  }
  100% {
    left: 107%;
    right: -8%;
  }
}
@-webkit-keyframes MuiLinearProgress-keyframes-buffer {
  0% {
    opacity: 1;
    background-position: 0 -23px;
  }
  50% {
    opacity: 0;
    background-position: 0 -23px;
  }
  100% {
    opacity: 1;
    background-position: -200px -23px;
  }
}
</style><style data-jss="" data-meta="MuiPopover">
.MuiPopover-paper {
  outline: 0;
  position: absolute;
  max-width: calc(100% - 32px);
  min-width: 16px;
  max-height: calc(100% - 32px);
  min-height: 16px;
  overflow-x: hidden;
  overflow-y: auto;
}
</style><style data-jss="" data-meta="MuiMenu">
.MuiMenu-paper {
  max-height: calc(100% - 96px);
  -webkit-overflow-scrolling: touch;
}
.MuiMenu-list {
  outline: 0;
}
</style><style data-jss="" data-meta="PrivateNotchedOutline">
.jss1305 {
  top: -5px;
  left: 0;
  right: 0;
  bottom: 0;
  margin: 0;
  padding: 0 8px;
  overflow: hidden;
  position: absolute;
  border-style: solid;
  border-width: 1px;
  border-radius: inherit;
  pointer-events: none;
}
.jss1306 {
  padding: 0;
  text-align: left;
  transition: width 150ms cubic-bezier(0.0, 0, 0.2, 1) 0ms;
  line-height: 11px;
}
.jss1307 {
  width: auto;
  height: 11px;
  display: block;
  padding: 0;
  font-size: 0.75em;
  max-width: 0.01px;
  text-align: left;
  transition: max-width 50ms cubic-bezier(0.0, 0, 0.2, 1) 0ms;
  visibility: hidden;
}
.jss1307 > span {
  display: inline-block;
  padding-left: 5px;
  padding-right: 5px;
}
.jss1308 {
  max-width: 1000px;
  transition: max-width 100ms cubic-bezier(0.0, 0, 0.2, 1) 50ms;
}
</style><style data-jss="" data-meta="MuiOutlinedInput">
.MuiOutlinedInput-root {
  position: relative;
  border-radius: 4px;
}
.MuiOutlinedInput-root:hover .MuiOutlinedInput-notchedOutline {
  border-color: rgba(0, 0, 0, 0.87);
}
@media (hover: none) {
  .MuiOutlinedInput-root:hover .MuiOutlinedInput-notchedOutline {
    border-color: rgba(0, 0, 0, 0.23);
  }
}
.MuiOutlinedInput-root.Mui-focused .MuiOutlinedInput-notchedOutline {
  border-color: #3f51b5;
  border-width: 2px;
}
.MuiOutlinedInput-root.Mui-error .MuiOutlinedInput-notchedOutline {
  border-color: #f44336;
}
.MuiOutlinedInput-root.Mui-disabled .MuiOutlinedInput-notchedOutline {
  border-color: rgba(0, 0, 0, 0.26);
}
.MuiOutlinedInput-colorSecondary.Mui-focused .MuiOutlinedInput-notchedOutline {
  border-color: #f50057;
}
.MuiOutlinedInput-adornedStart {
  padding-left: 14px;
}
.MuiOutlinedInput-adornedEnd {
  padding-right: 14px;
}
.MuiOutlinedInput-multiline {
  padding: 18.5px 14px;
}
.MuiOutlinedInput-multiline.MuiOutlinedInput-marginDense {
  padding-top: 10.5px;
  padding-bottom: 10.5px;
}
.MuiOutlinedInput-notchedOutline {
  border-color: rgba(0, 0, 0, 0.23);
}
.MuiOutlinedInput-input {
  padding: 18.5px 14px;
}
.MuiOutlinedInput-input:-webkit-autofill {
  border-radius: inherit;
}
.MuiOutlinedInput-inputMarginDense {
  padding-top: 10.5px;
  padding-bottom: 10.5px;
}
.MuiOutlinedInput-inputMultiline {
  padding: 0;
}
.MuiOutlinedInput-inputAdornedStart {
  padding-left: 0;
}
.MuiOutlinedInput-inputAdornedEnd {
  padding-right: 0;
}
</style><style data-jss="" data-meta="MuiSelect">
.MuiSelect-select {
  cursor: pointer;
  min-width: 16px;
  user-select: none;
  border-radius: 0;
  -moz-appearance: none;
  -webkit-appearance: none;
}
.MuiSelect-select:focus {
  border-radius: 0;
  background-color: rgba(0, 0, 0, 0.05);
}
.MuiSelect-select::-ms-expand {
  display: none;
}
.MuiSelect-select.Mui-disabled {
  cursor: default;
}
.MuiSelect-select[multiple] {
  height: auto;
}
.MuiSelect-select:not([multiple]) option, .MuiSelect-select:not([multiple]) optgroup {
  background-color: #fff;
}
.MuiSelect-select.MuiSelect-select {
  padding-right: 24px;
}
.MuiSelect-filled.MuiSelect-filled {
  padding-right: 32px;
}
.MuiSelect-outlined {
  border-radius: 4px;
}
.MuiSelect-outlined.MuiSelect-outlined {
  padding-right: 32px;
}
.MuiSelect-selectMenu {
  height: auto;
  overflow: hidden;
  min-height: 1.1876em;
  white-space: nowrap;
  text-overflow: ellipsis;
}
.MuiSelect-icon {
  top: calc(50% - 12px);
  color: rgba(0, 0, 0, 0.54);
  right: 0;
  position: absolute;
  pointer-events: none;
}
.MuiSelect-icon.Mui-disabled {
  color: rgba(0, 0, 0, 0.26);
}
.MuiSelect-iconOpen {
  transform: rotate(180deg);
}
.MuiSelect-iconFilled {
  right: 7px;
}
.MuiSelect-iconOutlined {
  right: 7px;
}
.MuiSelect-nativeInput {
  left: 0;
  width: 100%;
  bottom: 0;
  opacity: 0;
  position: absolute;
  pointer-events: none;
}
</style><style data-jss="" data-meta="MuiTab">
.MuiTab-root {
  padding: 6px 12px;
  overflow: hidden;
  position: relative;
  font-size: 0.875rem;
  max-width: 264px;
  min-width: 72px;
  box-sizing: border-box;
  min-height: 48px;
  text-align: center;
  flex-shrink: 0;
  font-family: "Roboto", "Helvetica", "Arial", sans-serif;
  font-weight: 500;
  line-height: 1.75;
  white-space: normal;
  letter-spacing: 0.02857em;
  text-transform: uppercase;
}
@media (min-width:600px) {
  .MuiTab-root {
    min-width: 160px;
  }
}
.MuiTab-root.Mui-selected {
  font-weight: 600 !important;
  border-bottom: 2.8px solid #4079DA;
}
.MuiTab-labelIcon {
  min-height: 72px;
  padding-top: 9px;
}
.MuiTab-labelIcon .MuiTab-wrapper > *:first-child {
  margin-bottom: 6px;
}
.MuiTab-textColorInherit {
  color: inherit;
  opacity: 0.7;
}
.MuiTab-textColorInherit.Mui-selected {
  opacity: 1;
}
.MuiTab-textColorInherit.Mui-disabled {
  opacity: 0.5;
}
.MuiTab-textColorPrimary {
  color: rgba(0, 0, 0, 0.54);
}
.MuiTab-textColorPrimary.Mui-selected {
  color: #3f51b5;
}
.MuiTab-textColorPrimary.Mui-disabled {
  color: rgba(0, 0, 0, 0.38);
}
.MuiTab-textColorSecondary {
  color: rgba(0, 0, 0, 0.54);
}
.MuiTab-textColorSecondary.Mui-selected {
  color: #f50057;
}
.MuiTab-textColorSecondary.Mui-disabled {
  color: rgba(0, 0, 0, 0.38);
}
.MuiTab-fullWidth {
  flex-grow: 1;
  max-width: none;
  flex-basis: 0;
  flex-shrink: 1;
}
.MuiTab-wrapped {
  font-size: 0.75rem;
  line-height: 1.5;
}
.MuiTab-wrapper {
  width: 100%;
  display: block;
  overflow: hidden;
  align-items: center;
  white-space: nowrap;
  text-overflow: ellipsis;
  flex-direction: column;
  justify-content: center;
}
</style><style data-jss="" data-meta="PrivateTabIndicator">
.jss1300 {
  width: 100%;
  bottom: 0;
  height: 2px;
  position: absolute;
  transition: all 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.jss1301 {
  background-color: #3f51b5;
}
.jss1302 {
  background-color: #f50057;
}
.jss1303 {
  right: 0;
  width: 2px;
  height: 100%;
}
</style><style data-jss="" data-meta="MuiTabs">
.MuiTabs-root {
  display: flex;
  overflow: hidden;
  min-height: 48px;
  -webkit-overflow-scrolling: touch;
}
.MuiTabs-vertical {
  flex-direction: column;
}
.MuiTabs-flexContainer {
  display: flex;
}
.MuiTabs-flexContainerVertical {
  flex-direction: column;
}
.MuiTabs-centered {
  justify-content: center;
}
.MuiTabs-scroller {
  flex: 1 1 auto;
  display: inline-block;
  position: relative;
  white-space: nowrap;
}
.MuiTabs-fixed {
  width: 100%;
  overflow-x: hidden;
}
.MuiTabs-scrollable {
  overflow-x: scroll;
  scrollbar-width: none;
}
.MuiTabs-scrollable::-webkit-scrollbar {
  display: none;
}
@media (max-width:599.95px) {
  .MuiTabs-scrollButtonsDesktop {
    display: none;
  }
}
.MuiTabs-indicator {
  display: none;
}
</style><style data-jss="" data-meta="MuiTooltip">
.MuiTooltip-popper {
  z-index: 1500;
  pointer-events: none;
}
.MuiTooltip-popperInteractive {
  pointer-events: auto;
}
.MuiTooltip-popperArrow[x-placement*="bottom"] .MuiTooltip-arrow {
  top: 0;
  left: 0;
  margin-top: -0.71em;
  margin-left: 4px;
  margin-right: 4px;
}
.MuiTooltip-popperArrow[x-placement*="top"] .MuiTooltip-arrow {
  left: 0;
  bottom: 0;
  margin-left: 4px;
  margin-right: 4px;
  margin-bottom: -0.71em;
}
.MuiTooltip-popperArrow[x-placement*="right"] .MuiTooltip-arrow {
  left: 0;
  width: 0.71em;
  height: 1em;
  margin-top: 4px;
  margin-left: -0.71em;
  margin-bottom: 4px;
}
.MuiTooltip-popperArrow[x-placement*="left"] .MuiTooltip-arrow {
  right: 0;
  width: 0.71em;
  height: 1em;
  margin-top: 4px;
  margin-right: -0.71em;
  margin-bottom: 4px;
}
.MuiTooltip-popperArrow[x-placement*="left"] .MuiTooltip-arrow::before {
  transform-origin: 0 0;
}
.MuiTooltip-popperArrow[x-placement*="right"] .MuiTooltip-arrow::before {
  transform-origin: 100% 100%;
}
.MuiTooltip-popperArrow[x-placement*="top"] .MuiTooltip-arrow::before {
  transform-origin: 100% 0;
}
.MuiTooltip-popperArrow[x-placement*="bottom"] .MuiTooltip-arrow::before {
  transform-origin: 0 100%;
}
.MuiTooltip-tooltip {
  color: #fff;
  padding: 4px 8px;
  font-size: 0.625rem;
  max-width: 300px;
  word-wrap: break-word;
  font-family: "Roboto", "Helvetica", "Arial", sans-serif;
  font-weight: 500;
  line-height: 1.4em;
  border-radius: 4px;
  background-color: rgba(97, 97, 97, 0.9);
}
.MuiTooltip-tooltipArrow {
  margin: 0;
  position: relative;
}
.MuiTooltip-arrow {
  color: rgba(97, 97, 97, 0.9);
  width: 1em;
  height: 0.71em;
  overflow: hidden;
  position: absolute;
  box-sizing: border-box;
}
.MuiTooltip-arrow::before {
  width: 100%;
  height: 100%;
  margin: auto;
  content: "";
  display: block;
  transform: rotate(45deg);
  background-color: currentColor;
}
.MuiTooltip-touch {
  padding: 8px 16px;
  font-size: 0.875rem;
  font-weight: 400;
  line-height: 1.14286em;
}
.MuiTooltip-tooltipPlacementLeft {
  margin: 0 24px ;
  transform-origin: right center;
}
@media (min-width:600px) {
  .MuiTooltip-tooltipPlacementLeft {
    margin: 0 14px;
  }
}
.MuiTooltip-tooltipPlacementRight {
  margin: 0 24px;
  transform-origin: left center;
}
@media (min-width:600px) {
  .MuiTooltip-tooltipPlacementRight {
    margin: 0 14px;
  }
}
.MuiTooltip-tooltipPlacementTop {
  margin: 24px 0;
  transform-origin: center bottom;
}
@media (min-width:600px) {
  .MuiTooltip-tooltipPlacementTop {
    margin: 14px 0;
  }
}
.MuiTooltip-tooltipPlacementBottom {
  margin: 24px 0;
  transform-origin: center top;
}
@media (min-width:600px) {
  .MuiTooltip-tooltipPlacementBottom {
    margin: 14px 0;
  }
}
</style><style data-jss="" data-meta="makeStyles">
.jss1297 {
  color: #000;
}
.jss1298 {
  background-color: #000;
}
</style><style data-jss="" data-meta="makeStyles">
.jss30 {
  width: 100%;
  margin: 0;
  max-width: 656px !important;
}
@media (max-width:965px) {
  .jss30 {
    scale: 100%;
    margin: 0;
    max-height: 100%;
  }
}
</style><style data-jss="" data-meta="makeStyles">
.jss1290 {
  width: 100%;
  margin: 0;
  max-width: 656px !important;
}
@media (max-width:965px) {
  .jss1290 {
    scale: 100%;
    margin: 0;
    max-height: 100%;
  }
}
</style><style data-jss="" data-meta="makeStyles">
.jss1296 {
  display: revert;
  padding: 0px;
  border-radius: 8px;
}
</style><style data-jss="" data-meta="makeStyles">
.jss1291 {
  background: none;
  box-shadow: none;
  transition: min-height 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;;
}
</style><style data-jss="" data-meta="makeStyles">
.jss1292 {
  gap: 12px;
  padding: 12px 0;
  min-height: fit-content;
  transition: min-height 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;;
  flex-direction: row-reverse;
}
.jss1292.jss1295 {
  min-height: fit-content;
}
.jss1292:hover {
  background: #22242E;
}
.jss1293 {
  gap: 25px;
  margin: 0;
}
.jss1293.jss1295 {
  margin: 0;
}
.jss1294 {
  padding: 0;
  transform: rotate(270deg);
  margin-right: 0;
}
.jss1294.jss1295 {
  transform: rotate(360deg);
}
</style><style data-jss="" data-meta="makeStyles">
.jss1317 {
  padding: 0;
  min-height: fit-content;
}
.jss1317.jss1320 {
  min-height: fit-content;
}
.jss1318 {
  margin: 0;
}
.jss1318.jss1320 {
  margin: 0;
}
.jss1319 {
  padding: 0;
  margin-right: 0;
}
</style><style type="text/css">.alert-box p { font-size: 16px; }</style><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/Hints-rwyylXIc.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/index--oGFep3T.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/ace-builds-custom-aZrBWuYv.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/mui-datatables-TfOtNJg_.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/katex-FJfzH9br.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/katex-swfI2rKD.js"><link rel="stylesheet" href="./DAY7-CODE_files/katex-a6DLCiel.css"><link rel="stylesheet" href="./DAY7-CODE_files/katex-8t9lwiFN.css"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/prismjs-2kmCEbQH.js"><link rel="stylesheet" href="./DAY7-CODE_files/prismjs-CihmPxKa.css"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/CopyToClipboard-KGYAx9mm.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/Component-PYAWEa_6.js"><link rel="stylesheet" href="./DAY7-CODE_files/CopyToClipboard-8oGSTAox.css"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/Constant-dbp-vq8H.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/HorizontalTabPanel-yjKF1bKc.js"><link rel="stylesheet" href="./DAY7-CODE_files/HorizontalTabPanel-lgAHSzkT.css"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/BreadCrumbs-54_LXbXs.js"><link rel="stylesheet" href="./DAY7-CODE_files/BreadCrumbs-owLrRhir.css"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/UserStar-xWnQH969.js"><link rel="stylesheet" href="./DAY7-CODE_files/UserStar-xD-l1Tmd.css"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/SelectDropdown-F9tVqUWW.js"><link rel="stylesheet" href="./DAY7-CODE_files/SelectDropdown-vs4kBCgD.css"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/MobileVerification-L20_gqAL.js"><link rel="stylesheet" href="./DAY7-CODE_files/MobileVerification-iJw2myiK.css"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/Constant-DGB8N37C.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/TablePagination-lp4IpTyO.js"><link rel="stylesheet" href="./DAY7-CODE_files/TablePagination-Gbyk7yFc.css"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/DataGrid-vP26OB3a.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/index.es-mniX97Yb.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/Constants-dfgb0HIz.js"><link rel="modulepreload" as="script" crossorigin="" href="https://static.codechef.com/build/react2/assets/TopBanner.module-utOCJ9pv.js"><link rel="stylesheet" href="./DAY7-CODE_files/TopBanner-hNcTZYKm.css"><link rel="stylesheet" href="./DAY7-CODE_files/Hints-w0wltsFg.css"><link rel="stylesheet" href="./DAY7-CODE_files/prism-vs-dark-p4Sle1mf.css"><style id="googleidentityservice_button_styles">.qJTHM{-webkit-user-select:none;color:#202124;direction:ltr;-webkit-touch-callout:none;font-family:"Roboto-Regular",arial,sans-serif;-webkit-font-smoothing:antialiased;font-weight:400;margin:0;overflow:hidden;-webkit-text-size-adjust:100%}.ynRLnc{left:-9999px;position:absolute;top:-9999px}.L6cTce{display:none}.bltWBb{word-break:break-all}.hSRGPd{color:#1a73e8;cursor:pointer;font-weight:500;text-decoration:none}.Bz112c-W3lGp{height:16px;width:16px}.Bz112c-E3DyYd{height:20px;width:20px}.Bz112c-r9oPif{height:24px;width:24px}.Bz112c-uaxL4e{-webkit-border-radius:10px;border-radius:10px}.LgbsSe-Bz112c{display:block}.S9gUrf-YoZ4jf,.S9gUrf-YoZ4jf *{border:none;margin:0;padding:0}.fFW7wc-ibnC6b>.aZ2wEe>div{border-color:#4285f4}.P1ekSe-ZMv3u>div:nth-child(1){background-color:#1a73e8!important}.P1ekSe-ZMv3u>div:nth-child(2),.P1ekSe-ZMv3u>div:nth-child(3){background-image:linear-gradient(to right,rgba(255,255,255,.7),rgba(255,255,255,.7)),linear-gradient(to right,#1a73e8,#1a73e8)!important}.haAclf{display:inline-block}.nsm7Bb-HzV7m-LgbsSe{-webkit-border-radius:4px;border-radius:4px;-webkit-box-sizing:border-box;box-sizing:border-box;-webkit-transition:background-color .218s,border-color .218s;transition:background-color .218s,border-color .218s;-webkit-user-select:none;-webkit-appearance:none;background-color:#fff;background-image:none;border:1px solid #dadce0;color:#3c4043;cursor:pointer;font-family:"Google Sans",arial,sans-serif;font-size:14px;height:40px;letter-spacing:0.25px;outline:none;overflow:hidden;padding:0 12px;position:relative;text-align:center;vertical-align:middle;white-space:nowrap;width:auto}@media screen and (-ms-high-contrast:active){.nsm7Bb-HzV7m-LgbsSe{border:2px solid windowText;color:windowText}}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe{font-size:14px;height:32px;letter-spacing:0.25px;padding:0 10px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe{font-size:11px;height:20px;letter-spacing:0.3px;padding:0 8px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe{padding:0;width:40px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.pSzOP-SxQuSe{width:32px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.purZT-SxQuSe{width:20px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK{-webkit-border-radius:20px;border-radius:20px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK.pSzOP-SxQuSe{-webkit-border-radius:16px;border-radius:16px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK.purZT-SxQuSe{-webkit-border-radius:10px;border-radius:10px}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc{border:none;color:#fff}.nsm7Bb-HzV7m-LgbsSe.MFS4be-v3pZbf-Ia7Qfc{background-color:#1a73e8}.nsm7Bb-HzV7m-LgbsSe.MFS4be-JaPV2b-Ia7Qfc{background-color:#202124;color:#e8eaed}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:18px;margin-right:8px;min-width:18px;width:18px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:14px;min-width:14px;width:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:10px;min-width:10px;width:10px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin-left:8px;margin-right:-4px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin:0;padding:10px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{padding:8px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{padding:4px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-top-left-radius:3px;border-top-left-radius:3px;-webkit-border-bottom-left-radius:3px;border-bottom-left-radius:3px;display:-webkit-box;display:-webkit-flex;display:flex;justify-content:center;-webkit-align-items:center;align-items:center;background-color:#fff;height:36px;margin-left:-10px;margin-right:12px;min-width:36px;width:36px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf .nsm7Bb-HzV7m-LgbsSe-Bz112c,.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin:0;padding:0}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{height:28px;margin-left:-8px;margin-right:10px;min-width:28px;width:28px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{height:16px;margin-left:-6px;margin-right:8px;min-width:16px;width:16px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-radius:3px;border-radius:3px;margin-left:2px;margin-right:0;padding:0}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-radius:18px;border-radius:18px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-radius:14px;border-radius:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-radius:8px;border-radius:8px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-bN97Pc-sM5MNb{display:-webkit-box;display:-webkit-flex;display:flex;-webkit-align-items:center;align-items:center;-webkit-flex-direction:row;flex-direction:row;justify-content:space-between;-webkit-flex-wrap:nowrap;flex-wrap:nowrap;height:100%;position:relative;width:100%}.nsm7Bb-HzV7m-LgbsSe .oXtfBe-l4eHX{justify-content:center}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-BPrWId{-webkit-flex-grow:1;flex-grow:1;font-family:"Google Sans",arial,sans-serif;font-weight:500;overflow:hidden;text-overflow:ellipsis;vertical-align:top}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-BPrWId{font-weight:300}.nsm7Bb-HzV7m-LgbsSe .oXtfBe-l4eHX .nsm7Bb-HzV7m-LgbsSe-BPrWId{-webkit-flex-grow:0;flex-grow:0}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-MJoBVe{-webkit-transition:background-color .218s;transition:background-color .218s;bottom:0;left:0;position:absolute;right:0;top:0}.nsm7Bb-HzV7m-LgbsSe:hover,.nsm7Bb-HzV7m-LgbsSe:focus{-webkit-box-shadow:none;box-shadow:none;border-color:#d2e3fc;outline:none}.nsm7Bb-HzV7m-LgbsSe:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(66,133,244,.04)}.nsm7Bb-HzV7m-LgbsSe:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(66,133,244,.1)}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,.24)}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,.32)}.nsm7Bb-HzV7m-LgbsSe .n1UuX-DkfjY{-webkit-border-radius:50%;border-radius:50%;display:-webkit-box;display:-webkit-flex;display:flex;height:20px;margin-left:-4px;margin-right:8px;min-width:20px;width:20px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId{font-family:"Roboto";font-size:12px;text-align:left}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .ssJRIf,.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff .fmcmS{overflow:hidden;text-overflow:ellipsis}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{display:-webkit-box;display:-webkit-flex;display:flex;-webkit-align-items:center;align-items:center;color:#5f6368;fill:#5f6368;font-size:11px;font-weight:400}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.MFS4be-Ia7Qfc .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{color:#e8eaed;fill:#e8eaed}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff .Bz112c{height:18px;margin:-3px -3px -3px 2px;min-width:18px;width:18px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-top-left-radius:0;border-top-left-radius:0;-webkit-border-bottom-left-radius:0;border-bottom-left-radius:0;-webkit-border-top-right-radius:3px;border-top-right-radius:3px;-webkit-border-bottom-right-radius:3px;border-bottom-right-radius:3px;margin-left:12px;margin-right:-10px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-radius:18px;border-radius:18px}.L5Fo6c-sM5MNb{border:0;display:block;left:0;position:relative;top:0}.L5Fo6c-bF1uUb{-webkit-border-radius:4px;border-radius:4px;bottom:0;cursor:pointer;left:0;position:absolute;right:0;top:0}.L5Fo6c-bF1uUb:focus{border:none;outline:none}sentinel{}</style><script type="text/javascript" async="" src="./DAY7-CODE_files/f.txt"></script><script src="./DAY7-CODE_files/mode-plain_text.js.download"></script><script src="./DAY7-CODE_files/theme-tomorrow_night.js.download"></script><script src="./DAY7-CODE_files/mode-c_cpp.js.download"></script><script src="./DAY7-CODE_files/c_cpp.js.download"></script></head>

<body style="background: rgb(29, 30, 35);">
  <noscript>You need to enable JavaScript to run this app.</noscript>
  
  <div id="root" class="no-print"><div style="background: rgb(29, 30, 35);"><div class="MuiBackdrop-root _backdrop_pm713_1 undefined" aria-hidden="true" style="opacity: 0; visibility: hidden;"><div class="MuiLinearProgress-root MuiLinearProgress-colorPrimary _progress_pm713_7 MuiLinearProgress-indeterminate" role="progressbar"><div class="MuiLinearProgress-bar MuiLinearProgress-barColorPrimary MuiLinearProgress-bar1Indeterminate"></div><div class="MuiLinearProgress-bar MuiLinearProgress-bar2Indeterminate MuiLinearProgress-barColorPrimary"></div></div></div><div class="_pageContainer_1se0b_3 _dark_1se0b_9" style="max-width: 100%;"><div style="display: block;"><div class="_sidebarContainer_6xw4t_2 _dark_6xw4t_29 "><div class="_sidebarContainer_1ohcw_2 _dark_1ohcw_209 notranslate"><div class="_sidebarHeader_1ohcw_5"><div class="_syllabusContainer_1ohcw_26"><div class="_syllabusInfo_1ohcw_42"><img alt="learn-icon" src="./DAY7-CODE_files/logical-problems.svg" loading="lazy"><div class="_syllabusNameContainer_1ohcw_46"><div class="_syllabusName_1ohcw_46">500 to 1000 difficulty rating</div><div class="_viewSyllabusLink_1ohcw_57"><a class="_link_1ohcw_57 _hoverClass_2pyv4_10" href="https://www.codechef.com/practice/logical-problems" target="_blank" rel="noopener noreferrer">View full syllabus<span class="_icon__container_1ohcw_68"><svg class="MuiSvgIcon-root _icon_1ohcw_68" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M9 5v2h6.59L4 18.59 5.41 20 17 8.41V15h2V5z"></path></svg></span></a></div></div></div><div class="_sidebarCloseIconContainer_1ohcw_31"><svg class="MuiSvgIcon-root _sidebarCloseIcon_1ohcw_31" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M19 6.41L17.59 5 12 10.59 6.41 5 5 6.41 10.59 12 5 17.59 6.41 19 12 13.41 17.59 19 19 17.59 13.41 12z"></path></svg></div></div><div class="_progress_1ohcw_13"><div class="_fill_1ohcw_21" style="width: 1%;"></div></div><div class="_percentageCompleted_1ohcw_5">1% Completed</div></div><div class="_sidebarContent_1ohcw_92"><div class="_modules_1ohcw_105"><div class="MuiPaper-root MuiAccordion-root jss1291 Mui-expanded MuiAccordion-rounded MuiPaper-elevation1 MuiPaper-rounded"><div class="MuiButtonBase-root MuiAccordionSummary-root jss1292 Mui-expanded jss1295" tabindex="0" role="button" aria-disabled="false" aria-expanded="true" aria-controls="panel1a-content" id="panel1a-header"><div class="MuiAccordionSummary-content jss1293 Mui-expanded jss1295"><div class="_moduleTitle_1ohcw_105"><span>500 to 800 difficulty rating problems</span></div></div><div class="MuiButtonBase-root MuiIconButton-root MuiAccordionSummary-expandIcon jss1294 Mui-expanded jss1295 MuiIconButton-edgeEnd" aria-disabled="false" aria-hidden="true"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root _expandIcon_1ohcw_129" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16.59 8.59L12 13.17 7.41 8.59 6 10l6 6 6-6z"></path></svg></span><span class="MuiTouchRipple-root"></span></div></div><div class="MuiCollapse-container MuiCollapse-entered" style="min-height: 0px;"><div class="MuiCollapse-wrapper"><div class="MuiCollapse-wrapperInner"><div aria-labelledby="panel1a-header" id="panel1a-content" role="region"><div class="MuiAccordionDetails-root jss1296"><div class="_submoduleSummary_1ohcw_146"><div class="_modules_1ohcw_105" style="padding-left: 30px;"><div class="MuiPaper-root MuiAccordion-root jss1291 Mui-expanded MuiAccordion-rounded MuiPaper-elevation1 MuiPaper-rounded"><div class="MuiButtonBase-root MuiAccordionSummary-root jss1292 Mui-expanded jss1295" tabindex="0" role="button" aria-disabled="false" aria-expanded="true" aria-controls="panel1a-content" id="panel1a-header"><div class="MuiAccordionSummary-content jss1293 Mui-expanded jss1295"><div class="_moduleTitle_1ohcw_105"><span class="_moduleName_1ohcw_167">500 to 800 difficulty rating problems</span><span></span></div></div></div><div class="MuiCollapse-container MuiCollapse-entered" style="min-height: 0px;"><div class="MuiCollapse-wrapper"><div class="MuiCollapse-wrapperInner"><div aria-labelledby="panel1a-header" id="panel1a-content" role="region"><div class="MuiAccordionDetails-root jss1296"><div class="_submoduleSummary_1ohcw_146"><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Greater Average</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Subscriptions</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JASSIGNMENTS"><div class="_innerRow_1ohcw_153" style="background: rgb(46, 52, 70);"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Janmansh and Assignments</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Exams</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/OFFICE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chef in his Office</span><span class="_status-success_1ohcw_188"><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Mahasena</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">CRED Coins</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Water Filling</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALESEASON"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Sale Season</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Minimum Pizzas</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFGAMES"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chefland Games</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Expert Setter</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chef and NextGen</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUGARCANE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Sugarcane Juice Business</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NOTEBOOK"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Count the Notebooks</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chef and Candies</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Car or Bike</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Is the Score Consistent</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/THREETOPICS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">The Three Topics</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Monopoly</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TODOLIST"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Problems in your to-do list</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Air Conditioner Temperature</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Nearest Exit</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Reverse The Number</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Sasta Shark Tank</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NIBBLE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Good Program</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/QUALIFY"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Qualify the round</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Elections in Chefland</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCARS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Minimum Cars required</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Test Score</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JENGA"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Jenga Night</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SEATNUMBER"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Bus  Seat Numbering</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DISCUS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Discus Throw</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MAXTASTE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Maximise the Tastiness</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOVIE2X"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Watching Movies at 2x</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLTHIEF"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Police and Thief</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Flip the cards</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BATH"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Bath in Winters</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Finding Shoes</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FCTRL2"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Small factorials</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Mario and Transformation</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Mario and Bullet</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/C_RATING"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chess Ratings</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DNASTRAND"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Complementary Strand in a DNA</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFBOTTLE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chef and Water Bottles</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CANDYDIST"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Candy Distribution</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FSQRT"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Finding Square Roots</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/LASTLEVELS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">The Last Levels</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Blackjack</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FILLCANDIES"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Fill Candies</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/XJUMP"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">X Jumps</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHESSDIST"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chessboard Distance</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/VALENTINE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Valentine is Coming</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MYSERVE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">It is My Serve</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Water Mixing</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WGHTS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Weights</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFAPPS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chef and his Apps</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chef Eren</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCOINS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Minimum number of coins</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Airlines</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SELFDEF"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Self Defence Training</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CRICUP"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Cup Finals</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOORS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Too many Floors</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Speed Limit Test</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DECINC"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Decrement OR Increment</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AORB"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">A or B</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW017"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Second Largest</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PASSORFAIL"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Pass or Fail</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CYCLICQD"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Cyclic Quadrilateral</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLYBAGS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Too many items</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FIZZBUZZ2303"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chef Fantasy 11</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BUILDINGRACE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Building Race</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chef and Races</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOZZ"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Endless Appetizers</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRESENTS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Presents for Cheffina</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW018"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Small Factorial</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEAT"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Dracula Eats</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Possible Victory</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHOPRT"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Chef And Operators</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Mutated Minions</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/REACHFAST"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Reach fast</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Single-use Attack</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALE"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Get Lowest Free</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINFLIPS"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Minimum number of Flips</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Binary Battles</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Best of Two</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">The Lead Game</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DPOLY"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Degree of Polynomial</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Recent contest problems</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRB01"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">Primality Test</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a><a href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERCOOLER2"><div class="_innerRow_1ohcw_153"><div class="_lessonType_1ohcw_160"><span class="_moduleName_1ohcw_167">The Cooler Dilemma 2</span><span><i class="_status__icon_1ohcw_188"></i></span></div></div></a></div></div></div></div></div></div></div></div></div></div></div></div></div></div></div></div><div class="_modules_1ohcw_105"><div class="MuiPaper-root MuiAccordion-root jss1291 MuiAccordion-rounded MuiPaper-elevation1 MuiPaper-rounded"><div class="MuiButtonBase-root MuiAccordionSummary-root jss1292" tabindex="0" role="button" aria-disabled="false" aria-expanded="false" aria-controls="panel1a-content" id="panel1a-header"><div class="MuiAccordionSummary-content jss1293"><div class="_moduleTitle_1ohcw_105"><span>800 to 1000 difficulty rating problems</span></div></div><div class="MuiButtonBase-root MuiIconButton-root MuiAccordionSummary-expandIcon jss1294 MuiIconButton-edgeEnd" aria-disabled="false" aria-hidden="true"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root _expandIcon_1ohcw_129" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16.59 8.59L12 13.17 7.41 8.59 6 10l6 6 6-6z"></path></svg></span><span class="MuiTouchRipple-root"></span></div></div><div class="MuiCollapse-container MuiCollapse-hidden" style="min-height: 0px;"><div class="MuiCollapse-wrapper"><div class="MuiCollapse-wrapperInner"><div aria-labelledby="panel1a-header" id="panel1a-content" role="region"><div class="MuiAccordionDetails-root jss1296"><div class="_submoduleSummary_1ohcw_146"><a href="https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/HARDBET"><div class="_modules_1ohcw_105" style="padding: 12px 30px;"><div class="_moduleTitle_1ohcw_105"><span class="_moduleName_1ohcw_167">800 to 1000 difficulty rating problems</span><div class="_text__chip_1ohcw_119">Pro</div></div></div></a></div></div></div></div></div></div></div></div></div></div></div><div class="_learningContest__container_j5luf_2 _dark_j5luf_30"><div class="_navigate-button__container_j5luf_8 notranslate _banner__container_j5luf_214"><div class="_navigation-left-wrapper_j5luf_15"><div class="_sideNavigationContainer_j5luf_218"><a href="https://www.codechef.com/practice/logical-problems" aria-label="Back to practice"><div class="_icon__container_j5luf_104"><svg class="MuiSvgIcon-root _icon_j5luf_59" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M20 11H7.83l5.59-5.59L12 4l-8 8 8 8 1.41-1.41L7.83 13H20v-2z"></path></svg></div></a><i class="_hamburgerIcon_j5luf_229 _dark_j5luf_30"></i><i class="_problemSolved__icon_j5luf_302"></i></div><div class="_difficultyRatings__box_j5luf_223 _dark_j5luf_30"><span>Difficulty: &nbsp;</span><span class="_value_j5luf_33 _dark_j5luf_30">513</span></div><div class="_darkModeContainer_2m751_2 _dark_2m751_2" title="Switch to Light Mode" style="margin-left: 0px;"><svg class="MuiSvgIcon-root _sunIcon_2m751_22 _dark_2m751_2" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M6.76 4.84l-1.8-1.79-1.41 1.41 1.79 1.79 1.42-1.41zM4 10.5H1v2h3v-2zm9-9.95h-2V3.5h2V.55zm7.45 3.91l-1.41-1.41-1.79 1.79 1.41 1.41 1.79-1.79zm-3.21 13.7l1.79 1.8 1.41-1.41-1.8-1.79-1.4 1.4zM20 10.5v2h3v-2h-3zm-8-5c-3.31 0-6 2.69-6 6s2.69 6 6 6 6-2.69 6-6-2.69-6-6-6zm-1 16.95h2V19.5h-2v2.95zm-7.45-3.91l1.41 1.41 1.79-1.8-1.41-1.41-1.79 1.8z"></path></svg></div><div class="_bookmark_m4qp0_2"><hr class="MuiDivider-root _divider_m4qp0_73 _dark_m4qp0_25 MuiDivider-flexItem MuiDivider-vertical"><div class="_bookmarkIcon_m4qp0_15" title="Add to bookmark"><i class="_bookmarkOutlined_m4qp0_29 _dark_m4qp0_25"></i></div></div><div class="_stopWatch_y1la1_2"><i class="_stopWatch__icons_y1la1_20" title="Start Timer"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M15 1H9v2h6V1zm-4 13h2V8h-2v6zm8.03-6.61l1.42-1.42c-.43-.51-.9-.99-1.41-1.41l-1.42 1.42C16.07 4.74 14.12 4 12 4c-4.97 0-9 4.03-9 9s4.02 9 9 9 9-4.03 9-9c0-2.12-.74-4.07-1.97-5.61zM12 20c-3.87 0-7-3.13-7-7s3.13-7 7-7 7 3.13 7 7-3.13 7-7 7z"></path></svg></i></div></div><div class="_navigation-button__box_j5luf_88"><a class="_previous__container_j5luf_91 " href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_"><div class="_icon__container_j5luf_104"><svg class="MuiSvgIcon-root _icon_j5luf_59" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M15.41 7.41L14 6l-6 6 6 6 1.41-1.41L10.83 12z"></path></svg></div><span class="notranslate">Prev</span></a><div class="_contest__progress_j5luf_275 _mergedProgressBar_j5luf_263" title=""><span class="_progress__bar_j5luf_266 _filled_j5luf_294" title=""></span><span class="_progress__bar_j5luf_266 _filled_j5luf_294" title=""></span><span class="_progress__bar_j5luf_266 _filled_j5luf_294"></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span><span class="_progress__bar_j5luf_266 " title=""></span></div><a class="_next__container_j5luf_111 " href="https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF"><span class="notranslate">Next</span><div class="_icon__container_j5luf_104"><svg class="MuiSvgIcon-root _icon_j5luf_59" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></div></a></div></div><div class="_submit__container_j5luf_437"><div class="_split__container_j5luf_442"><div class="_tabs-wrapper__panel_j5luf_445" style="width: calc(50% - 2.5px);"><div class="MuiBox-root jss1299 _tabPanel_2ap3p_2 _dark_2ap3p_30"><div class="MuiPaper-root notranslate MuiPaper-elevation1 MuiPaper-rounded" style="margin: 0px; box-shadow: none;"><div class="MuiTabs-root _tab__container_j5luf_469"><div class="MuiTabs-scroller MuiTabs-fixed" style="overflow: hidden;"><div class="MuiTabs-flexContainer" role="tablist"><button class="MuiButtonBase-root MuiTab-root MuiTab-textColorInherit _tab__title_j5luf_456 _dark_j5luf_30 Mui-selected" tabindex="0" type="button" role="tab" aria-selected="true" id="vertical-tab-panel-0" aria-controls="vertical-tab-panel-0"><span class="MuiTab-wrapper">Statement</span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiTab-root MuiTab-textColorInherit _tab__title_j5luf_456 _dark_j5luf_30" tabindex="-1" type="button" role="tab" aria-selected="false" id="vertical-tab-panel-1" aria-controls="vertical-tab-panel-1"><span class="MuiTab-wrapper">Submissions</span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiTab-root MuiTab-textColorInherit _tab__title_j5luf_456 _dark_j5luf_30" tabindex="-1" type="button" role="tab" aria-selected="false" id="vertical-tab-panel-2" aria-controls="vertical-tab-panel-2"><span class="MuiTab-wrapper">Solution</span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiTab-root MuiTab-textColorInherit _tab__title_j5luf_456 _dark_j5luf_30" tabindex="-1" type="button" role="tab" aria-selected="false" id="vertical-tab-panel-3" aria-controls="vertical-tab-panel-3"><span class="MuiTab-wrapper">Hints</span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiTab-root MuiTab-textColorInherit _tab__title_j5luf_456 _dark_j5luf_30" tabindex="-1" type="button" role="tab" aria-selected="false" id="vertical-tab-panel-4" aria-controls="vertical-tab-panel-4"><span class="MuiTab-wrapper">AI Help</span><span class="MuiTouchRipple-root"></span></button></div><span class="jss1300 jss1301 MuiTabs-indicator" style="left: 0px; width: 126.698px; background: rgb(90, 134, 220);"></span></div></div></div><div id="vertical-tab-panel-0" aria-labelledby="vertical-tab-panel-0" class="_tab__content_j5luf_473" style="height: calc(-96px + 100vh);"><button class="MuiButtonBase-root MuiFab-root _fab__container_18t0v_2 MuiFab-extended MuiFab-sizeSmall" tabindex="0" type="button" style="margin-left: 10px;"><span class="MuiFab-label"><span class="_text_18t0v_16 notranslate">Go to Top</span><svg class="MuiSvgIcon-root _arrow__up-icon_18t0v_13" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M4 12l1.41 1.41L11 7.83V20h2V7.83l5.58 5.59L20 12l-8-8-8 8z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><div class="MuiBox-root jss1304"><div class="_problem-statement__container_jtzpf_2"><div class="_problem-statement__inner__container_jtzpf_107"><div id="problem-statement" class="_problemBody_1x1re_29 _dark_1x1re_239 print "><h3 class="notranslate">Janmansh and Assignments</h3>
<p>Janmansh has to submit <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn></mrow><annotation encoding="application/x-tex">3</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">3</span></span></span></span></span> assignments for Chingari before <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>10</mn></mrow><annotation encoding="application/x-tex">10</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">10</span></span></span></span></span> pm and he starts to do the assignments at <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>X</mi></mrow><annotation encoding="application/x-tex">X</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.07847em;">X</span></span></span></span></span> pm. Each assignment takes him <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn></mrow><annotation encoding="application/x-tex">1</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">1</span></span></span></span></span> hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?</p>
<div class="notranslate">
<h3>Input Format</h3>
<ul>
<li>The first line will contain <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>T</mi></mrow><annotation encoding="application/x-tex">T</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span></span></span></span></span> - the number of test cases. Then the test cases follow.</li>
<li>The first and only line of each test case contains one integer <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>X</mi></mrow><annotation encoding="application/x-tex">X</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.07847em;">X</span></span></span></span></span> - the time when Janmansh starts doing the assignments.</li>
</ul>
</div><div class="notranslate">
<h3>Output Format</h3>
<p>For each test case, output <code>Yes</code> if he can complete the assignments on time. Otherwise, output <code>No</code>.</p>
<p>You may print each character of <code>Yes</code> and <code>No</code> in uppercase or lowercase (for example, <code>yes</code>, <code>yEs</code>, <code>YES</code> will be considered identical).</p>
</div>
<h3 class="notranslate">Constraints</h3>
<div class="_html_code__block_1x1re_188 notranslate">
<ul>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn><mo>≤</mo><mi>T</mi><mo>≤</mo><mn>10</mn></mrow><annotation encoding="application/x-tex">1 \le T \le 10</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.7804em; vertical-align: -0.136em;"></span><span class="mord">1</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.8193em; vertical-align: -0.136em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">10</span></span></span></span></span></li>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn><mo>≤</mo><mi>X</mi><mo>≤</mo><mn>9</mn></mrow><annotation encoding="application/x-tex">1 \le X \le 9</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.7804em; vertical-align: -0.136em;"></span><span class="mord">1</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.8193em; vertical-align: -0.136em;"></span><span class="mord mathnormal" style="margin-right: 0.07847em;">X</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">9</span></span></span></span></span></li>
</ul>
</div>
<h3 class="notranslate">Sample 1:</h3>
<div data-reactroot="" class="_input_output__table_1x1re_194 notranslate"><div class="_text_copy__container_1x1re_198"><div class="_text_copy_1x1re_198 _input_top__box_1x1re_211"><span>Input</span><div title="Copy to clipboard" class="undefined" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div><div class="_text_copy_1x1re_198 _ouput_top__box_1x1re_214"><span>Output</span><div title="Copy to clipboard" class="undefined" style="pointer-events: all;"><span class="_icon__box_10bs7_2 _dark_10bs7_27 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div></div><div class="_values__container_1x1re_217"><div class="_values_1x1re_217"><pre>2
7
9
</pre></div><div class="_values_1x1re_217"><pre>Yes
No
</pre></div></div></div>
<h3 class="notranslate">Explanation:</h3>
<div class="notranslate">
<p><strong>Test case-1:</strong> He can start at <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>7</mn></mrow><annotation encoding="application/x-tex">7</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">7</span></span></span></span></span>pm and finish by <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>10</mn></mrow><annotation encoding="application/x-tex">10</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">10</span></span></span></span></span> pm. Therefore he can complete the assignments.</p>
<p><strong>Test case-2:</strong> He can not complete all the <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn></mrow><annotation encoding="application/x-tex">3</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">3</span></span></span></span></span> assignments if he starts at <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>9</mn></mrow><annotation encoding="application/x-tex">9</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">9</span></span></span></span></span> pm.</p>
</div></div><div class="_feedback__container_jtzpf_124 notranslate"><div class="_upvoteAnnotationContainer_1hm7m_1237 _dark_1hm7m_1150 "><div class="_upvoteMainContainer_1hm7m_1253"><div class="_upvoteMainContainer_1hm7m_1253"><div class="_upvoteAnnotationHeading_1hm7m_1264 _dark_1hm7m_1150">Did you like the problem?</div><div class="_upvoteAnnotationPara_1hm7m_1296">87 users found this helpful</div></div></div><div class="_reportIcons_1hm7m_1259"><svg class="MuiSvgIcon-root _thumbsUpIcon_1hm7m_1272 _dark_1hm7m_1150" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M9 21h9c.83 0 1.54-.5 1.84-1.22l3.02-7.05c.09-.23.14-.47.14-.73v-2c0-1.1-.9-2-2-2h-6.31l.95-4.57.03-.32c0-.41-.17-.79-.44-1.06L14.17 1 7.58 7.59C7.22 7.95 7 8.45 7 9v10c0 1.1.9 2 2 2zM9 9l4.34-4.34L12 10h9v2l-3 7H9V9zM1 9h4v12H1z"></path></svg><svg class="MuiSvgIcon-root _thumbsDownIcon_1hm7m_1280 _dark_1hm7m_1150" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M15 3H6c-.83 0-1.54.5-1.84 1.22l-3.02 7.05c-.09.23-.14.47-.14.73v2c0 1.1.9 2 2 2h6.31l-.95 4.57-.03.32c0 .41.17.79.44 1.06L9.83 23l6.59-6.59c.36-.36.58-.86.58-1.41V5c0-1.1-.9-2-2-2zm0 12l-4.34 4.34L12 14H3v-2l3-7h9v10zm4-12h4v12h-4z"></path></svg><svg class="MuiSvgIcon-root _commentIcon_1hm7m_1288 _dark_1hm7m_1150" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M21.99 4c0-1.1-.89-2-1.99-2H4c-1.1 0-2 .9-2 2v12c0 1.1.9 2 2 2h14l4 4-.01-18zM18 14H6v-2h12v2zm0-3H6V9h12v2zm0-3H6V6h12v2z"></path></svg></div></div></div></div></div></div></div><div hidden="" id="vertical-tab-panel-1" aria-labelledby="vertical-tab-panel-1" class="_tab__content_j5luf_473" style="height: calc(-96px + 100vh);"></div><div hidden="" id="vertical-tab-panel-2" aria-labelledby="vertical-tab-panel-2" class="_tab__content_j5luf_473" style="height: calc(-96px + 100vh);"></div><div hidden="" id="vertical-tab-panel-3" aria-labelledby="vertical-tab-panel-3" class="_tab__content_j5luf_473" style="height: calc(-96px + 100vh);"></div><div id="vertical-tab-panel-4" aria-labelledby="vertical-tab-panel-4" class="_tab__content_j5luf_473" style="height: calc(-96px + 100vh);" hidden=""></div></div></div><div class="gutter gutter-horizontal" style="width: 5px;"></div><div class="_ide-wrapper__panel_j5luf_485 _dark_j5luf_30 notranslate" style="width: calc(50% - 2.5px);"><div class="_ide_r2w6z_2 _dark_r2w6z_30   notranslate"><div class="_ide__container_r2w6z_6 " style="height: calc(-54px + 100vh);"><div><div class="_ideHeader_15g6v_14 _dark_15g6v_55   "><div><div class="MuiFormControl-root" style="width: 156px;"><div class="MuiInputBase-root MuiOutlinedInput-root _language__select_15g6v_35 _dark_15g6v_55   MuiInputBase-formControl"><div class="MuiSelect-root MuiSelect-select MuiSelect-selectMenu MuiSelect-outlined MuiInputBase-input MuiOutlinedInput-input" tabindex="0" role="button" aria-haspopup="listbox" aria-labelledby="language-select" id="language-select">C</div><input aria-hidden="true" tabindex="-1" class="MuiSelect-nativeInput" value="C"><svg class="MuiSvgIcon-root MuiSelect-icon MuiSelect-iconOutlined" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M7 10l5 5 5-5z"></path></svg><fieldset aria-hidden="true" class="jss1305 MuiOutlinedInput-notchedOutline" style="padding-left: 8px;"><legend class="jss1306" style="width: 0.01px;"><span>​</span></legend></fieldset></div></div></div><ul class="_settings_1fs8l_2 _dark_1fs8l_71"><li><div class="_icon__container_1fs8l_16" title="Format code"><i class="_beautify__icon_1fs8l_29"></i></div></li><li><div class="_icon__container_1fs8l_16" title="Reset code"><i class="_reset__icon_1fs8l_41"></i></div></li><li><div class="_icon__container_1fs8l_16" title="Settings"><i class="_settings__icon_1fs8l_53"></i></div></li><li><div class="_icon__container_1fs8l_16" title="Go fullscreen"><i class="_fullscreen__icon_1fs8l_59 _dark_1fs8l_71"></i></div></li></ul></div><div class="_ideEditorWrapper_15g6v_175 _dark_15g6v_55  " style="height: calc(-290px + 100vh);"><div class="MuiBackdrop-root _ide-overlay__backdrop_15g6v_190" aria-hidden="true" style="opacity: 0; transition: opacity 195ms cubic-bezier(0.4, 0, 0.2, 1); visibility: hidden;"></div><div id="submit-ide-v2" class=" ace_editor ace_hidpi _ide__editor_15g6v_218 ace-tomorrow-night ace_dark" style="width: 500px; height: 100%; font-size: 14px;"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" aria-haspopup="false" aria-autocomplete="both" role="textbox" style="opacity: 0; font-size: 1px; height: 1px; width: 1px; transform: translate(52px, 260px);"></textarea><div class="ace_gutter" aria-hidden="true" style="left: 0px; width: 49px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px; transform: translate(0px, -27px); width: 49px;"><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 16px;">2<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 16px; top: 32px;">3<span tabindex="-1" class="ace_fold-widget ace_start ace_open" aria-expanded="true" title="Fold code" role="button" aria-label="Toggle code folding, rows 3 through 16" style="display: inline-block; height: 16px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 48px;">4<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 64px;">5<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 16px; top: 80px;">6<span tabindex="-1" class="ace_fold-widget ace_start ace_open" role="button" aria-label="Toggle code folding, rows 6 through 14" aria-expanded="true" title="Fold code" style="display: inline-block; height: 16px;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 96px;">7<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 112px;">8<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 16px; top: 128px;">9<span class="ace_fold-widget ace_start ace_open" role="button" tabindex="-1" aria-label="Toggle code folding, rows 9 through 10" aria-expanded="true" title="Fold code" style="height: 16px; display: inline-block;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 144px;">10<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="false" style="height: 16px; top: 160px;">11<span class="ace_fold-widget ace_start ace_open" role="button" tabindex="-1" aria-label="Toggle code folding, rows 11 through 13" aria-expanded="true" title="Fold code" style="height: 16px; display: inline-block;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 176px;">12<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 192px;">13<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 208px;">14<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 224px;">15<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 240px;">16<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 256px;">17<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div><div class="ace_gutter-active-line ace_gutter-cell " aria-hidden="true" style="height: 16px; top: 272px;">18<span tabindex="0" style="display: none;"></span><span tabindex="0" style="display: none;"><span></span></span></div></div></div><div class="ace_scroller " style="line-height: 16px; left: 48.3945px; right: 15px; bottom: 0px;"><div class="ace_content" style="transform: translate(0px, -11px); width: 564.605px; height: 293px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 620px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_selection ace_br1 ace_start" style="height: 16px; right: 0px; top: 0px; left: 4px;"></div><div class="ace_selection ace_br12" style="height: 16px; width: 0px; top: 256px; left: 4px;"></div><div class="ace_selection ace_br8" style="height: 240px; right: 0px; top: 16px; left: 4px;"></div></div><div class="ace_layer ace_text-layer" style="height: 1e+06px; margin: 0px 4px; transform: translate(0px, -16px);"><div class="ace_line_group" style="height: 16px; top: 16px;"><div class="ace_line" style="height: 16px;"></div></div><div class="ace_line_group" style="height: 16px; top: 32px;"><div class="ace_line" style="height: 16px;"><span class="ace_storage ace_type">int</span> <span class="ace_identifier">main</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 16px; top: 48px;"><div class="ace_line" style="height: 16px;">    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">T</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 16px; top: 64px;"><div class="ace_line" style="height: 16px;">    <span class="ace_support ace_function ace_C99 ace_c">scanf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_constant ace_language ace_escape">%d</span><span class="ace_string ace_end">"</span><span class="ace_punctuation ace_operator">,</span> <span class="ace_keyword ace_operator">&amp;</span><span class="ace_identifier">T</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span>  <span class="ace_comment">// Read number of test cases</span></div></div><div class="ace_line_group" style="height: 16px; top: 80px;"><div class="ace_line" style="height: 16px;">    <span class="ace_keyword ace_control">while</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">T</span><span class="ace_keyword ace_operator">--</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 16px; top: 96px;"><div class="ace_line" style="height: 16px;"><span class="ace_indent-guide">    </span>    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">X</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 16px; top: 112px;"><div class="ace_line" style="height: 16px;"><span class="ace_indent-guide">    </span>    <span class="ace_support ace_function ace_C99 ace_c">scanf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_constant ace_language ace_escape">%d</span><span class="ace_string ace_end">"</span><span class="ace_punctuation ace_operator">,</span> <span class="ace_keyword ace_operator">&amp;</span><span class="ace_identifier">X</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span>  <span class="ace_comment">// Read the starting time for each test case</span></div></div><div class="ace_line_group" style="height: 16px; top: 128px;"><div class="ace_line" style="height: 16px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">if</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">X</span> <span class="ace_keyword ace_operator">&lt;=</span> <span class="ace_constant ace_numeric">7</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 16px; top: 144px;"><div class="ace_line" style="height: 16px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_string">Yes</span><span class="ace_constant ace_language ace_escape">\n</span><span class="ace_string ace_end">"</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 16px; top: 160px;"><div class="ace_line" style="height: 16px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_rparen">}</span> <span class="ace_keyword ace_control">else</span> <span class="ace_paren ace_lparen">{</span></div></div><div class="ace_line_group" style="height: 16px; top: 176px;"><div class="ace_line" style="height: 16px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_string">No</span><span class="ace_constant ace_language ace_escape">\n</span><span class="ace_string ace_end">"</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 16px; top: 192px;"><div class="ace_line" style="height: 16px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height: 16px; top: 208px;"><div class="ace_line" style="height: 16px;">    <span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height: 16px; top: 224px;"><div class="ace_line" style="height: 16px;">    <span class="ace_keyword ace_control">return</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_line_group" style="height: 16px; top: 240px;"><div class="ace_line" style="height: 16px;"><span class="ace_paren ace_rparen">}</span></div></div><div class="ace_line_group" style="height: 16px; top: 256px;"><div class="ace_line" style="height: 16px;"></div></div><div class="ace_line_group" style="height: 16px; top: 272px;"><div class="ace_line" style="height: 16px;"></div></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors"><div class="ace_cursor" style="display: block; transform: translate(4px, 256px); width: 8px; height: 16px; animation-duration: 1000ms;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 20px; height: 261px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 20px; height: 320px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 20px; left: 48.3945px; right: 15px; width: 564.605px;"><div class="ace_scrollbar-inner" style="height: 20px; width: 587px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; font-optical-sizing: inherit; font-size-adjust: inherit; font-kerning: inherit; font-feature-settings: inherit; font-variation-settings: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div></div></div><div class="_ide-execute__wrapper_r2w6z_20 "><div class="_ideExecuteWrapperRef_1mvh4_2 _dark_1mvh4_12 _simple-ideExecuteWrapperRef_1mvh4_741"><div class="_ideExecuteWrapperComponents_1mvh4_15  "><div class="_testcaseContainer_1mvh4_411 _dark_1mvh4_12"><div class="MuiPaper-root MuiAccordion-root _accordion_1mvh4_414 Mui-expanded MuiPaper-elevation1"><div class="MuiButtonBase-root MuiAccordionSummary-root jss1317 _accordion__summary_1mvh4_419 Mui-expanded jss1320" tabindex="0" role="button" aria-disabled="false" aria-expanded="true"><div class="MuiAccordionSummary-content jss1318 Mui-expanded jss1320"><span>Test against Custom Input</span></div><div class="MuiButtonBase-root MuiIconButton-root MuiAccordionSummary-expandIcon jss1319 Mui-expanded jss1320 MuiIconButton-edgeEnd" aria-disabled="false" aria-hidden="true"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root _expandMoreIcon_1mvh4_737 _dark_1mvh4_12" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16.59 8.59L12 13.17 7.41 8.59 6 10l6 6 6-6z"></path></svg></span><span class="MuiTouchRipple-root"></span></div></div><div class="MuiCollapse-container MuiCollapse-entered" style="min-height: 0px;"><div class="MuiCollapse-wrapper"><div class="MuiCollapse-wrapperInner"><div role="region"><div class="MuiAccordionDetails-root _accordion__details_1mvh4_425"><textarea placeholder="Your program will run with no input" class="_textarea_1mvh4_430" style="margin: 10px 0px; resize: none; height: 100px; background: rgb(255, 255, 255); border: 1px solid rgb(232, 236, 244); border-radius: 4px;">2
7
9
</textarea></div></div></div></div></div></div></div><div></div><div class="_runTab_1mvh4_566 _dark_1mvh4_12"><div class="_compile-submit-result__container_1mvh4_30"><div class="_compile-result__container_1mvh4_35"><div class="_runResult_o49lo_2 _dark_o49lo_163 _runData_o49lo_92"><div class="_output__container_o49lo_138"><div class="_output-item__head_o49lo_142">Sample Input</div><div class="_output-item__value_o49lo_147 " style="background-color: rgb(246, 249, 252);"><pre><code class="">2
7
9
</code></pre></div></div><div class="_output__container_o49lo_138"><div class="_output-item__head_o49lo_142">Your Output</div><div class="_output-item__value_o49lo_147 " style="background-color: rgb(246, 249, 252);"><pre><code class="">Yes
No
</code></pre></div></div></div></div><div><div><div class="_run-result_vov4h_2"><div class="_run__container_vov4h_64 _dark_vov4h_56 _status-success_vov4h_275"><div class="_status__container_vov4h_70"><div class="_status__container_inner_vov4h_79"><i class="_status__icon_vov4h_88"></i></div><span>Awesome, you nailed it!</span></div><div></div></div><div class="_subtask__result_vov4h_419 _dark_vov4h_56"><div><table class="status-table" cellspacing="0" cellpadding="5" width="60%">
    <tbody><tr>
        <th>Sub-Task</th>
        <th>Task #</th>
        <th>Result<br>(time)</th>
    </tr><tr class="correct"><td>1</td><td>1</td><td>Correct<br>(0.00)</td></tr><tr class="correct"><td>1</td><td>2</td><td>Correct<br>(0.00)</td></tr><tr class="subtask-result">
                <td colspan="2" align="right" style="padding-right: 8%"><strong>Subtask Score: 100%</strong>
                </td><td><strong>Result - </strong> Correct</td></tr><tr>
            <th></th>
            <th></th>
            <th>Total Score = 100%<br></th>
        </tr>
    </tbody></table></div></div></div></div></div></div></div></div><div class="_runContainer_1mvh4_125 _dark_1mvh4_12  "><div class="_leftContainer_1mvh4_155"></div><div class="_execute-btn-container_1mvh4_215"><div class="_execute-btn-actions_1mvh4_238"><button type="button" class="_compile__btn_1mvh4_294" id="compile_btn"><svg class="MuiSvgIcon-root _btn__icon_1mvh4_312" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M10 17l5-5-5-5v10z"></path></svg><span class="_btn__text_1mvh4_317">Run</span></button><button type="button" id="submit_btn" class="_submit__btn_1mvh4_333 _dark_1mvh4_12">Submit</button><button type="button" class="_next__problem-link_1mvh4_293"><p class="_btn__text_1mvh4_317">Next</p></button></div></div></div></div></div></div></div></div></div></div></div></div></div></div></div>
  <script type="text/javascript">
    if (window.location.pathname.split('/')[1] === 'pro') {
      const razorPay = document.createElement('script');
      razorPay.setAttribute('src', 'https://checkout.razorpay.com/v1/checkout.js');
      document.head.appendChild(razorPay);

      // const instamojo = document.createElement('script');
      // instamojo.setAttribute('src', 'https://js.instamojo.com/v1/checkout.js');
      // document.head.appendChild(instamojo);

    }
    const scriptElement = document.createElement('script');
    scriptElement.setAttribute('src',
            "/sites/all/modules/codechef_alerts/codechef_alerts.js?v=649c43b6894169b33b5557aa0374459d"
    );
    scriptElement.setAttribute('async', '');
    document.body.appendChild(scriptElement);
  </script>
  <script async="" type="text/javascript" src="./DAY7-CODE_files/cookies.js.download"></script>
  <script type="text/javascript">
    const loadingMessages = [
      'Transform every day with the habit of learning',
      'Explored our courses yet? Enroll now! Over 500k learners have already enrolled.',
      'Pro tip: Facing a challenge while solving problem? Tap into AI Help',
      'Set the pace, set the goal, Maintain your streak by solving problem everyday',
      'Set your own goal to finish each modules',
      'Pro tip: Pseudo code first, then code with ease.',
      'Coding is not difficult, you need to try hard enough',
      '1% better everyday can lead to big results.',
      'Hard work and consistency is the only way to success',
      'Don\'t stop until you are in the top 1%',
      'Becoming the best coder is easy! Just keep doing CodeChef.',
    ];
    const randomIndex = Math.floor(Math.random() * loadingMessages.length);
    document.getElementById('initialLoadingMessage').innerText = loadingMessages[randomIndex];
  </script>
<script defer="" src="./DAY7-CODE_files/vcd15cbe7772f49c399c6a5babf22c1241717689176015" integrity="sha512-ZpsOmlRQV6y907TI0dKBHq9Md29nnaEIPlkf84rnaERnq6zvWvPUqr2ft8M1aS28oN72PdrCzSjY4U6VaAw1EQ==" data-cf-beacon="{&quot;rayId&quot;:&quot;8cd5d0a3b8568540&quot;,&quot;serverTiming&quot;:{&quot;name&quot;:{&quot;cfExtPri&quot;:true,&quot;cfL4&quot;:true}},&quot;version&quot;:&quot;2024.8.0&quot;,&quot;token&quot;:&quot;77024e52546647f9a933aafda26cc5ce&quot;}" crossorigin="anonymous"></script>



<script type="text/javascript">
    window.CDN_URL = 'https://cdn.codechef.com';
    window.csrfToken = "339911d835a627a0b0ea1c895eefebb4161483658adf4a780b631c6fb0192bc3";
    window.APPS_URL = 'https://www.codechef-apps.com';
    window.tawkPropertyId = '668d037a7a36f5aaec9634a5';
    window.widgetId = '1i2bdb6dt';
    try {
        window.codeChefUserData = {"status":"success","user":{"username":"nifty_bears_71","uid":"5021957","profileImage":null,"profileImagePath":"https:\/\/cdn.codechef.com\/sites\/all\/themes\/abessive\/images\/user_default_thumb.jpg","oauth_buttons":null,"oauthData":null,"isUserTeam":false,"html_handle":"nifty_bears_71","userRatingStar":0,"userRatingStarColor":"black","isAdmin":false,"isHYCAdmin":false,"isPremiumUser":false,"isVerifiedUser":true,"user_consented_privacy_policy_version":null,"user_consented_privacy_policy_on":null,"current_privacy_policy_version":"9721896","visitedContests":[],"rating":0,"userStarHtml":"","proDiscount":null,"theme":"dark","fullName":"Priyanshu Singh Bhadouriya","pro_plan":null,"sale":{"isSaleOngoing":false,"saleDaysLeft":-143},"isUserPartOfAnyUserGroup":false,"userSelectedProgrammingLanguage":"C","country":"India","isNumberVerified":false},"time":1728051651,"ip":"2409:40c4:fa:d0bb:d40c:d53a:1aee:faf4","adStrip":null};
    } catch (e) {
        window.codeChefUserData = {};
    }
    try {
        window.userMessages = {"status":"success","messages":null};
    } catch (e) {
        window.userMessages = {};
    }
</script>
<script src="./DAY7-CODE_files/codechef_alerts.js.download" async=""></script><iframe allow="join-ad-interest-group" data-tagging-id="G-C8RQQ7NY18" data-load-time="1728051655335" height="0" width="0" src="./DAY7-CODE_files/rul.html" style="display: none; visibility: hidden;"></iframe><iframe allow="join-ad-interest-group" data-tagging-id="AW-16598187415" data-load-time="1728051655371" height="0" width="0" src="./DAY7-CODE_files/16598187415.html" style="display: none; visibility: hidden;"></iframe><iframe allow="join-ad-interest-group" data-tagging-id="G-C8RQQ7NY18" data-load-time="1728051836500" height="0" width="0" src="./DAY7-CODE_files/rul(1).html" style="display: none; visibility: hidden;"></iframe><div style="top: 0px; left: 0px; position: fixed; display: none; place-items: center; height: 100vh; width: 100vw; z-index: 10000; line-height: 1.5; font-size: 16px; backdrop-filter: blur(2px); background: rgba(0, 0, 0, 0.1); box-sizing: border-box;"></div></body></html>