/**
 * @file   atoi.c
 * @author Peter Zueger
 * @date   18.08.2018
 * @brief  atoi() implementation
 */
#include <stdlib.h>
#include <macros/NULL.h>

int atoi(const char* nptr){
    return strtol(nptr, NULL, 10);
}
