/**
 * @file xf_std_config.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief
 * @version 0.1
 * @date 2024-06-28
 *
 * @copyright Copyright (c) 2024, CorAL. All rights reserved.
 *
 */

#ifndef __XF_STD_CONFIG_H__
#define __XF_STD_CONFIG_H__

/* ==================== [Includes] ========================================== */

#include "../xf_utils_internal_config.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

#if !defined(XF_STDDEF_ENABLE) || (XF_STDDEF_ENABLE)
#   define XF_STDDEF_IS_ENABLE     (1)
#else
#   define XF_STDDEF_IS_ENABLE     (0)
#endif

#if !defined(XF_STDINT_ENABLE) || (XF_STDINT_ENABLE)
#   define XF_STDINT_IS_ENABLE     (1)
#else
#   define XF_STDDEF_IS_ENABLE     (0)
#endif

#if !defined(XF_STDBOOL_ENABLE) || (XF_STDBOOL_ENABLE)
#   define XF_STDBOOL_IS_ENABLE     (1)
#else
#   define XF_STDBOOL_IS_ENABLE     (0)
#endif


/**
 * @defgroup xf_stdlib_configuration xf_stdlib 配置.
 * @{
 */

#if !defined(XF_STDLIB_ENABLE) || (XF_STDLIB_ENABLE)
#   define XF_STDLIB_IS_ENABLE     (1)
#else
#   define XF_STDLIB_IS_ENABLE     (0)
#endif

#ifndef xf_user_malloc
#   define xf_user_malloc(x) malloc(x)
#endif

#ifndef xf_user_free
#   define xf_user_free(x) free(x)
#endif

/**
 * @} // xf_stdlib_configuration
 */

/**
 * @defgroup xf_string_configuration xf_string 配置.
 * @{
 */

#if !defined(XF_STRING_ENABLE) || (XF_STRING_ENABLE)
#   define XF_STRING_IS_ENABLE     (1)
#else
#   define XF_STRING_IS_ENABLE     (0)
#endif

#ifndef xf_user_memcpy
#   define xf_user_memcpy(dest, src, n)   memcpy(dest, src, n)
#endif

#ifndef xf_user_memcmp
#   define xf_user_memcmp(dest, src, n)   memcmp(dest, src, n)
#endif

#ifndef xf_user_memset
#   define xf_user_memset(ptr, value, size) memset((ptr), (value), (size))
#endif

/**
 * @} // xf_stdlib_configuration
 */

/* ==================== [Typedefs] ========================================== */

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // __XF_STD_CONFIG_H__
