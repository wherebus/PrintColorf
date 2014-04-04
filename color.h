#ifndef _COLOR_H
#define _COLOR_H

#define TEXT_COLOR_PATTERN "\x1b[%dm%s\x1b[0m" 

enum {
    TXT_RED=31,   
    TXT_GREEN,
    TXT_YELLOW,
    TXT_BLUE,
    TXT_PINK,
    TXT_CYN,
    TXT_WRITE,
    TXT_BLACK
}TEXT;

enum {
    BG_RED = 41,   
    BG_GREEN,
    BG_YELLOW,
    BG_BLUE,
    BG_PINK,
    BG_CYN,
    BG_WRITE,
    BG_BLACK
}BG;

#ifdef LINUX
int print_string(char *str,int txt_color);
#endif //!end ifdef LINUX
#endif //!end ifndef _COLOR_H 
