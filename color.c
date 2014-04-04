#include <stdio.h>
#include "color.h"
int print_string(char *str,int txt_color){
    return printf(TEXT_COLOR_PATTERN,txt_color,str);
}
