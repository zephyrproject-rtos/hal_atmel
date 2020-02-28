/**
 * \file
 *
 * \brief Instance description for USART3
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

#ifndef _SAM4L_USART3_INSTANCE_
#define _SAM4L_USART3_INSTANCE_

/* ========== Register definition for USART3 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_USART3_CR              (0x40030000) /**< \brief (USART3) Control Register */
#define REG_USART3_MR              (0x40030004) /**< \brief (USART3) Mode Register */
#define REG_USART3_IER             (0x40030008) /**< \brief (USART3) Interrupt Enable Register */
#define REG_USART3_IDR             (0x4003000C) /**< \brief (USART3) Interrupt Disable Register */
#define REG_USART3_IMR             (0x40030010) /**< \brief (USART3) Interrupt Mask Register */
#define REG_USART3_CSR             (0x40030014) /**< \brief (USART3) Channel Status Register */
#define REG_USART3_RHR             (0x40030018) /**< \brief (USART3) Receiver Holding Register */
#define REG_USART3_THR             (0x4003001C) /**< \brief (USART3) Transmitter Holding Register */
#define REG_USART3_BRGR            (0x40030020) /**< \brief (USART3) Baud Rate Generator Register */
#define REG_USART3_RTOR            (0x40030024) /**< \brief (USART3) Receiver Time-out Register */
#define REG_USART3_TTGR            (0x40030028) /**< \brief (USART3) Transmitter Timeguard Register */
#define REG_USART3_FIDI            (0x40030040) /**< \brief (USART3) FI DI Ratio Register */
#define REG_USART3_NER             (0x40030044) /**< \brief (USART3) Number of Errors Register */
#define REG_USART3_IFR             (0x4003004C) /**< \brief (USART3) IrDA Filter Register */
#define REG_USART3_MAN             (0x40030050) /**< \brief (USART3) Manchester Configuration Register */
#define REG_USART3_LINMR           (0x40030054) /**< \brief (USART3) LIN Mode Register */
#define REG_USART3_LINIR           (0x40030058) /**< \brief (USART3) LIN Identifier Register */
#define REG_USART3_LINBRR          (0x4003005C) /**< \brief (USART3) LIN Baud Rate Register */
#define REG_USART3_WPMR            (0x400300E4) /**< \brief (USART3) Write Protect Mode Register */
#define REG_USART3_WPSR            (0x400300E8) /**< \brief (USART3) Write Protect Status Register */
#define REG_USART3_VERSION         (0x400300FC) /**< \brief (USART3) Version Register */
#else
#define REG_USART3_CR              (*(WoReg  *)0x40030000UL) /**< \brief (USART3) Control Register */
#define REG_USART3_MR              (*(RwReg  *)0x40030004UL) /**< \brief (USART3) Mode Register */
#define REG_USART3_IER             (*(WoReg  *)0x40030008UL) /**< \brief (USART3) Interrupt Enable Register */
#define REG_USART3_IDR             (*(WoReg  *)0x4003000CUL) /**< \brief (USART3) Interrupt Disable Register */
#define REG_USART3_IMR             (*(RoReg  *)0x40030010UL) /**< \brief (USART3) Interrupt Mask Register */
#define REG_USART3_CSR             (*(RoReg  *)0x40030014UL) /**< \brief (USART3) Channel Status Register */
#define REG_USART3_RHR             (*(RoReg  *)0x40030018UL) /**< \brief (USART3) Receiver Holding Register */
#define REG_USART3_THR             (*(WoReg  *)0x4003001CUL) /**< \brief (USART3) Transmitter Holding Register */
#define REG_USART3_BRGR            (*(RwReg  *)0x40030020UL) /**< \brief (USART3) Baud Rate Generator Register */
#define REG_USART3_RTOR            (*(RwReg  *)0x40030024UL) /**< \brief (USART3) Receiver Time-out Register */
#define REG_USART3_TTGR            (*(RwReg  *)0x40030028UL) /**< \brief (USART3) Transmitter Timeguard Register */
#define REG_USART3_FIDI            (*(RwReg  *)0x40030040UL) /**< \brief (USART3) FI DI Ratio Register */
#define REG_USART3_NER             (*(RoReg  *)0x40030044UL) /**< \brief (USART3) Number of Errors Register */
#define REG_USART3_IFR             (*(RwReg  *)0x4003004CUL) /**< \brief (USART3) IrDA Filter Register */
#define REG_USART3_MAN             (*(RwReg  *)0x40030050UL) /**< \brief (USART3) Manchester Configuration Register */
#define REG_USART3_LINMR           (*(RwReg  *)0x40030054UL) /**< \brief (USART3) LIN Mode Register */
#define REG_USART3_LINIR           (*(RwReg  *)0x40030058UL) /**< \brief (USART3) LIN Identifier Register */
#define REG_USART3_LINBRR          (*(RoReg  *)0x4003005CUL) /**< \brief (USART3) LIN Baud Rate Register */
#define REG_USART3_WPMR            (*(RwReg  *)0x400300E4UL) /**< \brief (USART3) Write Protect Mode Register */
#define REG_USART3_WPSR            (*(RoReg  *)0x400300E8UL) /**< \brief (USART3) Write Protect Status Register */
#define REG_USART3_VERSION         (*(RoReg  *)0x400300FCUL) /**< \brief (USART3) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for USART3 peripheral ========== */
#define USART3_CLK_DIV              8       
#define USART3_PDCA_ID_RX           3       
#define USART3_PDCA_ID_TX           21      

#endif /* _SAM4L_USART3_INSTANCE_ */
