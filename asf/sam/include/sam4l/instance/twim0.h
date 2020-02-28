/**
 * \file
 *
 * \brief Instance description for TWIM0
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

#ifndef _SAM4L_TWIM0_INSTANCE_
#define _SAM4L_TWIM0_INSTANCE_

/* ========== Register definition for TWIM0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TWIM0_CR               (0x40018000) /**< \brief (TWIM0) Control Register */
#define REG_TWIM0_CWGR             (0x40018004) /**< \brief (TWIM0) Clock Waveform Generator Register */
#define REG_TWIM0_SMBTR            (0x40018008) /**< \brief (TWIM0) SMBus Timing Register */
#define REG_TWIM0_CMDR             (0x4001800C) /**< \brief (TWIM0) Command Register */
#define REG_TWIM0_NCMDR            (0x40018010) /**< \brief (TWIM0) Next Command Register */
#define REG_TWIM0_RHR              (0x40018014) /**< \brief (TWIM0) Receive Holding Register */
#define REG_TWIM0_THR              (0x40018018) /**< \brief (TWIM0) Transmit Holding Register */
#define REG_TWIM0_SR               (0x4001801C) /**< \brief (TWIM0) Status Register */
#define REG_TWIM0_IER              (0x40018020) /**< \brief (TWIM0) Interrupt Enable Register */
#define REG_TWIM0_IDR              (0x40018024) /**< \brief (TWIM0) Interrupt Disable Register */
#define REG_TWIM0_IMR              (0x40018028) /**< \brief (TWIM0) Interrupt Mask Register */
#define REG_TWIM0_SCR              (0x4001802C) /**< \brief (TWIM0) Status Clear Register */
#define REG_TWIM0_PR               (0x40018030) /**< \brief (TWIM0) Parameter Register */
#define REG_TWIM0_VR               (0x40018034) /**< \brief (TWIM0) Version Register */
#define REG_TWIM0_HSCWGR           (0x40018038) /**< \brief (TWIM0) HS-mode Clock Waveform Generator */
#define REG_TWIM0_SRR              (0x4001803C) /**< \brief (TWIM0) Slew Rate Register */
#define REG_TWIM0_HSSRR            (0x40018040) /**< \brief (TWIM0) HS-mode Slew Rate Register */
#else
#define REG_TWIM0_CR               (*(WoReg  *)0x40018000UL) /**< \brief (TWIM0) Control Register */
#define REG_TWIM0_CWGR             (*(RwReg  *)0x40018004UL) /**< \brief (TWIM0) Clock Waveform Generator Register */
#define REG_TWIM0_SMBTR            (*(RwReg  *)0x40018008UL) /**< \brief (TWIM0) SMBus Timing Register */
#define REG_TWIM0_CMDR             (*(RwReg  *)0x4001800CUL) /**< \brief (TWIM0) Command Register */
#define REG_TWIM0_NCMDR            (*(RwReg  *)0x40018010UL) /**< \brief (TWIM0) Next Command Register */
#define REG_TWIM0_RHR              (*(RoReg  *)0x40018014UL) /**< \brief (TWIM0) Receive Holding Register */
#define REG_TWIM0_THR              (*(WoReg  *)0x40018018UL) /**< \brief (TWIM0) Transmit Holding Register */
#define REG_TWIM0_SR               (*(RoReg  *)0x4001801CUL) /**< \brief (TWIM0) Status Register */
#define REG_TWIM0_IER              (*(WoReg  *)0x40018020UL) /**< \brief (TWIM0) Interrupt Enable Register */
#define REG_TWIM0_IDR              (*(WoReg  *)0x40018024UL) /**< \brief (TWIM0) Interrupt Disable Register */
#define REG_TWIM0_IMR              (*(RoReg  *)0x40018028UL) /**< \brief (TWIM0) Interrupt Mask Register */
#define REG_TWIM0_SCR              (*(WoReg  *)0x4001802CUL) /**< \brief (TWIM0) Status Clear Register */
#define REG_TWIM0_PR               (*(RoReg  *)0x40018030UL) /**< \brief (TWIM0) Parameter Register */
#define REG_TWIM0_VR               (*(RoReg  *)0x40018034UL) /**< \brief (TWIM0) Version Register */
#define REG_TWIM0_HSCWGR           (*(RwReg  *)0x40018038UL) /**< \brief (TWIM0) HS-mode Clock Waveform Generator */
#define REG_TWIM0_SRR              (*(RwReg  *)0x4001803CUL) /**< \brief (TWIM0) Slew Rate Register */
#define REG_TWIM0_HSSRR            (*(RwReg  *)0x40018040UL) /**< \brief (TWIM0) HS-mode Slew Rate Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TWIM0 peripheral ========== */
#define TWIM0_PDCA_ID_RX            5       
#define TWIM0_PDCA_ID_TX            23      

#endif /* _SAM4L_TWIM0_INSTANCE_ */
