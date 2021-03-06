/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#ifndef __PLATSUPPORT_PLAT_CHARDEV_H__
#define __PLATSUPPORT_PLAT_CHARDEV_H__


/* official device names */
enum chardev_id {
    EXYNOS5_UART0,
    EXYNOS5_UART1,
    EXYNOS5_UART2,
    EXYNOS5_UART3,
    /* Aliases */
    PS_SERIAL0 = EXYNOS5_UART0,
    PS_SERIAL1 = EXYNOS5_UART1,
    PS_SERIAL2 = EXYNOS5_UART2,
    PS_SERIAL3 = EXYNOS5_UART3,
    /* defaults */
    PS_SERIAL_DEFAULT = EXYNOS5_UART0
};




#endif /* __PLATSUPPORT_PLAT_CHARDEV_H__ */


