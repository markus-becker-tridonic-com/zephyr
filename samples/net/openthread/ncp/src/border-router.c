/* border-router.c - OpenThread NCP Border Router */

/*
 * Copyright (c) 2020 Tridonic GmbH & Co KG
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <logging/log.h>
LOG_MODULE_REGISTER(ot_br, LOG_LEVEL_DBG);

#include <zephyr.h>

#define APP_BANNER "***** OpenThread NCP on Zephyr %s *****"

void main(void)
{
	LOG_INF(APP_BANNER, CONFIG_APPLICATION_VERSION);

	while (1) {
		k_sleep(MSEC_PER_SEC * 4U);
	}
}
