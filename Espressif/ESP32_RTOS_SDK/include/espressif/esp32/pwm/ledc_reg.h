/*
 * ESPRSSIF MIT License
 *
 * Copyright (c) 2015 <ESPRESSIF SYSTEMS (SHANGHAI) PTE LTD>
 *
 * Permission is hereby granted for use on ESPRESSIF SYSTEMS ESP32 only, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef _LEDC_REG_H
#define _LEDC_REG_H

#define LEDC_HSCH0_CONF0 (DR_REG_LEDC_BASE + 0x0000)
#define LEDC_CLK_EN (BIT(31))
#define LEDC_CLK_EN_S 31
#define LEDC_IDLE_LV_HSCH0 (BIT(3))
#define LEDC_IDLE_LV_HSCH0_S 3
#define LEDC_SIG_OUT_EN_HSCH0 (BIT(2))
#define LEDC_SIG_OUT_EN_HSCH0_S 2
#define LEDC_TIMER_SEL_HSCH0 0x00000003
#define LEDC_TIMER_SEL_HSCH0_S 0

#define LEDC_HSCH0_HPOINT (DR_REG_LEDC_BASE + 0x0004)
#define LEDC_HPOINT_HSCH0 0x000FFFFF
#define LEDC_HPOINT_HSCH0_S 0

#define LEDC_HSCH0_DUTY (DR_REG_LEDC_BASE + 0x0008)
#define LEDC_DUTY_HSCH0 0x01FFFFFF
#define LEDC_DUTY_HSCH0_S 0

#define LEDC_HSCH0_CONF1 (DR_REG_LEDC_BASE + 0x000C)
#define LEDC_DUTY_START_HSCH0 (BIT(31))
#define LEDC_DUTY_START_HSCH0_S 31
#define LEDC_DUTY_INC_HSCH0 (BIT(30))
#define LEDC_DUTY_INC_HSCH0_S 30
#define LEDC_DUTY_NUM_HSCH0 0x000003FF
#define LEDC_DUTY_NUM_HSCH0_S 20
#define LEDC_DUTY_CYCLE_HSCH0 0x000003FF
#define LEDC_DUTY_CYCLE_HSCH0_S 10
#define LEDC_DUTY_SCALE_HSCH0 0x000003FF
#define LEDC_DUTY_SCALE_HSCH0_S 0

#define LEDC_HSCH0_DUTY_R (DR_REG_LEDC_BASE + 0x0010)
#define LEDC_DUTY_HSCH0 0x01FFFFFF
#define LEDC_DUTY_HSCH0_S 0

#define LEDC_HSCH1_CONF0 (DR_REG_LEDC_BASE + 0x0014)
#define LEDC_IDLE_LV_HSCH1 (BIT(3))
#define LEDC_IDLE_LV_HSCH1_S 3
#define LEDC_SIG_OUT_EN_HSCH1 (BIT(2))
#define LEDC_SIG_OUT_EN_HSCH1_S 2
#define LEDC_TIMER_SEL_HSCH1 0x00000003
#define LEDC_TIMER_SEL_HSCH1_S 0

#define LEDC_HSCH1_HPOINT (DR_REG_LEDC_BASE + 0x0018)
#define LEDC_HPOINT_HSCH1 0x000FFFFF
#define LEDC_HPOINT_HSCH1_S 0

#define LEDC_HSCH1_DUTY (DR_REG_LEDC_BASE + 0x001C)
#define LEDC_DUTY_HSCH1 0x01FFFFFF
#define LEDC_DUTY_HSCH1_S 0

#define LEDC_HSCH1_CONF1 (DR_REG_LEDC_BASE + 0x0020)
#define LEDC_DUTY_START_HSCH1 (BIT(31))
#define LEDC_DUTY_START_HSCH1_S 31
#define LEDC_DUTY_INC_HSCH1 (BIT(30))
#define LEDC_DUTY_INC_HSCH1_S 30
#define LEDC_DUTY_NUM_HSCH1 0x000003FF
#define LEDC_DUTY_NUM_HSCH1_S 20
#define LEDC_DUTY_CYCLE_HSCH1 0x000003FF
#define LEDC_DUTY_CYCLE_HSCH1_S 10
#define LEDC_DUTY_SCALE_HSCH1 0x000003FF
#define LEDC_DUTY_SCALE_HSCH1_S 0

#define LEDC_HSCH1_DUTY_R (DR_REG_LEDC_BASE + 0x0024)
#define LEDC_DUTY_HSCH1 0x01FFFFFF
#define LEDC_DUTY_HSCH1_S 0

#define LEDC_HSCH2_CONF0 (DR_REG_LEDC_BASE + 0x0028)
#define LEDC_IDLE_LV_HSCH2 (BIT(3))
#define LEDC_IDLE_LV_HSCH2_S 3
#define LEDC_SIG_OUT_EN_HSCH2 (BIT(2))
#define LEDC_SIG_OUT_EN_HSCH2_S 2
#define LEDC_TIMER_SEL_HSCH2 0x00000003
#define LEDC_TIMER_SEL_HSCH2_S 0

#define LEDC_HSCH2_HPOINT (DR_REG_LEDC_BASE + 0x002C)
#define LEDC_HPOINT_HSCH2 0x000FFFFF
#define LEDC_HPOINT_HSCH2_S 0

#define LEDC_HSCH2_DUTY (DR_REG_LEDC_BASE + 0x0030)
#define LEDC_DUTY_HSCH2 0x01FFFFFF
#define LEDC_DUTY_HSCH2_S 0

#define LEDC_HSCH2_CONF1 (DR_REG_LEDC_BASE + 0x0034)
#define LEDC_DUTY_START_HSCH2 (BIT(31))
#define LEDC_DUTY_START_HSCH2_S 31
#define LEDC_DUTY_INC_HSCH2 (BIT(30))
#define LEDC_DUTY_INC_HSCH2_S 30
#define LEDC_DUTY_NUM_HSCH2 0x000003FF
#define LEDC_DUTY_NUM_HSCH2_S 20
#define LEDC_DUTY_CYCLE_HSCH2 0x000003FF
#define LEDC_DUTY_CYCLE_HSCH2_S 10
#define LEDC_DUTY_SCALE_HSCH2 0x000003FF
#define LEDC_DUTY_SCALE_HSCH2_S 0

#define LEDC_HSCH2_DUTY_R (DR_REG_LEDC_BASE + 0x0038)
#define LEDC_DUTY_HSCH2 0x01FFFFFF
#define LEDC_DUTY_HSCH2_S 0

#define LEDC_HSCH3_CONF0 (DR_REG_LEDC_BASE + 0x003C)
#define LEDC_IDLE_LV_HSCH3 (BIT(3))
#define LEDC_IDLE_LV_HSCH3_S 3
#define LEDC_SIG_OUT_EN_HSCH3 (BIT(2))
#define LEDC_SIG_OUT_EN_HSCH3_S 2
#define LEDC_TIMER_SEL_HSCH3 0x00000003
#define LEDC_TIMER_SEL_HSCH3_S 0

#define LEDC_HSCH3_HPOINT (DR_REG_LEDC_BASE + 0x0040)
#define LEDC_HPOINT_HSCH3 0x000FFFFF
#define LEDC_HPOINT_HSCH3_S 0

#define LEDC_HSCH3_DUTY (DR_REG_LEDC_BASE + 0x0044)
#define LEDC_DUTY_HSCH3 0x01FFFFFF
#define LEDC_DUTY_HSCH3_S 0

#define LEDC_HSCH3_CONF1 (DR_REG_LEDC_BASE + 0x0048)
#define LEDC_DUTY_START_HSCH3 (BIT(31))
#define LEDC_DUTY_START_HSCH3_S 31
#define LEDC_DUTY_INC_HSCH3 (BIT(30))
#define LEDC_DUTY_INC_HSCH3_S 30
#define LEDC_DUTY_NUM_HSCH3 0x000003FF
#define LEDC_DUTY_NUM_HSCH3_S 20
#define LEDC_DUTY_CYCLE_HSCH3 0x000003FF
#define LEDC_DUTY_CYCLE_HSCH3_S 10
#define LEDC_DUTY_SCALE_HSCH3 0x000003FF
#define LEDC_DUTY_SCALE_HSCH3_S 0

#define LEDC_HSCH3_DUTY_R (DR_REG_LEDC_BASE + 0x004C)
#define LEDC_DUTY_HSCH3 0x01FFFFFF
#define LEDC_DUTY_HSCH3_S 0

#define LEDC_HSCH4_CONF0 (DR_REG_LEDC_BASE + 0x0050)
#define LEDC_IDLE_LV_HSCH4 (BIT(3))
#define LEDC_IDLE_LV_HSCH4_S 3
#define LEDC_SIG_OUT_EN_HSCH4 (BIT(2))
#define LEDC_SIG_OUT_EN_HSCH4_S 2
#define LEDC_TIMER_SEL_HSCH4 0x00000003
#define LEDC_TIMER_SEL_HSCH4_S 0

#define LEDC_HSCH4_HPOINT (DR_REG_LEDC_BASE + 0x0054)
#define LEDC_HPOINT_HSCH4 0x000FFFFF
#define LEDC_HPOINT_HSCH4_S 0

#define LEDC_HSCH4_DUTY (DR_REG_LEDC_BASE + 0x0058)
#define LEDC_DUTY_HSCH4 0x01FFFFFF
#define LEDC_DUTY_HSCH4_S 0

#define LEDC_HSCH4_CONF1 (DR_REG_LEDC_BASE + 0x005C)
#define LEDC_DUTY_START_HSCH4 (BIT(31))
#define LEDC_DUTY_START_HSCH4_S 31
#define LEDC_DUTY_INC_HSCH4 (BIT(30))
#define LEDC_DUTY_INC_HSCH4_S 30
#define LEDC_DUTY_NUM_HSCH4 0x000003FF
#define LEDC_DUTY_NUM_HSCH4_S 20
#define LEDC_DUTY_CYCLE_HSCH4 0x000003FF
#define LEDC_DUTY_CYCLE_HSCH4_S 10
#define LEDC_DUTY_SCALE_HSCH4 0x000003FF
#define LEDC_DUTY_SCALE_HSCH4_S 0

#define LEDC_HSCH4_DUTY_R (DR_REG_LEDC_BASE + 0x0060)
#define LEDC_DUTY_HSCH4 0x01FFFFFF
#define LEDC_DUTY_HSCH4_S 0

#define LEDC_HSCH5_CONF0 (DR_REG_LEDC_BASE + 0x0064)
#define LEDC_IDLE_LV_HSCH5 (BIT(3))
#define LEDC_IDLE_LV_HSCH5_S 3
#define LEDC_SIG_OUT_EN_HSCH5 (BIT(2))
#define LEDC_SIG_OUT_EN_HSCH5_S 2
#define LEDC_TIMER_SEL_HSCH5 0x00000003
#define LEDC_TIMER_SEL_HSCH5_S 0

#define LEDC_HSCH5_HPOINT (DR_REG_LEDC_BASE + 0x0068)
#define LEDC_HPOINT_HSCH5 0x000FFFFF
#define LEDC_HPOINT_HSCH5_S 0

#define LEDC_HSCH5_DUTY (DR_REG_LEDC_BASE + 0x006C)
#define LEDC_DUTY_HSCH5 0x01FFFFFF
#define LEDC_DUTY_HSCH5_S 0

#define LEDC_HSCH5_CONF1 (DR_REG_LEDC_BASE + 0x0070)
#define LEDC_DUTY_START_HSCH5 (BIT(31))
#define LEDC_DUTY_START_HSCH5_S 31
#define LEDC_DUTY_INC_HSCH5 (BIT(30))
#define LEDC_DUTY_INC_HSCH5_S 30
#define LEDC_DUTY_NUM_HSCH5 0x000003FF
#define LEDC_DUTY_NUM_HSCH5_S 20
#define LEDC_DUTY_CYCLE_HSCH5 0x000003FF
#define LEDC_DUTY_CYCLE_HSCH5_S 10
#define LEDC_DUTY_SCALE_HSCH5 0x000003FF
#define LEDC_DUTY_SCALE_HSCH5_S 0

#define LEDC_HSCH5_DUTY_R (DR_REG_LEDC_BASE + 0x0074)
#define LEDC_DUTY_HSCH5 0x01FFFFFF
#define LEDC_DUTY_HSCH5_S 0

#define LEDC_HSCH6_CONF0 (DR_REG_LEDC_BASE + 0x0078)
#define LEDC_IDLE_LV_HSCH6 (BIT(3))
#define LEDC_IDLE_LV_HSCH6_S 3
#define LEDC_SIG_OUT_EN_HSCH6 (BIT(2))
#define LEDC_SIG_OUT_EN_HSCH6_S 2
#define LEDC_TIMER_SEL_HSCH6 0x00000003
#define LEDC_TIMER_SEL_HSCH6_S 0

#define LEDC_HSCH6_HPOINT (DR_REG_LEDC_BASE + 0x007C)
#define LEDC_HPOINT_HSCH6 0x000FFFFF
#define LEDC_HPOINT_HSCH6_S 0

#define LEDC_HSCH6_DUTY (DR_REG_LEDC_BASE + 0x0080)
#define LEDC_DUTY_HSCH6 0x01FFFFFF
#define LEDC_DUTY_HSCH6_S 0

#define LEDC_HSCH6_CONF1 (DR_REG_LEDC_BASE + 0x0084)
#define LEDC_DUTY_START_HSCH6 (BIT(31))
#define LEDC_DUTY_START_HSCH6_S 31
#define LEDC_DUTY_INC_HSCH6 (BIT(30))
#define LEDC_DUTY_INC_HSCH6_S 30
#define LEDC_DUTY_NUM_HSCH6 0x000003FF
#define LEDC_DUTY_NUM_HSCH6_S 20
#define LEDC_DUTY_CYCLE_HSCH6 0x000003FF
#define LEDC_DUTY_CYCLE_HSCH6_S 10
#define LEDC_DUTY_SCALE_HSCH6 0x000003FF
#define LEDC_DUTY_SCALE_HSCH6_S 0

#define LEDC_HSCH6_DUTY_R (DR_REG_LEDC_BASE + 0x0088)
#define LEDC_DUTY_HSCH6 0x01FFFFFF
#define LEDC_DUTY_HSCH6_S 0

#define LEDC_HSCH7_CONF0 (DR_REG_LEDC_BASE + 0x008C)
#define LEDC_IDLE_LV_HSCH7 (BIT(3))
#define LEDC_IDLE_LV_HSCH7_S 3
#define LEDC_SIG_OUT_EN_HSCH7 (BIT(2))
#define LEDC_SIG_OUT_EN_HSCH7_S 2
#define LEDC_TIMER_SEL_HSCH7 0x00000003
#define LEDC_TIMER_SEL_HSCH7_S 0

#define LEDC_HSCH7_HPOINT (DR_REG_LEDC_BASE + 0x0090)
#define LEDC_HPOINT_HSCH7 0x000FFFFF
#define LEDC_HPOINT_HSCH7_S 0

#define LEDC_HSCH7_DUTY (DR_REG_LEDC_BASE + 0x0094)
#define LEDC_DUTY_HSCH7 0x01FFFFFF
#define LEDC_DUTY_HSCH7_S 0

#define LEDC_HSCH7_CONF1 (DR_REG_LEDC_BASE + 0x0098)
#define LEDC_DUTY_START_HSCH7 (BIT(31))
#define LEDC_DUTY_START_HSCH7_S 31
#define LEDC_DUTY_INC_HSCH7 (BIT(30))
#define LEDC_DUTY_INC_HSCH7_S 30
#define LEDC_DUTY_NUM_HSCH7 0x000003FF
#define LEDC_DUTY_NUM_HSCH7_S 20
#define LEDC_DUTY_CYCLE_HSCH7 0x000003FF
#define LEDC_DUTY_CYCLE_HSCH7_S 10
#define LEDC_DUTY_SCALE_HSCH7 0x000003FF
#define LEDC_DUTY_SCALE_HSCH7_S 0

#define LEDC_HSCH7_DUTY_R (DR_REG_LEDC_BASE + 0x009C)
#define LEDC_DUTY_HSCH7 0x01FFFFFF
#define LEDC_DUTY_HSCH7_S 0

#define LEDC_LSCH0_CONF0 (DR_REG_LEDC_BASE + 0x00A0)
#define LEDC_PARA_UP_LSCH0 (BIT(4))
#define LEDC_PARA_UP_LSCH0_S 4
#define LEDC_IDLE_LV_LSCH0 (BIT(3))
#define LEDC_IDLE_LV_LSCH0_S 3
#define LEDC_SIG_OUT_EN_LSCH0 (BIT(2))
#define LEDC_SIG_OUT_EN_LSCH0_S 2
#define LEDC_TIMER_SEL_LSCH0 0x00000003
#define LEDC_TIMER_SEL_LSCH0_S 0

#define LEDC_LSCH0_HPOINT (DR_REG_LEDC_BASE + 0x00A4)
#define LEDC_HPOINT_LSCH0 0x000FFFFF
#define LEDC_HPOINT_LSCH0_S 0

#define LEDC_LSCH0_DUTY (DR_REG_LEDC_BASE + 0x00A8)
#define LEDC_DUTY_LSCH0 0x01FFFFFF
#define LEDC_DUTY_LSCH0_S 0

#define LEDC_LSCH0_CONF1 (DR_REG_LEDC_BASE + 0x00AC)
#define LEDC_DUTY_START_LSCH0 (BIT(31))
#define LEDC_DUTY_START_LSCH0_S 31
#define LEDC_DUTY_INC_LSCH0 (BIT(30))
#define LEDC_DUTY_INC_LSCH0_S 30
#define LEDC_DUTY_NUM_LSCH0 0x000003FF
#define LEDC_DUTY_NUM_LSCH0_S 20
#define LEDC_DUTY_CYCLE_LSCH0 0x000003FF
#define LEDC_DUTY_CYCLE_LSCH0_S 10
#define LEDC_DUTY_SCALE_LSCH0 0x000003FF
#define LEDC_DUTY_SCALE_LSCH0_S 0

#define LEDC_LSCH0_DUTY_R (DR_REG_LEDC_BASE + 0x00B0)
#define LEDC_DUTY_LSCH0 0x01FFFFFF
#define LEDC_DUTY_LSCH0_S 0

#define LEDC_LSCH1_CONF0 (DR_REG_LEDC_BASE + 0x00B4)
#define LEDC_PARA_UP_LSCH1 (BIT(4))
#define LEDC_PARA_UP_LSCH1_S 4
#define LEDC_IDLE_LV_LSCH1 (BIT(3))
#define LEDC_IDLE_LV_LSCH1_S 3
#define LEDC_SIG_OUT_EN_LSCH1 (BIT(2))
#define LEDC_SIG_OUT_EN_LSCH1_S 2
#define LEDC_TIMER_SEL_LSCH1 0x00000003
#define LEDC_TIMER_SEL_LSCH1_S 0

#define LEDC_LSCH1_HPOINT (DR_REG_LEDC_BASE + 0x00B8)
#define LEDC_HPOINT_LSCH1 0x000FFFFF
#define LEDC_HPOINT_LSCH1_S 0

#define LEDC_LSCH1_DUTY (DR_REG_LEDC_BASE + 0x00BC)
#define LEDC_DUTY_LSCH1 0x01FFFFFF
#define LEDC_DUTY_LSCH1_S 0

#define LEDC_LSCH1_CONF1 (DR_REG_LEDC_BASE + 0x00C0)
#define LEDC_DUTY_START_LSCH1 (BIT(31))
#define LEDC_DUTY_START_LSCH1_S 31
#define LEDC_DUTY_INC_LSCH1 (BIT(30))
#define LEDC_DUTY_INC_LSCH1_S 30
#define LEDC_DUTY_NUM_LSCH1 0x000003FF
#define LEDC_DUTY_NUM_LSCH1_S 20
#define LEDC_DUTY_CYCLE_LSCH1 0x000003FF
#define LEDC_DUTY_CYCLE_LSCH1_S 10
#define LEDC_DUTY_SCALE_LSCH1 0x000003FF
#define LEDC_DUTY_SCALE_LSCH1_S 0

#define LEDC_LSCH1_DUTY_R (DR_REG_LEDC_BASE + 0x00C4)
#define LEDC_DUTY_LSCH1 0x01FFFFFF
#define LEDC_DUTY_LSCH1_S 0

#define LEDC_LSCH2_CONF0 (DR_REG_LEDC_BASE + 0x00C8)
#define LEDC_PARA_UP_LSCH2 (BIT(4))
#define LEDC_PARA_UP_LSCH2_S 4
#define LEDC_IDLE_LV_LSCH2 (BIT(3))
#define LEDC_IDLE_LV_LSCH2_S 3
#define LEDC_SIG_OUT_EN_LSCH2 (BIT(2))
#define LEDC_SIG_OUT_EN_LSCH2_S 2
#define LEDC_TIMER_SEL_LSCH2 0x00000003
#define LEDC_TIMER_SEL_LSCH2_S 0

#define LEDC_LSCH2_HPOINT (DR_REG_LEDC_BASE + 0x00CC)
#define LEDC_HPOINT_LSCH2 0x000FFFFF
#define LEDC_HPOINT_LSCH2_S 0

#define LEDC_LSCH2_DUTY (DR_REG_LEDC_BASE + 0x00D0)
#define LEDC_DUTY_LSCH2 0x01FFFFFF
#define LEDC_DUTY_LSCH2_S 0

#define LEDC_LSCH2_CONF1 (DR_REG_LEDC_BASE + 0x00D4)
#define LEDC_DUTY_START_LSCH2 (BIT(31))
#define LEDC_DUTY_START_LSCH2_S 31
#define LEDC_DUTY_INC_LSCH2 (BIT(30))
#define LEDC_DUTY_INC_LSCH2_S 30
#define LEDC_DUTY_NUM_LSCH2 0x000003FF
#define LEDC_DUTY_NUM_LSCH2_S 20
#define LEDC_DUTY_CYCLE_LSCH2 0x000003FF
#define LEDC_DUTY_CYCLE_LSCH2_S 10
#define LEDC_DUTY_SCALE_LSCH2 0x000003FF
#define LEDC_DUTY_SCALE_LSCH2_S 0

#define LEDC_LSCH2_DUTY_R (DR_REG_LEDC_BASE + 0x00D8)
#define LEDC_DUTY_LSCH2 0x01FFFFFF
#define LEDC_DUTY_LSCH2_S 0

#define LEDC_LSCH3_CONF0 (DR_REG_LEDC_BASE + 0x00DC)
#define LEDC_PARA_UP_LSCH3 (BIT(4))
#define LEDC_PARA_UP_LSCH3_S 4
#define LEDC_IDLE_LV_LSCH3 (BIT(3))
#define LEDC_IDLE_LV_LSCH3_S 3
#define LEDC_SIG_OUT_EN_LSCH3 (BIT(2))
#define LEDC_SIG_OUT_EN_LSCH3_S 2
#define LEDC_TIMER_SEL_LSCH3 0x00000003
#define LEDC_TIMER_SEL_LSCH3_S 0

#define LEDC_LSCH3_HPOINT (DR_REG_LEDC_BASE + 0x00E0)
#define LEDC_HPOINT_LSCH3 0x000FFFFF
#define LEDC_HPOINT_LSCH3_S 0

#define LEDC_LSCH3_DUTY (DR_REG_LEDC_BASE + 0x00E4)
#define LEDC_DUTY_LSCH3 0x01FFFFFF
#define LEDC_DUTY_LSCH3_S 0

#define LEDC_LSCH3_CONF1 (DR_REG_LEDC_BASE + 0x00E8)
#define LEDC_DUTY_START_LSCH3 (BIT(31))
#define LEDC_DUTY_START_LSCH3_S 31
#define LEDC_DUTY_INC_LSCH3 (BIT(30))
#define LEDC_DUTY_INC_LSCH3_S 30
#define LEDC_DUTY_NUM_LSCH3 0x000003FF
#define LEDC_DUTY_NUM_LSCH3_S 20
#define LEDC_DUTY_CYCLE_LSCH3 0x000003FF
#define LEDC_DUTY_CYCLE_LSCH3_S 10
#define LEDC_DUTY_SCALE_LSCH3 0x000003FF
#define LEDC_DUTY_SCALE_LSCH3_S 0

#define LEDC_LSCH3_DUTY_R (DR_REG_LEDC_BASE + 0x00EC)
#define LEDC_DUTY_LSCH3 0x01FFFFFF
#define LEDC_DUTY_LSCH3_S 0

#define LEDC_LSCH4_CONF0 (DR_REG_LEDC_BASE + 0x00F0)
#define LEDC_PARA_UP_LSCH4 (BIT(4))
#define LEDC_PARA_UP_LSCH4_S 4
#define LEDC_IDLE_LV_LSCH4 (BIT(3))
#define LEDC_IDLE_LV_LSCH4_S 3
#define LEDC_SIG_OUT_EN_LSCH4 (BIT(2))
#define LEDC_SIG_OUT_EN_LSCH4_S 2
#define LEDC_TIMER_SEL_LSCH4 0x00000003
#define LEDC_TIMER_SEL_LSCH4_S 0

#define LEDC_LSCH4_HPOINT (DR_REG_LEDC_BASE + 0x00F4)
#define LEDC_HPOINT_LSCH4 0x000FFFFF
#define LEDC_HPOINT_LSCH4_S 0

#define LEDC_LSCH4_DUTY (DR_REG_LEDC_BASE + 0x00F8)
#define LEDC_DUTY_LSCH4 0x01FFFFFF
#define LEDC_DUTY_LSCH4_S 0

#define LEDC_LSCH4_CONF1 (DR_REG_LEDC_BASE + 0x00FC)
#define LEDC_DUTY_START_LSCH4 (BIT(31))
#define LEDC_DUTY_START_LSCH4_S 31
#define LEDC_DUTY_INC_LSCH4 (BIT(30))
#define LEDC_DUTY_INC_LSCH4_S 30
#define LEDC_DUTY_NUM_LSCH4 0x000003FF
#define LEDC_DUTY_NUM_LSCH4_S 20
#define LEDC_DUTY_CYCLE_LSCH4 0x000003FF
#define LEDC_DUTY_CYCLE_LSCH4_S 10
#define LEDC_DUTY_SCALE_LSCH4 0x000003FF
#define LEDC_DUTY_SCALE_LSCH4_S 0

#define LEDC_LSCH4_DUTY_R (DR_REG_LEDC_BASE + 0x0100)
#define LEDC_DUTY_LSCH4 0x01FFFFFF
#define LEDC_DUTY_LSCH4_S 0

#define LEDC_LSCH5_CONF0 (DR_REG_LEDC_BASE + 0x0104)
#define LEDC_PARA_UP_LSCH5 (BIT(4))
#define LEDC_PARA_UP_LSCH5_S 4
#define LEDC_IDLE_LV_LSCH5 (BIT(3))
#define LEDC_IDLE_LV_LSCH5_S 3
#define LEDC_SIG_OUT_EN_LSCH5 (BIT(2))
#define LEDC_SIG_OUT_EN_LSCH5_S 2
#define LEDC_TIMER_SEL_LSCH5 0x00000003
#define LEDC_TIMER_SEL_LSCH5_S 0

#define LEDC_LSCH5_HPOINT (DR_REG_LEDC_BASE + 0x0108)
#define LEDC_HPOINT_LSCH5 0x000FFFFF
#define LEDC_HPOINT_LSCH5_S 0

#define LEDC_LSCH5_DUTY (DR_REG_LEDC_BASE + 0x0110)
#define LEDC_DUTY_LSCH5 0x01FFFFFF
#define LEDC_DUTY_LSCH5_S 0

#define LEDC_LSCH5_CONF1 (DR_REG_LEDC_BASE + 0x0114)
#define LEDC_DUTY_START_LSCH5 (BIT(31))
#define LEDC_DUTY_START_LSCH5_S 31
#define LEDC_DUTY_INC_LSCH5 (BIT(30))
#define LEDC_DUTY_INC_LSCH5_S 30
#define LEDC_DUTY_NUM_LSCH5 0x000003FF
#define LEDC_DUTY_NUM_LSCH5_S 20
#define LEDC_DUTY_CYCLE_LSCH5 0x000003FF
#define LEDC_DUTY_CYCLE_LSCH5_S 10
#define LEDC_DUTY_SCALE_LSCH5 0x000003FF
#define LEDC_DUTY_SCALE_LSCH5_S 0

#define LEDC_LSCH5_DUTY_R (DR_REG_LEDC_BASE + 0x0118)
#define LEDC_DUTY_LSCH5 0x01FFFFFF
#define LEDC_DUTY_LSCH5_S 0

#define LEDC_LSCH6_CONF0 (DR_REG_LEDC_BASE + 0x011C)
#define LEDC_PARA_UP_LSCH6 (BIT(4))
#define LEDC_PARA_UP_LSCH6_S 4
#define LEDC_IDLE_LV_LSCH6 (BIT(3))
#define LEDC_IDLE_LV_LSCH6_S 3
#define LEDC_SIG_OUT_EN_LSCH6 (BIT(2))
#define LEDC_SIG_OUT_EN_LSCH6_S 2
#define LEDC_TIMER_SEL_LSCH6 0x00000003
#define LEDC_TIMER_SEL_LSCH6_S 0

#define LEDC_LSCH6_HPOINT (DR_REG_LEDC_BASE + 0x0120)
#define LEDC_HPOINT_LSCH6 0x000FFFFF
#define LEDC_HPOINT_LSCH6_S 0

#define LEDC_LSCH6_DUTY (DR_REG_LEDC_BASE + 0x0124)
#define LEDC_DUTY_LSCH6 0x01FFFFFF
#define LEDC_DUTY_LSCH6_S 0

#define LEDC_LSCH6_CONF1 (DR_REG_LEDC_BASE + 0x0128)
#define LEDC_DUTY_START_LSCH6 (BIT(31))
#define LEDC_DUTY_START_LSCH6_S 31
#define LEDC_DUTY_INC_LSCH6 (BIT(30))
#define LEDC_DUTY_INC_LSCH6_S 30
#define LEDC_DUTY_NUM_LSCH6 0x000003FF
#define LEDC_DUTY_NUM_LSCH6_S 20
#define LEDC_DUTY_CYCLE_LSCH6 0x000003FF
#define LEDC_DUTY_CYCLE_LSCH6_S 10
#define LEDC_DUTY_SCALE_LSCH6 0x000003FF
#define LEDC_DUTY_SCALE_LSCH6_S 0

#define LEDC_LSCH6_DUTY_R (DR_REG_LEDC_BASE + 0x012C)
#define LEDC_DUTY_LSCH6 0x01FFFFFF
#define LEDC_DUTY_LSCH6_S 0

#define LEDC_LSCH7_CONF0 (DR_REG_LEDC_BASE + 0x0130)
#define LEDC_PARA_UP_LSCH7 (BIT(4))
#define LEDC_PARA_UP_LSCH7_S 4
#define LEDC_IDLE_LV_LSCH7 (BIT(3))
#define LEDC_IDLE_LV_LSCH7_S 3
#define LEDC_SIG_OUT_EN_LSCH7 (BIT(2))
#define LEDC_SIG_OUT_EN_LSCH7_S 2
#define LEDC_TIMER_SEL_LSCH7 0x00000003
#define LEDC_TIMER_SEL_LSCH7_S 0

#define LEDC_LSCH7_HPOINT (DR_REG_LEDC_BASE + 0x0134)
#define LEDC_HPOINT_LSCH7 0x000FFFFF
#define LEDC_HPOINT_LSCH7_S 0

#define LEDC_LSCH7_DUTY (DR_REG_LEDC_BASE + 0x0138)
#define LEDC_DUTY_LSCH7 0x01FFFFFF
#define LEDC_DUTY_LSCH7_S 0

#define LEDC_LSCH7_CONF1 (DR_REG_LEDC_BASE + 0x013C)
#define LEDC_DUTY_START_LSCH7 (BIT(31))
#define LEDC_DUTY_START_LSCH7_S 31
#define LEDC_DUTY_INC_LSCH7 (BIT(30))
#define LEDC_DUTY_INC_LSCH7_S 30
#define LEDC_DUTY_NUM_LSCH7 0x000003FF
#define LEDC_DUTY_NUM_LSCH7_S 20
#define LEDC_DUTY_CYCLE_LSCH7 0x000003FF
#define LEDC_DUTY_CYCLE_LSCH7_S 10
#define LEDC_DUTY_SCALE_LSCH7 0x000003FF
#define LEDC_DUTY_SCALE_LSCH7_S 0

#define LEDC_LSCH7_DUTY_R (DR_REG_LEDC_BASE + 0x0140)
#define LEDC_DUTY_LSCH7 0x01FFFFFF
#define LEDC_DUTY_LSCH7_S 0

#define LEDC_HSTIMER0_CONF (DR_REG_LEDC_BASE + 0x0144)
#define LEDC_TICK_ALWAYS_ON_HSTIMER0 (BIT(25))
#define LEDC_TICK_ALWAYS_ON_HSTIMER0_S 25
#define LEDC_HSTIMER0_RST (BIT(24))
#define LEDC_HSTIMER0_RST_S 24
#define LEDC_HSTIMER0_PAUSE (BIT(23))
#define LEDC_HSTIMER0_PAUSE_S 23
#define LEDC_DIV_NUM_HSTIMER0 0x0003FFFF
#define LEDC_DIV_NUM_HSTIMER0_S 5
#define LEDC_HSTIMER0_LIM 0x0000001F
#define LEDC_HSTIMER0_LIM_S 0

#define LEDC_HSTIMER0_VALUE (DR_REG_LEDC_BASE + 0x0148)
#define LEDC_HSTIMER0_CNT 0x000FFFFF
#define LEDC_HSTIMER0_CNT_S 0

#define LEDC_HSTIMER1_CONF (DR_REG_LEDC_BASE + 0x014C)
#define LEDC_TICK_ALWAYS_ON_HSTIMER1 (BIT(25))
#define LEDC_TICK_ALWAYS_ON_HSTIMER1_S 25
#define LEDC_HSTIMER1_RST (BIT(24))
#define LEDC_HSTIMER1_RST_S 24
#define LEDC_HSTIMER1_PAUSE (BIT(23))
#define LEDC_HSTIMER1_PAUSE_S 23
#define LEDC_DIV_NUM_HSTIMER1 0x0003FFFF
#define LEDC_DIV_NUM_HSTIMER1_S 5
#define LEDC_HSTIMER1_LIM 0x0000001F
#define LEDC_HSTIMER1_LIM_S 0

#define LEDC_HSTIMER1_VALUE (DR_REG_LEDC_BASE + 0x0150)
#define LEDC_HSTIMER1_CNT 0x000FFFFF
#define LEDC_HSTIMER1_CNT_S 0

#define LEDC_HSTIMER2_CONF (DR_REG_LEDC_BASE + 0x0154)
#define LEDC_TICK_ALWAYS_ON_HSTIMER2 (BIT(25))
#define LEDC_TICK_ALWAYS_ON_HSTIMER2_S 25
#define LEDC_HSTIMER2_RST (BIT(24))
#define LEDC_HSTIMER2_RST_S 24
#define LEDC_HSTIMER2_PAUSE (BIT(23))
#define LEDC_HSTIMER2_PAUSE_S 23
#define LEDC_DIV_NUM_HSTIMER2 0x0003FFFF
#define LEDC_DIV_NUM_HSTIMER2_S 5
#define LEDC_HSTIMER2_LIM 0x0000001F
#define LEDC_HSTIMER2_LIM_S 0

#define LEDC_HSTIMER2_VALUE (DR_REG_LEDC_BASE + 0x0158)
#define LEDC_HSTIMER2_CNT 0x000FFFFF
#define LEDC_HSTIMER2_CNT_S 0

#define LEDC_HSTIMER3_CONF (DR_REG_LEDC_BASE + 0x015C)
#define LEDC_TICK_ALWAYS_ON_HSTIMER3 (BIT(25))
#define LEDC_TICK_ALWAYS_ON_HSTIMER3_S 25
#define LEDC_HSTIMER3_RST (BIT(24))
#define LEDC_HSTIMER3_RST_S 24
#define LEDC_HSTIMER3_PAUSE (BIT(23))
#define LEDC_HSTIMER3_PAUSE_S 23
#define LEDC_DIV_NUM_HSTIMER3 0x0003FFFF
#define LEDC_DIV_NUM_HSTIMER3_S 5
#define LEDC_HSTIMER3_LIM 0x0000001F
#define LEDC_HSTIMER3_LIM_S 0

#define LEDC_HSTIMER3_VALUE (DR_REG_LEDC_BASE + 0x0160)
#define LEDC_HSTIMER3_CNT 0x000FFFFF
#define LEDC_HSTIMER3_CNT_S 0

#define LEDC_LSTIMER0_CONF (DR_REG_LEDC_BASE + 0x0164)
#define LEDC_LSTIMER0_PARA_UP (BIT(26))
#define LEDC_LSTIMER0_PARA_UP_S 26
#define LEDC_TICK_ALWAYS_ON_LSTIMER0 (BIT(25))
#define LEDC_TICK_ALWAYS_ON_LSTIMER0_S 25
#define LEDC_LSTIMER0_RST (BIT(24))
#define LEDC_LSTIMER0_RST_S 24
#define LEDC_LSTIMER0_PAUSE (BIT(23))
#define LEDC_LSTIMER0_PAUSE_S 23
#define LEDC_DIV_NUM_LSTIMER0 0x0003FFFF
#define LEDC_DIV_NUM_LSTIMER0_S 5
#define LEDC_LSTIMER0_LIM 0x0000001F
#define LEDC_LSTIMER0_LIM_S 0

#define LEDC_LSTIMER0_VALUE (DR_REG_LEDC_BASE + 0x0168)
#define LEDC_LSTIMER0_CNT 0x000FFFFF
#define LEDC_LSTIMER0_CNT_S 0

#define LEDC_LSTIMER1_CONF (DR_REG_LEDC_BASE + 0x016C)
#define LEDC_LSTIMER1_PARA_UP (BIT(26))
#define LEDC_LSTIMER1_PARA_UP_S 26
#define LEDC_TICK_ALWAYS_ON_LSTIMER1 (BIT(25))
#define LEDC_TICK_ALWAYS_ON_LSTIMER1_S 25
#define LEDC_LSTIMER1_RST (BIT(24))
#define LEDC_LSTIMER1_RST_S 24
#define LEDC_LSTIMER1_PAUSE (BIT(23))
#define LEDC_LSTIMER1_PAUSE_S 23
#define LEDC_DIV_NUM_LSTIMER1 0x0003FFFF
#define LEDC_DIV_NUM_LSTIMER1_S 5
#define LEDC_LSTIMER1_LIM 0x0000001F
#define LEDC_LSTIMER1_LIM_S 0

#define LEDC_LSTIMER1_VALUE (DR_REG_LEDC_BASE + 0x0170)
#define LEDC_LSTIMER1_CNT 0x000FFFFF
#define LEDC_LSTIMER1_CNT_S 0

#define LEDC_LSTIMER2_CONF (DR_REG_LEDC_BASE + 0x0174)
#define LEDC_LSTIMER2_PARA_UP (BIT(26))
#define LEDC_LSTIMER2_PARA_UP_S 26
#define LEDC_TICK_ALWAYS_ON_LSTIMER2 (BIT(25))
#define LEDC_TICK_ALWAYS_ON_LSTIMER2_S 25
#define LEDC_LSTIMER2_RST (BIT(24))
#define LEDC_LSTIMER2_RST_S 24
#define LEDC_LSTIMER2_PAUSE (BIT(23))
#define LEDC_LSTIMER2_PAUSE_S 23
#define LEDC_DIV_NUM_LSTIMER2 0x0003FFFF
#define LEDC_DIV_NUM_LSTIMER2_S 5
#define LEDC_LSTIMER2_LIM 0x0000001F
#define LEDC_LSTIMER2_LIM_S 0

#define LEDC_LSTIMER2_VALUE (DR_REG_LEDC_BASE + 0x0178)
#define LEDC_LSTIMER2_CNT 0x000FFFFF
#define LEDC_LSTIMER2_CNT_S 0

#define LEDC_LSTIMER3_CONF (DR_REG_LEDC_BASE + 0x017C)
#define LEDC_LSTIMER3_PARA_UP (BIT(26))
#define LEDC_LSTIMER3_PARA_UP_S 26
#define LEDC_TICK_ALWAYS_ON_LSTIMER3 (BIT(25))
#define LEDC_TICK_ALWAYS_ON_LSTIMER3_S 25
#define LEDC_LSTIMER3_RST (BIT(24))
#define LEDC_LSTIMER3_RST_S 24
#define LEDC_LSTIMER3_PAUSE (BIT(23))
#define LEDC_LSTIMER3_PAUSE_S 23
#define LEDC_DIV_NUM_LSTIMER3 0x0003FFFF
#define LEDC_DIV_NUM_LSTIMER3_S 5
#define LEDC_LSTIMER3_LIM 0x0000001F
#define LEDC_LSTIMER3_LIM_S 0

#define LEDC_LSTIMER3_VALUE (DR_REG_LEDC_BASE + 0x0180)
#define LEDC_LSTIMER3_CNT 0x000FFFFF
#define LEDC_LSTIMER3_CNT_S 0

#define LEDC_INT_RAW (DR_REG_LEDC_BASE + 0x0184)
#define LEDC_DUTY_CHNG_END_LSCH7_INT_RAW (BIT(23))
#define LEDC_DUTY_CHNG_END_LSCH7_INT_RAW_S 23
#define LEDC_DUTY_CHNG_END_LSCH6_INT_RAW (BIT(22))
#define LEDC_DUTY_CHNG_END_LSCH6_INT_RAW_S 22
#define LEDC_DUTY_CHNG_END_LSCH5_INT_RAW (BIT(21))
#define LEDC_DUTY_CHNG_END_LSCH5_INT_RAW_S 21
#define LEDC_DUTY_CHNG_END_LSCH4_INT_RAW (BIT(20))
#define LEDC_DUTY_CHNG_END_LSCH4_INT_RAW_S 20
#define LEDC_DUTY_CHNG_END_LSCH3_INT_RAW (BIT(19))
#define LEDC_DUTY_CHNG_END_LSCH3_INT_RAW_S 19
#define LEDC_DUTY_CHNG_END_LSCH2_INT_RAW (BIT(18))
#define LEDC_DUTY_CHNG_END_LSCH2_INT_RAW_S 18
#define LEDC_DUTY_CHNG_END_LSCH1_INT_RAW (BIT(17))
#define LEDC_DUTY_CHNG_END_LSCH1_INT_RAW_S 17
#define LEDC_DUTY_CHNG_END_LSCH0_INT_RAW (BIT(16))
#define LEDC_DUTY_CHNG_END_LSCH0_INT_RAW_S 16
#define LEDC_DUTY_CHNG_END_HSCH7_INT_RAW (BIT(15))
#define LEDC_DUTY_CHNG_END_HSCH7_INT_RAW_S 15
#define LEDC_DUTY_CHNG_END_HSCH6_INT_RAW (BIT(14))
#define LEDC_DUTY_CHNG_END_HSCH6_INT_RAW_S 14
#define LEDC_DUTY_CHNG_END_HSCH5_INT_RAW (BIT(13))
#define LEDC_DUTY_CHNG_END_HSCH5_INT_RAW_S 13
#define LEDC_DUTY_CHNG_END_HSCH4_INT_RAW (BIT(12))
#define LEDC_DUTY_CHNG_END_HSCH4_INT_RAW_S 12
#define LEDC_DUTY_CHNG_END_HSCH3_INT_RAW (BIT(11))
#define LEDC_DUTY_CHNG_END_HSCH3_INT_RAW_S 11
#define LEDC_DUTY_CHNG_END_HSCH2_INT_RAW (BIT(10))
#define LEDC_DUTY_CHNG_END_HSCH2_INT_RAW_S 10
#define LEDC_DUTY_CHNG_END_HSCH1_INT_RAW (BIT(9))
#define LEDC_DUTY_CHNG_END_HSCH1_INT_RAW_S 9
#define LEDC_DUTY_CHNG_END_HSCH0_INT_RAW (BIT(8))
#define LEDC_DUTY_CHNG_END_HSCH0_INT_RAW_S 8
#define LEDC_LSTIMER3_OVF_INT_RAW (BIT(7))
#define LEDC_LSTIMER3_OVF_INT_RAW_S 7
#define LEDC_LSTIMER2_OVF_INT_RAW (BIT(6))
#define LEDC_LSTIMER2_OVF_INT_RAW_S 6
#define LEDC_LSTIMER1_OVF_INT_RAW (BIT(5))
#define LEDC_LSTIMER1_OVF_INT_RAW_S 5
#define LEDC_LSTIMER0_OVF_INT_RAW (BIT(4))
#define LEDC_LSTIMER0_OVF_INT_RAW_S 4
#define LEDC_HSTIMER3_OVF_INT_RAW (BIT(3))
#define LEDC_HSTIMER3_OVF_INT_RAW_S 3
#define LEDC_HSTIMER2_OVF_INT_RAW (BIT(2))
#define LEDC_HSTIMER2_OVF_INT_RAW_S 2
#define LEDC_HSTIMER1_OVF_INT_RAW (BIT(1))
#define LEDC_HSTIMER1_OVF_INT_RAW_S 1
#define LEDC_HSTIMER0_OVF_INT_RAW (BIT(0))
#define LEDC_HSTIMER0_OVF_INT_RAW_S 0

#define LEDC_INT_ST (DR_REG_LEDC_BASE + 0x018C)
#define LEDC_DUTY_CHNG_END_LSCH7_INT_ST (BIT(23))
#define LEDC_DUTY_CHNG_END_LSCH7_INT_ST_S 23
#define LEDC_DUTY_CHNG_END_LSCH6_INT_ST (BIT(22))
#define LEDC_DUTY_CHNG_END_LSCH6_INT_ST_S 22
#define LEDC_DUTY_CHNG_END_LSCH5_INT_ST (BIT(21))
#define LEDC_DUTY_CHNG_END_LSCH5_INT_ST_S 21
#define LEDC_DUTY_CHNG_END_LSCH4_INT_ST (BIT(20))
#define LEDC_DUTY_CHNG_END_LSCH4_INT_ST_S 20
#define LEDC_DUTY_CHNG_END_LSCH3_INT_ST (BIT(19))
#define LEDC_DUTY_CHNG_END_LSCH3_INT_ST_S 19
#define LEDC_DUTY_CHNG_END_LSCH2_INT_ST (BIT(18))
#define LEDC_DUTY_CHNG_END_LSCH2_INT_ST_S 18
#define LEDC_DUTY_CHNG_END_LSCH1_INT_ST (BIT(17))
#define LEDC_DUTY_CHNG_END_LSCH1_INT_ST_S 17
#define LEDC_DUTY_CHNG_END_LSCH0_INT_ST (BIT(16))
#define LEDC_DUTY_CHNG_END_LSCH0_INT_ST_S 16
#define LEDC_DUTY_CHNG_END_HSCH7_INT_ST (BIT(15))
#define LEDC_DUTY_CHNG_END_HSCH7_INT_ST_S 15
#define LEDC_DUTY_CHNG_END_HSCH6_INT_ST (BIT(14))
#define LEDC_DUTY_CHNG_END_HSCH6_INT_ST_S 14
#define LEDC_DUTY_CHNG_END_HSCH5_INT_ST (BIT(13))
#define LEDC_DUTY_CHNG_END_HSCH5_INT_ST_S 13
#define LEDC_DUTY_CHNG_END_HSCH4_INT_ST (BIT(12))
#define LEDC_DUTY_CHNG_END_HSCH4_INT_ST_S 12
#define LEDC_DUTY_CHNG_END_HSCH3_INT_ST (BIT(11))
#define LEDC_DUTY_CHNG_END_HSCH3_INT_ST_S 11
#define LEDC_DUTY_CHNG_END_HSCH2_INT_ST (BIT(10))
#define LEDC_DUTY_CHNG_END_HSCH2_INT_ST_S 10
#define LEDC_DUTY_CHNG_END_HSCH1_INT_ST (BIT(9))
#define LEDC_DUTY_CHNG_END_HSCH1_INT_ST_S 9
#define LEDC_DUTY_CHNG_END_HSCH0_INT_ST (BIT(8))
#define LEDC_DUTY_CHNG_END_HSCH0_INT_ST_S 8
#define LEDC_LSTIMER3_OVF_INT_ST (BIT(7))
#define LEDC_LSTIMER3_OVF_INT_ST_S 7
#define LEDC_LSTIMER2_OVF_INT_ST (BIT(6))
#define LEDC_LSTIMER2_OVF_INT_ST_S 6
#define LEDC_LSTIMER1_OVF_INT_ST (BIT(5))
#define LEDC_LSTIMER1_OVF_INT_ST_S 5
#define LEDC_LSTIMER0_OVF_INT_ST (BIT(4))
#define LEDC_LSTIMER0_OVF_INT_ST_S 4
#define LEDC_HSTIMER3_OVF_INT_ST (BIT(3))
#define LEDC_HSTIMER3_OVF_INT_ST_S 3
#define LEDC_HSTIMER2_OVF_INT_ST (BIT(2))
#define LEDC_HSTIMER2_OVF_INT_ST_S 2
#define LEDC_HSTIMER1_OVF_INT_ST (BIT(1))
#define LEDC_HSTIMER1_OVF_INT_ST_S 1
#define LEDC_HSTIMER0_OVF_INT_ST (BIT(0))
#define LEDC_HSTIMER0_OVF_INT_ST_S 0

#define LEDC_INT_ENA (DR_REG_LEDC_BASE + 0x0190)
#define LEDC_DUTY_CHNG_END_LSCH7_INT_ENA (BIT(23))
#define LEDC_DUTY_CHNG_END_LSCH7_INT_ENA_S 23
#define LEDC_DUTY_CHNG_END_LSCH6_INT_ENA (BIT(22))
#define LEDC_DUTY_CHNG_END_LSCH6_INT_ENA_S 22
#define LEDC_DUTY_CHNG_END_LSCH5_INT_ENA (BIT(21))
#define LEDC_DUTY_CHNG_END_LSCH5_INT_ENA_S 21
#define LEDC_DUTY_CHNG_END_LSCH4_INT_ENA (BIT(20))
#define LEDC_DUTY_CHNG_END_LSCH4_INT_ENA_S 20
#define LEDC_DUTY_CHNG_END_LSCH3_INT_ENA (BIT(19))
#define LEDC_DUTY_CHNG_END_LSCH3_INT_ENA_S 19
#define LEDC_DUTY_CHNG_END_LSCH2_INT_ENA (BIT(18))
#define LEDC_DUTY_CHNG_END_LSCH2_INT_ENA_S 18
#define LEDC_DUTY_CHNG_END_LSCH1_INT_ENA (BIT(17))
#define LEDC_DUTY_CHNG_END_LSCH1_INT_ENA_S 17
#define LEDC_DUTY_CHNG_END_LSCH0_INT_ENA (BIT(16))
#define LEDC_DUTY_CHNG_END_LSCH0_INT_ENA_S 16
#define LEDC_DUTY_CHNG_END_HSCH7_INT_ENA (BIT(15))
#define LEDC_DUTY_CHNG_END_HSCH7_INT_ENA_S 15
#define LEDC_DUTY_CHNG_END_HSCH6_INT_ENA (BIT(14))
#define LEDC_DUTY_CHNG_END_HSCH6_INT_ENA_S 14
#define LEDC_DUTY_CHNG_END_HSCH5_INT_ENA (BIT(13))
#define LEDC_DUTY_CHNG_END_HSCH5_INT_ENA_S 13
#define LEDC_DUTY_CHNG_END_HSCH4_INT_ENA (BIT(12))
#define LEDC_DUTY_CHNG_END_HSCH4_INT_ENA_S 12
#define LEDC_DUTY_CHNG_END_HSCH3_INT_ENA (BIT(11))
#define LEDC_DUTY_CHNG_END_HSCH3_INT_ENA_S 11
#define LEDC_DUTY_CHNG_END_HSCH2_INT_ENA (BIT(10))
#define LEDC_DUTY_CHNG_END_HSCH2_INT_ENA_S 10
#define LEDC_DUTY_CHNG_END_HSCH1_INT_ENA (BIT(9))
#define LEDC_DUTY_CHNG_END_HSCH1_INT_ENA_S 9
#define LEDC_DUTY_CHNG_END_HSCH0_INT_ENA (BIT(8))
#define LEDC_DUTY_CHNG_END_HSCH0_INT_ENA_S 8
#define LEDC_LSTIMER3_OVF_INT_ENA (BIT(7))
#define LEDC_LSTIMER3_OVF_INT_ENA_S 7
#define LEDC_LSTIMER2_OVF_INT_ENA (BIT(6))
#define LEDC_LSTIMER2_OVF_INT_ENA_S 6
#define LEDC_LSTIMER1_OVF_INT_ENA (BIT(5))
#define LEDC_LSTIMER1_OVF_INT_ENA_S 5
#define LEDC_LSTIMER0_OVF_INT_ENA (BIT(4))
#define LEDC_LSTIMER0_OVF_INT_ENA_S 4
#define LEDC_HSTIMER3_OVF_INT_ENA (BIT(3))
#define LEDC_HSTIMER3_OVF_INT_ENA_S 3
#define LEDC_HSTIMER2_OVF_INT_ENA (BIT(2))
#define LEDC_HSTIMER2_OVF_INT_ENA_S 2
#define LEDC_HSTIMER1_OVF_INT_ENA (BIT(1))
#define LEDC_HSTIMER1_OVF_INT_ENA_S 1
#define LEDC_HSTIMER0_OVF_INT_ENA (BIT(0))
#define LEDC_HSTIMER0_OVF_INT_ENA_S 0

#define LEDC_INT_CLR (DR_REG_LEDC_BASE + 0x0194)
#define LEDC_DUTY_CHNG_END_LSCH7_INT_CLR (BIT(23))
#define LEDC_DUTY_CHNG_END_LSCH7_INT_CLR_S 23
#define LEDC_DUTY_CHNG_END_LSCH6_INT_CLR (BIT(22))
#define LEDC_DUTY_CHNG_END_LSCH6_INT_CLR_S 22
#define LEDC_DUTY_CHNG_END_LSCH5_INT_CLR (BIT(21))
#define LEDC_DUTY_CHNG_END_LSCH5_INT_CLR_S 21
#define LEDC_DUTY_CHNG_END_LSCH4_INT_CLR (BIT(20))
#define LEDC_DUTY_CHNG_END_LSCH4_INT_CLR_S 20
#define LEDC_DUTY_CHNG_END_LSCH3_INT_CLR (BIT(19))
#define LEDC_DUTY_CHNG_END_LSCH3_INT_CLR_S 19
#define LEDC_DUTY_CHNG_END_LSCH2_INT_CLR (BIT(18))
#define LEDC_DUTY_CHNG_END_LSCH2_INT_CLR_S 18
#define LEDC_DUTY_CHNG_END_LSCH1_INT_CLR (BIT(17))
#define LEDC_DUTY_CHNG_END_LSCH1_INT_CLR_S 17
#define LEDC_DUTY_CHNG_END_LSCH0_INT_CLR (BIT(16))
#define LEDC_DUTY_CHNG_END_LSCH0_INT_CLR_S 16
#define LEDC_DUTY_CHNG_END_HSCH7_INT_CLR (BIT(15))
#define LEDC_DUTY_CHNG_END_HSCH7_INT_CLR_S 15
#define LEDC_DUTY_CHNG_END_HSCH6_INT_CLR (BIT(14))
#define LEDC_DUTY_CHNG_END_HSCH6_INT_CLR_S 14
#define LEDC_DUTY_CHNG_END_HSCH5_INT_CLR (BIT(13))
#define LEDC_DUTY_CHNG_END_HSCH5_INT_CLR_S 13
#define LEDC_DUTY_CHNG_END_HSCH4_INT_CLR (BIT(12))
#define LEDC_DUTY_CHNG_END_HSCH4_INT_CLR_S 12
#define LEDC_DUTY_CHNG_END_HSCH3_INT_CLR (BIT(11))
#define LEDC_DUTY_CHNG_END_HSCH3_INT_CLR_S 11
#define LEDC_DUTY_CHNG_END_HSCH2_INT_CLR (BIT(10))
#define LEDC_DUTY_CHNG_END_HSCH2_INT_CLR_S 10
#define LEDC_DUTY_CHNG_END_HSCH1_INT_CLR (BIT(9))
#define LEDC_DUTY_CHNG_END_HSCH1_INT_CLR_S 9
#define LEDC_DUTY_CHNG_END_HSCH0_INT_CLR (BIT(8))
#define LEDC_DUTY_CHNG_END_HSCH0_INT_CLR_S 8
#define LEDC_LSTIMER3_OVF_INT_CLR (BIT(7))
#define LEDC_LSTIMER3_OVF_INT_CLR_S 7
#define LEDC_LSTIMER2_OVF_INT_CLR (BIT(6))
#define LEDC_LSTIMER2_OVF_INT_CLR_S 6
#define LEDC_LSTIMER1_OVF_INT_CLR (BIT(5))
#define LEDC_LSTIMER1_OVF_INT_CLR_S 5
#define LEDC_LSTIMER0_OVF_INT_CLR (BIT(4))
#define LEDC_LSTIMER0_OVF_INT_CLR_S 4
#define LEDC_HSTIMER3_OVF_INT_CLR (BIT(3))
#define LEDC_HSTIMER3_OVF_INT_CLR_S 3
#define LEDC_HSTIMER2_OVF_INT_CLR (BIT(2))
#define LEDC_HSTIMER2_OVF_INT_CLR_S 2
#define LEDC_HSTIMER1_OVF_INT_CLR (BIT(1))
#define LEDC_HSTIMER1_OVF_INT_CLR_S 1
#define LEDC_HSTIMER0_OVF_INT_CLR (BIT(0))
#define LEDC_HSTIMER0_OVF_INT_CLR_S 0

#define LEDC_DATE (DR_REG_LEDC_BASE + 0x01FC)
#define LEDC_LEDC_DATE 0xFFFFFFFF
#define LEDC_LEDC_DATE_S 0
#define LEDC_LEDC_DATE_VERSION 0x15051900

#endif
