/**
 * \file
 *
 * \brief Instance description for USART2
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

#ifndef _SAM4L_USART2_INSTANCE_
#define _SAM4L_USART2_INSTANCE_

/* ========== Register definition for USART2 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_USART2_CR              (0x4002C000) /**< \brief (USART2) Control Register */
#define REG_USART2_MR              (0x4002C004) /**< \brief (USART2) Mode Register */
#define REG_USART2_IER             (0x4002C008) /**< \brief (USART2) Interrupt Enable Register */
#define REG_USART2_IDR             (0x4002C00C) /**< \brief (USART2) Interrupt Disable Register */
#define REG_USART2_IMR             (0x4002C010) /**< \brief (USART2) Interrupt Mask Register */
#define REG_USART2_CSR             (0x4002C014) /**< \brief (USART2) Channel Status Register */
#define REG_USART2_RHR             (0x4002C018) /**< \brief (USART2) Receiver Holding Register */
#define REG_USART2_THR             (0x4002C01C) /**< \brief (USART2) Transmitter Holding Register */
#define REG_USART2_BRGR            (0x4002C020) /**< \brief (USART2) Baud Rate Generator Register */
#define REG_USART2_RTOR            (0x4002C024) /**< \brief (USART2) Receiver Time-out Register */
#define REG_USART2_TTGR            (0x4002C028) /**< \brief (USART2) Transmitter Timeguard Register */
#define REG_USART2_FIDI            (0x4002C040) /**< \brief (USART2) FI DI Ratio Register */
#define REG_USART2_NER             (0x4002C044) /**< \brief (USART2) Number of Errors Register */
#define REG_USART2_IFR             (0x4002C04C) /**< \brief (USART2) IrDA Filter Register */
#define REG_USART2_MAN             (0x4002C050) /**< \brief (USART2) Manchester Configuration Register */
#define REG_USART2_LINMR           (0x4002C054) /**< \brief (USART2) LIN Mode Register */
#define REG_USART2_LINIR           (0x4002C058) /**< \brief (USART2) LIN Identifier Register */
#define REG_USART2_LINBRR          (0x4002C05C) /**< \brief (USART2) LIN Baud Rate Register */
#define REG_USART2_WPMR            (0x4002C0E4) /**< \brief (USART2) Write Protect Mode Register */
#define REG_USART2_WPSR            (0x4002C0E8) /**< \brief (USART2) Write Protect Status Register */
#define REG_USART2_VERSION         (0x4002C0FC) /**< \brief (USART2) Version Register */
#else
#define REG_USART2_CR              (*(WoReg  *)0x4002C000UL) /**< \brief (USART2) Control Register */
#define REG_USART2_MR              (*(RwReg  *)0x4002C004UL) /**< \brief (USART2) Mode Register */
#define REG_USART2_IER             (*(WoReg  *)0x4002C008UL) /**< \brief (USART2) Interrupt Enable Register */
#define REG_USART2_IDR             (*(WoReg  *)0x4002C00CUL) /**< \brief (USART2) Interrupt Disable Register */
#define REG_USART2_IMR             (*(RoReg  *)0x4002C010UL) /**< \brief (USART2) Interrupt Mask Register */
#define REG_USART2_CSR             (*(RoReg  *)0x4002C014UL) /**< \brief (USART2) Channel Status Register */
#define REG_USART2_RHR             (*(RoReg  *)0x4002C018UL) /**< \brief (USART2) Receiver Holding Register */
#define REG_USART2_THR             (*(WoReg  *)0x4002C01CUL) /**< \brief (USART2) Transmitter Holding Register */
#define REG_USART2_BRGR            (*(RwReg  *)0x4002C020UL) /**< \brief (USART2) Baud Rate Generator Register */
#define REG_USART2_RTOR            (*(RwReg  *)0x4002C024UL) /**< \brief (USART2) Receiver Time-out Register */
#define REG_USART2_TTGR            (*(RwReg  *)0x4002C028UL) /**< \brief (USART2) Transmitter Timeguard Register */
#define REG_USART2_FIDI            (*(RwReg  *)0x4002C040UL) /**< \brief (USART2) FI DI Ratio Register */
#define REG_USART2_NER             (*(RoReg  *)0x4002C044UL) /**< \brief (USART2) Number of Errors Register */
#define REG_USART2_IFR             (*(RwReg  *)0x4002C04CUL) /**< \brief (USART2) IrDA Filter Register */
#define REG_USART2_MAN             (*(RwReg  *)0x4002C050UL) /**< \brief (USART2) Manchester Configuration Register */
#define REG_USART2_LINMR           (*(RwReg  *)0x4002C054UL) /**< \brief (USART2) LIN Mode Register */
#define REG_USART2_LINIR           (*(RwReg  *)0x4002C058UL) /**< \brief (USART2) LIN Identifier Register */
#define REG_USART2_LINBRR          (*(RoReg  *)0x4002C05CUL) /**< \brief (USART2) LIN Baud Rate Register */
#define REG_USART2_WPMR            (*(RwReg  *)0x4002C0E4UL) /**< \brief (USART2) Write Protect Mode Register */
#define REG_USART2_WPSR            (*(RoReg  *)0x4002C0E8UL) /**< \brief (USART2) Write Protect Status Register */
#define REG_USART2_VERSION         (*(RoReg  *)0x4002C0FCUL) /**< \brief (USART2) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for USART2 peripheral ========== */
#define USART2_CLK_DIV              8       
#define USART2_PDCA_ID_RX           2       
#define USART2_PDCA_ID_TX           20      

#endif /* _SAM4L_USART2_INSTANCE_ */
