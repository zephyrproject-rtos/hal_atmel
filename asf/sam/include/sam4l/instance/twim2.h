/**
 * \file
 *
 * \brief Instance description for TWIM2
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

#ifndef _SAM4L_TWIM2_INSTANCE_
#define _SAM4L_TWIM2_INSTANCE_

/* ========== Register definition for TWIM2 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TWIM2_CR               (0x40078000) /**< \brief (TWIM2) Control Register */
#define REG_TWIM2_CWGR             (0x40078004) /**< \brief (TWIM2) Clock Waveform Generator Register */
#define REG_TWIM2_SMBTR            (0x40078008) /**< \brief (TWIM2) SMBus Timing Register */
#define REG_TWIM2_CMDR             (0x4007800C) /**< \brief (TWIM2) Command Register */
#define REG_TWIM2_NCMDR            (0x40078010) /**< \brief (TWIM2) Next Command Register */
#define REG_TWIM2_RHR              (0x40078014) /**< \brief (TWIM2) Receive Holding Register */
#define REG_TWIM2_THR              (0x40078018) /**< \brief (TWIM2) Transmit Holding Register */
#define REG_TWIM2_SR               (0x4007801C) /**< \brief (TWIM2) Status Register */
#define REG_TWIM2_IER              (0x40078020) /**< \brief (TWIM2) Interrupt Enable Register */
#define REG_TWIM2_IDR              (0x40078024) /**< \brief (TWIM2) Interrupt Disable Register */
#define REG_TWIM2_IMR              (0x40078028) /**< \brief (TWIM2) Interrupt Mask Register */
#define REG_TWIM2_SCR              (0x4007802C) /**< \brief (TWIM2) Status Clear Register */
#define REG_TWIM2_PR               (0x40078030) /**< \brief (TWIM2) Parameter Register */
#define REG_TWIM2_VR               (0x40078034) /**< \brief (TWIM2) Version Register */
#define REG_TWIM2_HSCWGR           (0x40078038) /**< \brief (TWIM2) HS-mode Clock Waveform Generator */
#define REG_TWIM2_SRR              (0x4007803C) /**< \brief (TWIM2) Slew Rate Register */
#define REG_TWIM2_HSSRR            (0x40078040) /**< \brief (TWIM2) HS-mode Slew Rate Register */
#else
#define REG_TWIM2_CR               (*(WoReg  *)0x40078000UL) /**< \brief (TWIM2) Control Register */
#define REG_TWIM2_CWGR             (*(RwReg  *)0x40078004UL) /**< \brief (TWIM2) Clock Waveform Generator Register */
#define REG_TWIM2_SMBTR            (*(RwReg  *)0x40078008UL) /**< \brief (TWIM2) SMBus Timing Register */
#define REG_TWIM2_CMDR             (*(RwReg  *)0x4007800CUL) /**< \brief (TWIM2) Command Register */
#define REG_TWIM2_NCMDR            (*(RwReg  *)0x40078010UL) /**< \brief (TWIM2) Next Command Register */
#define REG_TWIM2_RHR              (*(RoReg  *)0x40078014UL) /**< \brief (TWIM2) Receive Holding Register */
#define REG_TWIM2_THR              (*(WoReg  *)0x40078018UL) /**< \brief (TWIM2) Transmit Holding Register */
#define REG_TWIM2_SR               (*(RoReg  *)0x4007801CUL) /**< \brief (TWIM2) Status Register */
#define REG_TWIM2_IER              (*(WoReg  *)0x40078020UL) /**< \brief (TWIM2) Interrupt Enable Register */
#define REG_TWIM2_IDR              (*(WoReg  *)0x40078024UL) /**< \brief (TWIM2) Interrupt Disable Register */
#define REG_TWIM2_IMR              (*(RoReg  *)0x40078028UL) /**< \brief (TWIM2) Interrupt Mask Register */
#define REG_TWIM2_SCR              (*(WoReg  *)0x4007802CUL) /**< \brief (TWIM2) Status Clear Register */
#define REG_TWIM2_PR               (*(RoReg  *)0x40078030UL) /**< \brief (TWIM2) Parameter Register */
#define REG_TWIM2_VR               (*(RoReg  *)0x40078034UL) /**< \brief (TWIM2) Version Register */
#define REG_TWIM2_HSCWGR           (*(RwReg  *)0x40078038UL) /**< \brief (TWIM2) HS-mode Clock Waveform Generator */
#define REG_TWIM2_SRR              (*(RwReg  *)0x4007803CUL) /**< \brief (TWIM2) Slew Rate Register */
#define REG_TWIM2_HSSRR            (*(RwReg  *)0x40078040UL) /**< \brief (TWIM2) HS-mode Slew Rate Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TWIM2 peripheral ========== */
#define TWIM2_PDCA_ID_RX            7       
#define TWIM2_PDCA_ID_TX            25      

#endif /* _SAM4L_TWIM2_INSTANCE_ */
