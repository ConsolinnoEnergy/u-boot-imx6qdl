/*
 * Copyright (C) 2012 Freescale Semiconductor, Inc.
 *
 * Configuration settings for the Freescale i.MX6Q SabreSD board.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __DH_IMX6_CONFIG_H
#define __DH_IMX6_CONFIG_H

#include <asm/arch/imx-regs.h>
#include <asm/imx-common/gpio.h>

#define CONFIG_MACH_TYPE	3980
#define CONFIG_MXC_UART_BASE	UART1_BASE
#define CONFIG_CONSOLE_DEV		"ttymxc0"
#define CONFIG_MMCROOT			"/dev/mmcblk1p2"
#if defined(CONFIG_MX6Q)
#define CONFIG_DEFAULT_FDT_FILE	"imx6q-dheva01.dtb"
#elif defined(CONFIG_MX6DL)
#define CONFIG_DEFAULT_FDT_FILE	"imx6dl-dheva01.dtb"
#endif

#include "dh_mx6_common.h"

#ifdef DH_IMX6_NAND_VERSION
	#define CONFIG_SYS_FSL_USDHC_NUM	2
#else
	#define CONFIG_SYS_FSL_USDHC_NUM	3
#endif
#if defined(CONFIG_ENV_IS_IN_MMC)
#define CONFIG_SYS_MMC_ENV_DEV		2	/* 1 = SDHC3, 2 = SDHC4 (eMMC) */
#endif
#define CONFIG_SYS_DEFAULT_MMC_DEV	1   /* 0 = SD, 1 = microSD, 2 = eMMC */

/* Framebuffer */
#define CONFIG_VIDEO
#define CONFIG_VIDEO_IPUV3
#define CONFIG_CFB_CONSOLE
#define CONFIG_VGA_AS_SINGLE_DEVICE
#define CONFIG_SYS_CONSOLE_IS_IN_ENV
#define CONFIG_SYS_CONSOLE_OVERWRITE_ROUTINE
#define CONFIG_VIDEO_BMP_RLE8
#define CONFIG_SPLASH_SCREEN
#define CONFIG_SPLASH_SCREEN_ALIGN
#define CONFIG_BMP_16BPP
#define CONFIG_VIDEO_LOGO
#define CONFIG_VIDEO_BMP_LOGO
#define CONFIG_IPUV3_CLK 198000000//260000000
#define CONFIG_CONSOLE_MUX
#define CONFIG_CMD_BMP
#define SPLASH_MAX_SIZE 0x500000 // Max FullHD 1920x1080 24bpp
#define CONFIG_VIDEO_BMP_GZIP
#define CONFIG_SYS_VIDEO_LOGO_MAX_SIZE	(2 << 20)	/* for decompressed img */

#endif                         /* __DH_IMX6_CONFIG_H */
