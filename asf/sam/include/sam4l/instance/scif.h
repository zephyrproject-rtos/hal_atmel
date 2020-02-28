/**
 * \file
 *
 * \brief Instance description for SCIF
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

#ifndef _SAM4L_SCIF_INSTANCE_
#define _SAM4L_SCIF_INSTANCE_

/* ========== Register definition for SCIF peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_SCIF_IER               (0x400E0800) /**< \brief (SCIF) Interrupt Enable Register */
#define REG_SCIF_IDR               (0x400E0804) /**< \brief (SCIF) Interrupt Disable Register */
#define REG_SCIF_IMR               (0x400E0808) /**< \brief (SCIF) Interrupt Mask Register */
#define REG_SCIF_ISR               (0x400E080C) /**< \brief (SCIF) Interrupt Status Register */
#define REG_SCIF_ICR               (0x400E0810) /**< \brief (SCIF) Interrupt Clear Register */
#define REG_SCIF_PCLKSR            (0x400E0814) /**< \brief (SCIF) Power and Clocks Status Register */
#define REG_SCIF_UNLOCK            (0x400E0818) /**< \brief (SCIF) Unlock Register */
#define REG_SCIF_CSCR              (0x400E081C) /**< \brief (SCIF) Chip Specific Configuration Register */
#define REG_SCIF_OSCCTRL0          (0x400E0820) /**< \brief (SCIF) Oscillator Control Register */
#define REG_SCIF_PLL               (0x400E0824) /**< \brief (SCIF) PLL0 Control Register */
#define REG_SCIF_DFLL0CONF         (0x400E0828) /**< \brief (SCIF) DFLL0 Config Register */
#define REG_SCIF_DFLL0VAL          (0x400E082C) /**< \brief (SCIF) DFLL Value Register */
#define REG_SCIF_DFLL0MUL          (0x400E0830) /**< \brief (SCIF) DFLL0 Multiplier Register */
#define REG_SCIF_DFLL0STEP         (0x400E0834) /**< \brief (SCIF) DFLL0 Step Register */
#define REG_SCIF_DFLL0SSG          (0x400E0838) /**< \brief (SCIF) DFLL0 Spread Spectrum Generator Control Register */
#define REG_SCIF_DFLL0RATIO        (0x400E083C) /**< \brief (SCIF) DFLL0 Ratio Registe */
#define REG_SCIF_DFLL0SYNC         (0x400E0840) /**< \brief (SCIF) DFLL0 Synchronization Register */
#define REG_SCIF_RCCR              (0x400E0844) /**< \brief (SCIF) System RC Oscillator Calibration Register */
#define REG_SCIF_RCFASTCFG         (0x400E0848) /**< \brief (SCIF) 4/8/12 MHz RC Oscillator Configuration Register */
#define REG_SCIF_RCFASTSR          (0x400E084C) /**< \brief (SCIF) 4/8/12 MHz RC Oscillator Status Register */
#define REG_SCIF_RC80MCR           (0x400E0850) /**< \brief (SCIF) 80 MHz RC Oscillator Register */
#define REG_SCIF_HRPCR             (0x400E0864) /**< \brief (SCIF) High Resolution Prescaler Control Register */
#define REG_SCIF_FPCR              (0x400E0868) /**< \brief (SCIF) Fractional Prescaler Control Register */
#define REG_SCIF_FPMUL             (0x400E086C) /**< \brief (SCIF) Fractional Prescaler Multiplier Register */
#define REG_SCIF_FPDIV             (0x400E0870) /**< \brief (SCIF) Fractional Prescaler DIVIDER Register */
#define REG_SCIF_GCCTRL0           (0x400E0874) /**< \brief (SCIF) Generic Clock Control 0 */
#define REG_SCIF_GCCTRL1           (0x400E0878) /**< \brief (SCIF) Generic Clock Control 1 */
#define REG_SCIF_GCCTRL2           (0x400E087C) /**< \brief (SCIF) Generic Clock Control 2 */
#define REG_SCIF_GCCTRL3           (0x400E0880) /**< \brief (SCIF) Generic Clock Control 3 */
#define REG_SCIF_GCCTRL4           (0x400E0884) /**< \brief (SCIF) Generic Clock Control 4 */
#define REG_SCIF_GCCTRL5           (0x400E0888) /**< \brief (SCIF) Generic Clock Control 5 */
#define REG_SCIF_GCCTRL6           (0x400E088C) /**< \brief (SCIF) Generic Clock Control 6 */
#define REG_SCIF_GCCTRL7           (0x400E0890) /**< \brief (SCIF) Generic Clock Control 7 */
#define REG_SCIF_GCCTRL8           (0x400E0894) /**< \brief (SCIF) Generic Clock Control 8 */
#define REG_SCIF_GCCTRL9           (0x400E0898) /**< \brief (SCIF) Generic Clock Control 9 */
#define REG_SCIF_GCCTRL10          (0x400E089C) /**< \brief (SCIF) Generic Clock Control 10 */
#define REG_SCIF_GCCTRL11          (0x400E08A0) /**< \brief (SCIF) Generic Clock Control 11 */
#define REG_SCIF_RCFASTVERSION     (0x400E0BD8) /**< \brief (SCIF) 4/8/12 MHz RC Oscillator Version Register */
#define REG_SCIF_GCLKPRESCVERSION  (0x400E0BDC) /**< \brief (SCIF) Generic Clock Prescaler Version Register */
#define REG_SCIF_PLLIFAVERSION     (0x400E0BE0) /**< \brief (SCIF) PLL Version Register */
#define REG_SCIF_OSCIFAVERSION     (0x400E0BE4) /**< \brief (SCIF) Oscillator 0 Version Register */
#define REG_SCIF_DFLLIFBVERSION    (0x400E0BE8) /**< \brief (SCIF) DFLL Version Register */
#define REG_SCIF_RCOSCIFAVERSION   (0x400E0BEC) /**< \brief (SCIF) System RC Oscillator Version Register */
#define REG_SCIF_FLOVERSION        (0x400E0BF0) /**< \brief (SCIF) Frequency Locked Oscillator Version Register */
#define REG_SCIF_RC80MVERSION      (0x400E0BF4) /**< \brief (SCIF) 80MHz RC Oscillator Version Register */
#define REG_SCIF_GCLKIFVERSION     (0x400E0BF8) /**< \brief (SCIF) Generic Clock Version Register */
#define REG_SCIF_VERSION           (0x400E0BFC) /**< \brief (SCIF) SCIF Version Register */
#else
#define REG_SCIF_IER               (*(WoReg  *)0x400E0800UL) /**< \brief (SCIF) Interrupt Enable Register */
#define REG_SCIF_IDR               (*(WoReg  *)0x400E0804UL) /**< \brief (SCIF) Interrupt Disable Register */
#define REG_SCIF_IMR               (*(RoReg  *)0x400E0808UL) /**< \brief (SCIF) Interrupt Mask Register */
#define REG_SCIF_ISR               (*(RoReg  *)0x400E080CUL) /**< \brief (SCIF) Interrupt Status Register */
#define REG_SCIF_ICR               (*(WoReg  *)0x400E0810UL) /**< \brief (SCIF) Interrupt Clear Register */
#define REG_SCIF_PCLKSR            (*(RoReg  *)0x400E0814UL) /**< \brief (SCIF) Power and Clocks Status Register */
#define REG_SCIF_UNLOCK            (*(WoReg  *)0x400E0818UL) /**< \brief (SCIF) Unlock Register */
#define REG_SCIF_CSCR              (*(RwReg  *)0x400E081CUL) /**< \brief (SCIF) Chip Specific Configuration Register */
#define REG_SCIF_OSCCTRL0          (*(RwReg  *)0x400E0820UL) /**< \brief (SCIF) Oscillator Control Register */
#define REG_SCIF_PLL               (*(RwReg  *)0x400E0824UL) /**< \brief (SCIF) PLL0 Control Register */
#define REG_SCIF_DFLL0CONF         (*(RwReg  *)0x400E0828UL) /**< \brief (SCIF) DFLL0 Config Register */
#define REG_SCIF_DFLL0VAL          (*(RwReg  *)0x400E082CUL) /**< \brief (SCIF) DFLL Value Register */
#define REG_SCIF_DFLL0MUL          (*(RwReg  *)0x400E0830UL) /**< \brief (SCIF) DFLL0 Multiplier Register */
#define REG_SCIF_DFLL0STEP         (*(RwReg  *)0x400E0834UL) /**< \brief (SCIF) DFLL0 Step Register */
#define REG_SCIF_DFLL0SSG          (*(RwReg  *)0x400E0838UL) /**< \brief (SCIF) DFLL0 Spread Spectrum Generator Control Register */
#define REG_SCIF_DFLL0RATIO        (*(RoReg  *)0x400E083CUL) /**< \brief (SCIF) DFLL0 Ratio Registe */
#define REG_SCIF_DFLL0SYNC         (*(WoReg  *)0x400E0840UL) /**< \brief (SCIF) DFLL0 Synchronization Register */
#define REG_SCIF_RCCR              (*(RwReg  *)0x400E0844UL) /**< \brief (SCIF) System RC Oscillator Calibration Register */
#define REG_SCIF_RCFASTCFG         (*(RwReg  *)0x400E0848UL) /**< \brief (SCIF) 4/8/12 MHz RC Oscillator Configuration Register */
#define REG_SCIF_RCFASTSR          (*(RwReg  *)0x400E084CUL) /**< \brief (SCIF) 4/8/12 MHz RC Oscillator Status Register */
#define REG_SCIF_RC80MCR           (*(RwReg  *)0x400E0850UL) /**< \brief (SCIF) 80 MHz RC Oscillator Register */
#define REG_SCIF_HRPCR             (*(RwReg  *)0x400E0864UL) /**< \brief (SCIF) High Resolution Prescaler Control Register */
#define REG_SCIF_FPCR              (*(RwReg  *)0x400E0868UL) /**< \brief (SCIF) Fractional Prescaler Control Register */
#define REG_SCIF_FPMUL             (*(RwReg  *)0x400E086CUL) /**< \brief (SCIF) Fractional Prescaler Multiplier Register */
#define REG_SCIF_FPDIV             (*(RwReg  *)0x400E0870UL) /**< \brief (SCIF) Fractional Prescaler DIVIDER Register */
#define REG_SCIF_GCCTRL0           (*(RwReg  *)0x400E0874UL) /**< \brief (SCIF) Generic Clock Control 0 */
#define REG_SCIF_GCCTRL1           (*(RwReg  *)0x400E0878UL) /**< \brief (SCIF) Generic Clock Control 1 */
#define REG_SCIF_GCCTRL2           (*(RwReg  *)0x400E087CUL) /**< \brief (SCIF) Generic Clock Control 2 */
#define REG_SCIF_GCCTRL3           (*(RwReg  *)0x400E0880UL) /**< \brief (SCIF) Generic Clock Control 3 */
#define REG_SCIF_GCCTRL4           (*(RwReg  *)0x400E0884UL) /**< \brief (SCIF) Generic Clock Control 4 */
#define REG_SCIF_GCCTRL5           (*(RwReg  *)0x400E0888UL) /**< \brief (SCIF) Generic Clock Control 5 */
#define REG_SCIF_GCCTRL6           (*(RwReg  *)0x400E088CUL) /**< \brief (SCIF) Generic Clock Control 6 */
#define REG_SCIF_GCCTRL7           (*(RwReg  *)0x400E0890UL) /**< \brief (SCIF) Generic Clock Control 7 */
#define REG_SCIF_GCCTRL8           (*(RwReg  *)0x400E0894UL) /**< \brief (SCIF) Generic Clock Control 8 */
#define REG_SCIF_GCCTRL9           (*(RwReg  *)0x400E0898UL) /**< \brief (SCIF) Generic Clock Control 9 */
#define REG_SCIF_GCCTRL10          (*(RwReg  *)0x400E089CUL) /**< \brief (SCIF) Generic Clock Control 10 */
#define REG_SCIF_GCCTRL11          (*(RwReg  *)0x400E08A0UL) /**< \brief (SCIF) Generic Clock Control 11 */
#define REG_SCIF_RCFASTVERSION     (*(RoReg  *)0x400E0BD8UL) /**< \brief (SCIF) 4/8/12 MHz RC Oscillator Version Register */
#define REG_SCIF_GCLKPRESCVERSION  (*(RoReg  *)0x400E0BDCUL) /**< \brief (SCIF) Generic Clock Prescaler Version Register */
#define REG_SCIF_PLLIFAVERSION     (*(RoReg  *)0x400E0BE0UL) /**< \brief (SCIF) PLL Version Register */
#define REG_SCIF_OSCIFAVERSION     (*(RoReg  *)0x400E0BE4UL) /**< \brief (SCIF) Oscillator 0 Version Register */
#define REG_SCIF_DFLLIFBVERSION    (*(RoReg  *)0x400E0BE8UL) /**< \brief (SCIF) DFLL Version Register */
#define REG_SCIF_RCOSCIFAVERSION   (*(RoReg  *)0x400E0BECUL) /**< \brief (SCIF) System RC Oscillator Version Register */
#define REG_SCIF_FLOVERSION        (*(RoReg  *)0x400E0BF0UL) /**< \brief (SCIF) Frequency Locked Oscillator Version Register */
#define REG_SCIF_RC80MVERSION      (*(RoReg  *)0x400E0BF4UL) /**< \brief (SCIF) 80MHz RC Oscillator Version Register */
#define REG_SCIF_GCLKIFVERSION     (*(RoReg  *)0x400E0BF8UL) /**< \brief (SCIF) Generic Clock Version Register */
#define REG_SCIF_VERSION           (*(RoReg  *)0x400E0BFCUL) /**< \brief (SCIF) SCIF Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for SCIF peripheral ========== */
#define SCIF_BOD33_IMPLEMENTED      0       
#define SCIF_BOD50_IMPLEMENTED      0       
#define SCIF_BR_NUM                 0       
#define SCIF_DFLL_CALIB_MSB         3       
#define SCIF_DFLL_COARSE_MSB        4       
#define SCIF_DFLL_FINE_MSB          7       
#define SCIF_DFLL_RANGE_MSB         1       
#define SCIF_GCLK_EXTCLK_MSB        3       
#define SCIF_GCLK_IN_MSB            1       
#define SCIF_GCLK_IN_NUM            2       
#define SCIF_GCLK_MSB               10      
#define SCIF_GCLK_NUM               12      
#define SCIF_GCLK_NUM_DFLL_REF      0       
#define SCIF_GCLK_NUM_DFLL_SSG      1       
#define SCIF_GCLK_NUM_EXTCLK_0      0
#define SCIF_GCLK_NUM_EXTCLK_1      1
#define SCIF_GCLK_NUM_EXTCLK_2      2
#define SCIF_GCLK_NUM_EXTCLK_3      3
#define SCIF_GCLK_NUM_EXTCLK_LSB    0
#define SCIF_GCLK_NUM_EXTCLK_MSB    3
#define SCIF_GCLK_NUM_EXTCLK_SIZE   4
#define SCIF_GCLK_NUM_FLO           4       
#define SCIF_GCLK_NUM_MASTER        11      
#define SCIF_GCLK_NUM_PLL           9       
#define SCIF_GCLK_NUM_RC32KIFB_REF  5       
#define SCIF_GC_USES_CLK_CPU        7       
#define SCIF_GC_USES_CLK_HSB        8       
#define SCIF_GC_USES_CLK_PBA        9       
#define SCIF_GC_USES_CLK_PBB        10      
#define SCIF_GC_USES_CLK_PBC        11      
#define SCIF_GC_USES_CLK_PBD        12      
#define SCIF_GC_USES_CLK_SLOW       0       
#define SCIF_GC_USES_CLK_1K         15      
#define SCIF_GC_USES_CLK_32         1       
#define SCIF_GC_USES_DFLL0          2       
#define SCIF_GC_USES_FLO            14      
#define SCIF_GC_USES_GCLKPRESC_FP   18      
#define SCIF_GC_USES_GCLKPRESC_HRP  17      
#define SCIF_GC_USES_GCLK_IN0       19      
#define SCIF_GC_USES_GCLK_IN1       20      
#define SCIF_GC_USES_MASTER         21      
#define SCIF_GC_USES_OSC0           3       
#define SCIF_GC_USES_PLL0           16      
#define SCIF_GC_USES_RCFAST         5       
#define SCIF_GC_USES_RC1M           6       
#define SCIF_GC_USES_RC32K          13      
#define SCIF_GC_USES_RC80M          4       
#define SCIF_OSC_NUM                1       
#define SCIF_PLL_NUM                1       
#define SCIF_RCFAST_CALIBRATION_MSB 6       
#define SCIF_RCFAST_FRANGE_MSB      1       
#define SCIF_RCOSC_FREQUENCY        115200  
#define SCIF_RC80M_CALIBRATION_MSB  1       
#define SCIF_BOD_OFF                0       
#define SCIF_BOD_ON                 1       
#define SCIF_BOD_ON_NORESET         2       
#define SCIF_GC_DIV_CLOCK           1       
#define SCIF_GC_NO_DIV_CLOCK        0       

#endif /* _SAM4L_SCIF_INSTANCE_ */
