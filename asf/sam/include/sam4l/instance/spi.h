/**
 * \file
 *
 * \brief Instance description for SPI
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

#ifndef _SAM4L_SPI_INSTANCE_
#define _SAM4L_SPI_INSTANCE_

/* ========== Register definition for SPI peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_SPI_CR                 (0x40008000) /**< \brief (SPI) Control Register */
#define REG_SPI_MR                 (0x40008004) /**< \brief (SPI) Mode Register */
#define REG_SPI_RDR                (0x40008008) /**< \brief (SPI) Receive Data Register */
#define REG_SPI_TDR                (0x4000800C) /**< \brief (SPI) Transmit Data Register */
#define REG_SPI_SR                 (0x40008010) /**< \brief (SPI) Status Register */
#define REG_SPI_IER                (0x40008014) /**< \brief (SPI) Interrupt Enable Register */
#define REG_SPI_IDR                (0x40008018) /**< \brief (SPI) Interrupt Disable Register */
#define REG_SPI_IMR                (0x4000801C) /**< \brief (SPI) Interrupt Mask Register */
#define REG_SPI_CSR0               (0x40008030) /**< \brief (SPI) Chip Select Register 0 */
#define REG_SPI_CSR1               (0x40008034) /**< \brief (SPI) Chip Select Register 1 */
#define REG_SPI_CSR2               (0x40008038) /**< \brief (SPI) Chip Select Register 2 */
#define REG_SPI_CSR3               (0x4000803C) /**< \brief (SPI) Chip Select Register 3 */
#define REG_SPI_WPCR               (0x400080E4) /**< \brief (SPI) Write Protection control Register */
#define REG_SPI_WPSR               (0x400080E8) /**< \brief (SPI) Write Protection status Register */
#define REG_SPI_FEATURES           (0x400080F8) /**< \brief (SPI) Features Register */
#define REG_SPI_VERSION            (0x400080FC) /**< \brief (SPI) Version Register */
#else
#define REG_SPI_CR                 (*(WoReg  *)0x40008000UL) /**< \brief (SPI) Control Register */
#define REG_SPI_MR                 (*(RwReg  *)0x40008004UL) /**< \brief (SPI) Mode Register */
#define REG_SPI_RDR                (*(RoReg  *)0x40008008UL) /**< \brief (SPI) Receive Data Register */
#define REG_SPI_TDR                (*(WoReg  *)0x4000800CUL) /**< \brief (SPI) Transmit Data Register */
#define REG_SPI_SR                 (*(RoReg  *)0x40008010UL) /**< \brief (SPI) Status Register */
#define REG_SPI_IER                (*(WoReg  *)0x40008014UL) /**< \brief (SPI) Interrupt Enable Register */
#define REG_SPI_IDR                (*(WoReg  *)0x40008018UL) /**< \brief (SPI) Interrupt Disable Register */
#define REG_SPI_IMR                (*(RoReg  *)0x4000801CUL) /**< \brief (SPI) Interrupt Mask Register */
#define REG_SPI_CSR0               (*(RwReg  *)0x40008030UL) /**< \brief (SPI) Chip Select Register 0 */
#define REG_SPI_CSR1               (*(RwReg  *)0x40008034UL) /**< \brief (SPI) Chip Select Register 1 */
#define REG_SPI_CSR2               (*(RwReg  *)0x40008038UL) /**< \brief (SPI) Chip Select Register 2 */
#define REG_SPI_CSR3               (*(RwReg  *)0x4000803CUL) /**< \brief (SPI) Chip Select Register 3 */
#define REG_SPI_WPCR               (*(RwReg  *)0x400080E4UL) /**< \brief (SPI) Write Protection control Register */
#define REG_SPI_WPSR               (*(RoReg  *)0x400080E8UL) /**< \brief (SPI) Write Protection status Register */
#define REG_SPI_FEATURES           (*(RoReg  *)0x400080F8UL) /**< \brief (SPI) Features Register */
#define REG_SPI_VERSION            (*(RoReg  *)0x400080FCUL) /**< \brief (SPI) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for SPI peripheral ========== */
#define SPI_CS_MSB                  3       
#define SPI_PDCA_ID_RX              4       
#define SPI_PDCA_ID_TX              22      

#endif /* _SAM4L_SPI_INSTANCE_ */
