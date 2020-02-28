/**
 * \file
 *
 * \brief Instance description for USART0
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

#ifndef _SAM4L_USART0_INSTANCE_
#define _SAM4L_USART0_INSTANCE_

/* ========== Register definition for USART0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_USART0_CR              (0x40024000) /**< \brief (USART0) Control Register */
#define REG_USART0_MR              (0x40024004) /**< \brief (USART0) Mode Register */
#define REG_USART0_IER             (0x40024008) /**< \brief (USART0) Interrupt Enable Register */
#define REG_USART0_IDR             (0x4002400C) /**< \brief (USART0) Interrupt Disable Register */
#define REG_USART0_IMR             (0x40024010) /**< \brief (USART0) Interrupt Mask Register */
#define REG_USART0_CSR             (0x40024014) /**< \brief (USART0) Channel Status Register */
#define REG_USART0_RHR             (0x40024018) /**< \brief (USART0) Receiver Holding Register */
#define REG_USART0_THR             (0x4002401C) /**< \brief (USART0) Transmitter Holding Register */
#define REG_USART0_BRGR            (0x40024020) /**< \brief (USART0) Baud Rate Generator Register */
#define REG_USART0_RTOR            (0x40024024) /**< \brief (USART0) Receiver Time-out Register */
#define REG_USART0_TTGR            (0x40024028) /**< \brief (USART0) Transmitter Timeguard Register */
#define REG_USART0_FIDI            (0x40024040) /**< \brief (USART0) FI DI Ratio Register */
#define REG_USART0_NER             (0x40024044) /**< \brief (USART0) Number of Errors Register */
#define REG_USART0_IFR             (0x4002404C) /**< \brief (USART0) IrDA Filter Register */
#define REG_USART0_MAN             (0x40024050) /**< \brief (USART0) Manchester Configuration Register */
#define REG_USART0_LINMR           (0x40024054) /**< \brief (USART0) LIN Mode Register */
#define REG_USART0_LINIR           (0x40024058) /**< \brief (USART0) LIN Identifier Register */
#define REG_USART0_LINBRR          (0x4002405C) /**< \brief (USART0) LIN Baud Rate Register */
#define REG_USART0_WPMR            (0x400240E4) /**< \brief (USART0) Write Protect Mode Register */
#define REG_USART0_WPSR            (0x400240E8) /**< \brief (USART0) Write Protect Status Register */
#define REG_USART0_VERSION         (0x400240FC) /**< \brief (USART0) Version Register */
#else
#define REG_USART0_CR              (*(WoReg  *)0x40024000UL) /**< \brief (USART0) Control Register */
#define REG_USART0_MR              (*(RwReg  *)0x40024004UL) /**< \brief (USART0) Mode Register */
#define REG_USART0_IER             (*(WoReg  *)0x40024008UL) /**< \brief (USART0) Interrupt Enable Register */
#define REG_USART0_IDR             (*(WoReg  *)0x4002400CUL) /**< \brief (USART0) Interrupt Disable Register */
#define REG_USART0_IMR             (*(RoReg  *)0x40024010UL) /**< \brief (USART0) Interrupt Mask Register */
#define REG_USART0_CSR             (*(RoReg  *)0x40024014UL) /**< \brief (USART0) Channel Status Register */
#define REG_USART0_RHR             (*(RoReg  *)0x40024018UL) /**< \brief (USART0) Receiver Holding Register */
#define REG_USART0_THR             (*(WoReg  *)0x4002401CUL) /**< \brief (USART0) Transmitter Holding Register */
#define REG_USART0_BRGR            (*(RwReg  *)0x40024020UL) /**< \brief (USART0) Baud Rate Generator Register */
#define REG_USART0_RTOR            (*(RwReg  *)0x40024024UL) /**< \brief (USART0) Receiver Time-out Register */
#define REG_USART0_TTGR            (*(RwReg  *)0x40024028UL) /**< \brief (USART0) Transmitter Timeguard Register */
#define REG_USART0_FIDI            (*(RwReg  *)0x40024040UL) /**< \brief (USART0) FI DI Ratio Register */
#define REG_USART0_NER             (*(RoReg  *)0x40024044UL) /**< \brief (USART0) Number of Errors Register */
#define REG_USART0_IFR             (*(RwReg  *)0x4002404CUL) /**< \brief (USART0) IrDA Filter Register */
#define REG_USART0_MAN             (*(RwReg  *)0x40024050UL) /**< \brief (USART0) Manchester Configuration Register */
#define REG_USART0_LINMR           (*(RwReg  *)0x40024054UL) /**< \brief (USART0) LIN Mode Register */
#define REG_USART0_LINIR           (*(RwReg  *)0x40024058UL) /**< \brief (USART0) LIN Identifier Register */
#define REG_USART0_LINBRR          (*(RoReg  *)0x4002405CUL) /**< \brief (USART0) LIN Baud Rate Register */
#define REG_USART0_WPMR            (*(RwReg  *)0x400240E4UL) /**< \brief (USART0) Write Protect Mode Register */
#define REG_USART0_WPSR            (*(RoReg  *)0x400240E8UL) /**< \brief (USART0) Write Protect Status Register */
#define REG_USART0_VERSION         (*(RoReg  *)0x400240FCUL) /**< \brief (USART0) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for USART0 peripheral ========== */
#define USART0_CLK_DIV              8       
#define USART0_PDCA_ID_RX           0       
#define USART0_PDCA_ID_TX           18      

#endif /* _SAM4L_USART0_INSTANCE_ */
