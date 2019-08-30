/*
 * Copyright (c) 2019 bytes at work AG
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief System/hardware module for k2x platform
 *
 * This module provides a generic routine to setup a k2x based board.
 */

#include <init.h>

#if defined(CONFIG_SOC_MK22FA12)
#include <system_MK22FA12.h>
#else
#error "Unknown Soc"
#endif

static int system_wrapper(struct device *arg)
{
	ARG_UNUSED(arg);
	SystemInit();
	return 0;
}

SYS_INIT(system_wrapper, PRE_KERNEL_1, 0);
