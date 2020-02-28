/**
 * \file
 *
 * \brief Instance description for BSCIF
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

#ifndef _SAM4L_BSCIF_INSTANCE_
#define _SAM4L_BSCIF_INSTANCE_

/* ========== Register definition for BSCIF peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_BSCIF_IER              (0x400F0400) /**< \brief (BSCIF) Interrupt Enable Register */
#define REG_BSCIF_IDR              (0x400F0404) /**< \brief (BSCIF) Interrupt Disable Register */
#define REG_BSCIF_IMR              (0x400F0408) /**< \brief (BSCIF) Interrupt Mask Register */
#define REG_BSCIF_ISR              (0x400F040C) /**< \brief (BSCIF) Interrupt Status Register */
#define REG_BSCIF_ICR              (0x400F0410) /**< \brief (BSCIF) Interrupt Clear Register */
#define REG_BSCIF_PCLKSR           (0x400F0414) /**< \brief (BSCIF) Power and Clocks Status Register */
#define REG_BSCIF_UNLOCK           (0x400F0418) /**< \brief (BSCIF) Unlock Register */
#define REG_BSCIF_CSCR             (0x400F041C) /**< \brief (BSCIF) Chip Specific Configuration Register */
#define REG_BSCIF_OSCCTRL32        (0x400F0420) /**< \brief (BSCIF) Oscillator 32 Control Register */
#define REG_BSCIF_RC32KCR          (0x400F0424) /**< \brief (BSCIF) 32 kHz RC Oscillator Control Register */
#define REG_BSCIF_RC32KTUNE        (0x400F0428) /**< \brief (BSCIF) 32kHz RC Oscillator Tuning Register */
#define REG_BSCIF_BOD33CTRL        (0x400F042C) /**< \brief (BSCIF) BOD33 Control Register */
#define REG_BSCIF_BOD33LEVEL       (0x400F0430) /**< \brief (BSCIF) BOD33 Level Register */
#define REG_BSCIF_BOD33SAMPLING    (0x400F0434) /**< \brief (BSCIF) BOD33 Sampling Control Register */
#define REG_BSCIF_BOD18CTRL        (0x400F0438) /**< \brief (BSCIF) BOD18 Control Register */
#define REG_BSCIF_BOD18LEVEL       (0x400F043C) /**< \brief (BSCIF) BOD18 Level Register */
#define REG_BSCIF_VREGCR           (0x400F0444) /**< \brief (BSCIF) Voltage Regulator Configuration Register */
#define REG_BSCIF_VREGNCSR         (0x400F044C) /**< \brief (BSCIF) Normal Mode Control and Status Register */
#define REG_BSCIF_VREGLPCSR        (0x400F0450) /**< \brief (BSCIF) LP Mode Control and Status Register */
#define REG_BSCIF_RC1MCR           (0x400F0458) /**< \brief (BSCIF) 1MHz RC Clock Configuration Register */
#define REG_BSCIF_BGCR             (0x400F045C) /**< \brief (BSCIF) Bandgap Calibration Register */
#define REG_BSCIF_BGCTRL           (0x400F0460) /**< \brief (BSCIF) Bandgap Control Register */
#define REG_BSCIF_BGSR             (0x400F0464) /**< \brief (BSCIF) Bandgap Status Register */
#define REG_BSCIF_BR0              (0x400F0478) /**< \brief (BSCIF) Backup Register 0 */
#define REG_BSCIF_BR1              (0x400F047C) /**< \brief (BSCIF) Backup Register 1 */
#define REG_BSCIF_BR2              (0x400F0480) /**< \brief (BSCIF) Backup Register 2 */
#define REG_BSCIF_BR3              (0x400F0484) /**< \brief (BSCIF) Backup Register 3 */
#define REG_BSCIF_BRIFBVERSION     (0x400F07E4) /**< \brief (BSCIF) Backup Register Interface Version Register */
#define REG_BSCIF_BGREFIFBVERSION  (0x400F07E8) /**< \brief (BSCIF) BGREFIFB Version Register */
#define REG_BSCIF_VREGIFGVERSION   (0x400F07EC) /**< \brief (BSCIF) VREGIFA Version Register */
#define REG_BSCIF_BODIFCVERSION    (0x400F07F0) /**< \brief (BSCIF) BODIFC Version Register */
#define REG_BSCIF_RC32KIFBVERSION  (0x400F07F4) /**< \brief (BSCIF) 32 kHz RC Oscillator Version Register */
#define REG_BSCIF_OSC32IFAVERSION  (0x400F07F8) /**< \brief (BSCIF) 32 KHz Oscillator Version Register */
#define REG_BSCIF_VERSION          (0x400F07FC) /**< \brief (BSCIF) BSCIF Version Register */
#else
#define REG_BSCIF_IER              (*(WoReg  *)0x400F0400UL) /**< \brief (BSCIF) Interrupt Enable Register */
#define REG_BSCIF_IDR              (*(WoReg  *)0x400F0404UL) /**< \brief (BSCIF) Interrupt Disable Register */
#define REG_BSCIF_IMR              (*(RoReg  *)0x400F0408UL) /**< \brief (BSCIF) Interrupt Mask Register */
#define REG_BSCIF_ISR              (*(RoReg  *)0x400F040CUL) /**< \brief (BSCIF) Interrupt Status Register */
#define REG_BSCIF_ICR              (*(WoReg  *)0x400F0410UL) /**< \brief (BSCIF) Interrupt Clear Register */
#define REG_BSCIF_PCLKSR           (*(RoReg  *)0x400F0414UL) /**< \brief (BSCIF) Power and Clocks Status Register */
#define REG_BSCIF_UNLOCK           (*(WoReg  *)0x400F0418UL) /**< \brief (BSCIF) Unlock Register */
#define REG_BSCIF_CSCR             (*(RwReg  *)0x400F041CUL) /**< \brief (BSCIF) Chip Specific Configuration Register */
#define REG_BSCIF_OSCCTRL32        (*(RwReg  *)0x400F0420UL) /**< \brief (BSCIF) Oscillator 32 Control Register */
#define REG_BSCIF_RC32KCR          (*(RwReg  *)0x400F0424UL) /**< \brief (BSCIF) 32 kHz RC Oscillator Control Register */
#define REG_BSCIF_RC32KTUNE        (*(RwReg  *)0x400F0428UL) /**< \brief (BSCIF) 32kHz RC Oscillator Tuning Register */
#define REG_BSCIF_BOD33CTRL        (*(RwReg  *)0x400F042CUL) /**< \brief (BSCIF) BOD33 Control Register */
#define REG_BSCIF_BOD33LEVEL       (*(RwReg  *)0x400F0430UL) /**< \brief (BSCIF) BOD33 Level Register */
#define REG_BSCIF_BOD33SAMPLING    (*(RwReg  *)0x400F0434UL) /**< \brief (BSCIF) BOD33 Sampling Control Register */
#define REG_BSCIF_BOD18CTRL        (*(RwReg  *)0x400F0438UL) /**< \brief (BSCIF) BOD18 Control Register */
#define REG_BSCIF_BOD18LEVEL       (*(RwReg  *)0x400F043CUL) /**< \brief (BSCIF) BOD18 Level Register */
#define REG_BSCIF_VREGCR           (*(RwReg  *)0x400F0444UL) /**< \brief (BSCIF) Voltage Regulator Configuration Register */
#define REG_BSCIF_VREGNCSR         (*(RwReg  *)0x400F044CUL) /**< \brief (BSCIF) Normal Mode Control and Status Register */
#define REG_BSCIF_VREGLPCSR        (*(RwReg  *)0x400F0450UL) /**< \brief (BSCIF) LP Mode Control and Status Register */
#define REG_BSCIF_RC1MCR           (*(RwReg  *)0x400F0458UL) /**< \brief (BSCIF) 1MHz RC Clock Configuration Register */
#define REG_BSCIF_BGCR             (*(RwReg  *)0x400F045CUL) /**< \brief (BSCIF) Bandgap Calibration Register */
#define REG_BSCIF_BGCTRL           (*(RwReg  *)0x400F0460UL) /**< \brief (BSCIF) Bandgap Control Register */
#define REG_BSCIF_BGSR             (*(RoReg  *)0x400F0464UL) /**< \brief (BSCIF) Bandgap Status Register */
#define REG_BSCIF_BR0              (*(RwReg  *)0x400F0478UL) /**< \brief (BSCIF) Backup Register 0 */
#define REG_BSCIF_BR1              (*(RwReg  *)0x400F047CUL) /**< \brief (BSCIF) Backup Register 1 */
#define REG_BSCIF_BR2              (*(RwReg  *)0x400F0480UL) /**< \brief (BSCIF) Backup Register 2 */
#define REG_BSCIF_BR3              (*(RwReg  *)0x400F0484UL) /**< \brief (BSCIF) Backup Register 3 */
#define REG_BSCIF_BRIFBVERSION     (*(RoReg  *)0x400F07E4UL) /**< \brief (BSCIF) Backup Register Interface Version Register */
#define REG_BSCIF_BGREFIFBVERSION  (*(RoReg  *)0x400F07E8UL) /**< \brief (BSCIF) BGREFIFB Version Register */
#define REG_BSCIF_VREGIFGVERSION   (*(RoReg  *)0x400F07ECUL) /**< \brief (BSCIF) VREGIFA Version Register */
#define REG_BSCIF_BODIFCVERSION    (*(RoReg  *)0x400F07F0UL) /**< \brief (BSCIF) BODIFC Version Register */
#define REG_BSCIF_RC32KIFBVERSION  (*(RoReg  *)0x400F07F4UL) /**< \brief (BSCIF) 32 kHz RC Oscillator Version Register */
#define REG_BSCIF_OSC32IFAVERSION  (*(RoReg  *)0x400F07F8UL) /**< \brief (BSCIF) 32 KHz Oscillator Version Register */
#define REG_BSCIF_VERSION          (*(RoReg  *)0x400F07FCUL) /**< \brief (BSCIF) BSCIF Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for BSCIF peripheral ========== */
#define BSCIF_BGBUF_NUM             6       
#define BSCIF_BOD18_IMPLEMENTED     0       
#define BSCIF_BOD33_IMPLEMENTED     0       
#define BSCIF_BOD50_IMPLEMENTED     0       
#define BSCIF_BR_NUM                4       
#define BSCIF_BOD_OFF               0       
#define BSCIF_BOD_ON                1       
#define BSCIF_BOD_ON_NORESET        2       
#define BSCIF_GC_DIV_CLOCK          1       
#define BSCIF_GC_NO_DIV_CLOCK       0       

#endif /* _SAM4L_BSCIF_INSTANCE_ */
