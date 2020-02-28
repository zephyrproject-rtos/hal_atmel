/**
 * \file
 *
 * \brief Instance description for ABDACB
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

#ifndef _SAM4L_ABDACB_INSTANCE_
#define _SAM4L_ABDACB_INSTANCE_

/* ========== Register definition for ABDACB peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_ABDACB_CR              (0x40064000) /**< \brief (ABDACB) Control Register */
#define REG_ABDACB_SDR0            (0x40064004) /**< \brief (ABDACB) Sample Data Register 0 */
#define REG_ABDACB_SDR1            (0x40064008) /**< \brief (ABDACB) Sample Data Register 1 */
#define REG_ABDACB_VCR0            (0x4006400C) /**< \brief (ABDACB) Volume Control Register 0 */
#define REG_ABDACB_VCR1            (0x40064010) /**< \brief (ABDACB) Volume Control Register 1 */
#define REG_ABDACB_IER             (0x40064014) /**< \brief (ABDACB) Interrupt Enable Register */
#define REG_ABDACB_IDR             (0x40064018) /**< \brief (ABDACB) Interupt Disable Register */
#define REG_ABDACB_IMR             (0x4006401C) /**< \brief (ABDACB) Interrupt Mask Register */
#define REG_ABDACB_SR              (0x40064020) /**< \brief (ABDACB) Status Register */
#define REG_ABDACB_SCR             (0x40064024) /**< \brief (ABDACB) Status Clear Register */
#define REG_ABDACB_PARAMETER       (0x40064028) /**< \brief (ABDACB) Parameter Register */
#define REG_ABDACB_VERSION         (0x4006402C) /**< \brief (ABDACB) Version Register */
#else
#define REG_ABDACB_CR              (*(RwReg  *)0x40064000UL) /**< \brief (ABDACB) Control Register */
#define REG_ABDACB_SDR0            (*(RwReg  *)0x40064004UL) /**< \brief (ABDACB) Sample Data Register 0 */
#define REG_ABDACB_SDR1            (*(RwReg  *)0x40064008UL) /**< \brief (ABDACB) Sample Data Register 1 */
#define REG_ABDACB_VCR0            (*(RwReg  *)0x4006400CUL) /**< \brief (ABDACB) Volume Control Register 0 */
#define REG_ABDACB_VCR1            (*(RwReg  *)0x40064010UL) /**< \brief (ABDACB) Volume Control Register 1 */
#define REG_ABDACB_IER             (*(WoReg  *)0x40064014UL) /**< \brief (ABDACB) Interrupt Enable Register */
#define REG_ABDACB_IDR             (*(WoReg  *)0x40064018UL) /**< \brief (ABDACB) Interupt Disable Register */
#define REG_ABDACB_IMR             (*(RoReg  *)0x4006401CUL) /**< \brief (ABDACB) Interrupt Mask Register */
#define REG_ABDACB_SR              (*(RoReg  *)0x40064020UL) /**< \brief (ABDACB) Status Register */
#define REG_ABDACB_SCR             (*(WoReg  *)0x40064024UL) /**< \brief (ABDACB) Status Clear Register */
#define REG_ABDACB_PARAMETER       (*(RoReg  *)0x40064028UL) /**< \brief (ABDACB) Parameter Register */
#define REG_ABDACB_VERSION         (*(RoReg  *)0x4006402CUL) /**< \brief (ABDACB) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for ABDACB peripheral ========== */
#define ABDACB_GCLK_NUM             6       
#define ABDACB_PDCA_ID_TX_CH0       31      
#define ABDACB_PDCA_ID_TX_CH1       32      

#endif /* _SAM4L_ABDACB_INSTANCE_ */
