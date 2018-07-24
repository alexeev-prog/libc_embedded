/**
 * @file   clock_t.h
 * @author Peter Zueger
 * @date   24.07.2018
 * @brief  clock ticks this second
 */
#ifndef __CLOCK_T_H__
#define __CLOCK_T_H__

#if defined(__UINT32_TYPE__) || defined(DOXYGEN)
# if !defined(__CLOCK_T_DEFINED__)
#  define __CLOCK_T_DEFINED__
#  define CLOCK_MIN (0)
#  define CLOCK_MAX (__UINT32_MAX__)
typedef __UINT32_TYPE__ clock_t;
# endif /* !defined(__CLOCK_T_DEFINED__) */
#endif /* defined(__UINT32_TYPE__) || defined(DOXYGEN) */

#endif /* __CLOCK_T_H__ */
