/**
 * @file   atof.c
 * @author Peter Züger
 * @date   18.08.2018
 * @brief  atof() implementation
 */
#include <stdlib.h>
#include <macros/NULL.h>

double atof(const char* nptr){
    return strtod(nptr, NULL);
}
