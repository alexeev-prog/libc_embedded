/**
 * @file   libc/src/string/strncpy.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.2.4 The strncpy function
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2019 Peter Züger.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <string.h>

char* strncpy(char* __restrict__ s1, const char* __restrict__ s2, size_t n){
    char* p = s1;

    while(n > 0){
        n--;
        if(!(*s1++ = *s2++))
            break;
    }

    while(n > 0){
        n--;
        *s1++ = 0;
    }

    return p;
}
