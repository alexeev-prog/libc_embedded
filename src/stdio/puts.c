/**
 * @file   puts.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  puts() implementation
 */
#include <stdio.h>

int puts(const char* s){
    while(*s){
        if(*s == putchar(*s))
            s++;
        else
            return EOF;
    }
    return putchar('\n');
}
