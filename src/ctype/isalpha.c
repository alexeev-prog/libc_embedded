/**
 * @file   src/ctype/isalpha.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.1.2 The isalpha function
 */
#include <ctype.h>

/**
 * @brief alphabetic character classification
 *
 * The isalpha function tests for any character for which isupper or islower
 * is true, or any character that is one of a locale-specific set of alphabetic
 * characters for which none of iscntrl, isdigit, ispunct, or isspace is true.
 * In the "C" locale, isalpha returns true only for the characters for
 * which isupper or islower is true.
 */
int isalpha(int c){
    return (isupper(c) || islower(c));
}
