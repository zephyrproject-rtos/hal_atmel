/**
 * \file
 *
 * \brief Instance description for FREQM
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAM4L_FREQM_INSTANCE_
#define _SAM4L_FREQM_INSTANCE_

/* ========== Register definition for FREQM peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_FREQM_CTRL             (0x400E0C00) /**< \brief (FREQM) Control register */
#define REG_FREQM_MODE             (0x400E0C04) /**< \brief (FREQM) Mode  register */
#define REG_FREQM_STATUS           (0x400E0C08) /**< \brief (FREQM) Status  register */
#define REG_FREQM_VALUE            (0x400E0C0C) /**< \brief (FREQM) Value register */
#define REG_FREQM_IER              (0x400E0C10) /**< \brief (FREQM) Interrupt Enable Register */
#define REG_FREQM_IDR              (0x400E0C14) /**< \brief (FREQM) Interrupt Diable Register */
#define REG_FREQM_IMR              (0x400E0C18) /**< \brief (FREQM) Interrupt Mask Register */
#define REG_FREQM_ISR              (0x400E0C1C) /**< \brief (FREQM) Interrupt Status Register */
#define REG_FREQM_ICR              (0x400E0C20) /**< \brief (FREQM) Interrupt Clear Register */
#define REG_FREQM_VERSION          (0x400E0FFC) /**< \brief (FREQM) Version Register */
#else
#define REG_FREQM_CTRL             (*(WoReg  *)0x400E0C00UL) /**< \brief (FREQM) Control register */
#define REG_FREQM_MODE             (*(RwReg  *)0x400E0C04UL) /**< \brief (FREQM) Mode  register */
#define REG_FREQM_STATUS           (*(RoReg  *)0x400E0C08UL) /**< \brief (FREQM) Status  register */
#define REG_FREQM_VALUE            (*(RoReg  *)0x400E0C0CUL) /**< \brief (FREQM) Value register */
#define REG_FREQM_IER              (*(WoReg  *)0x400E0C10UL) /**< \brief (FREQM) Interrupt Enable Register */
#define REG_FREQM_IDR              (*(WoReg  *)0x400E0C14UL) /**< \brief (FREQM) Interrupt Diable Register */
#define REG_FREQM_IMR              (*(RoReg  *)0x400E0C18UL) /**< \brief (FREQM) Interrupt Mask Register */
#define REG_FREQM_ISR              (*(RoReg  *)0x400E0C1CUL) /**< \brief (FREQM) Interrupt Status Register */
#define REG_FREQM_ICR              (*(WoReg  *)0x400E0C20UL) /**< \brief (FREQM) Interrupt Clear Register */
#define REG_FREQM_VERSION          (*(RoReg  *)0x400E0FFCUL) /**< \brief (FREQM) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for FREQM peripheral ========== */
#define FREQM_CPU                   0       
#define FREQM_CRIPOSC               10      
#define FREQM_DFLL0                 9       
#define FREQM_FLO_JITTER            27      
#define FREQM_GENCLK0               11      
#define FREQM_GENCLK1               12      
#define FREQM_GENCLK2               13      
#define FREQM_GENCLK3               14      
#define FREQM_GENCLK4               15      
#define FREQM_GENCLK5               16      
#define FREQM_GENCLK6               17      
#define FREQM_GENCLK7               18      
#define FREQM_GENCLK8               19      
#define FREQM_GENCLK9               20      
#define FREQM_GENCLK10              21      
#define FREQM_HSB                   1       
#define FREQM_NUM_CLK               28      
#define FREQM_NUM_REF_CLK           4       
#define FREQM_OSC0                  6       
#define FREQM_OSC32                 7       
#define FREQM_PBA                   2       
#define FREQM_PBB                   3       
#define FREQM_PBC                   4       
#define FREQM_PLL0                  26      
#define FREQM_RCFAST                24      
#define FREQM_RCOSC                 8       
#define FREQM_RC1M                  25      
#define FREQM_RC32K                 7       
#define FREQM_RC80M                 23      
#define FREQM_REFSEL_BITS           2       
#define FREQM_REF_OSC32             1       
#define FREQM_REF_RCOSC             0       

#endif /* _SAM4L_FREQM_INSTANCE_ */
