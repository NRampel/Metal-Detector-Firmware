#pragma once

#define ALARM_CTR (*(volatile uint32_t*) 0x44A00000)
#define ALARM0 (*(volatile uint32_t*) 0x44A00004)
#define ALARM0_VAL (*(volatile uint32_t*) 0x44A00008)
#define ALARM1 (*(volatile uint32_t*) 0x44A0000C)
#define ALARM1_VAL (*(volatile uint32_t*) 0x44A00010)