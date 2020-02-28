/**
 * \file
 *
 * \brief Instance description for AESA
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

#ifndef _SAM4L_AESA_INSTANCE_
#define _SAM4L_AESA_INSTANCE_

/* ========== Register definition for AESA peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_AESA_CTRL              (0x400B0000) /**< \brief (AESA) Control Register */
#define REG_AESA_MODE              (0x400B0004) /**< \brief (AESA) Mode Register */
#define REG_AESA_DATABUFPTR        (0x400B0008) /**< \brief (AESA) Data Buffer Pointer Register */
#define REG_AESA_SR                (0x400B000C) /**< \brief (AESA) Status Register */
#define REG_AESA_IER               (0x400B0010) /**< \brief (AESA) Interrupt Enable Register */
#define REG_AESA_IDR               (0x400B0014) /**< \brief (AESA) Interrupt Disable Register */
#define REG_AESA_IMR               (0x400B0018) /**< \brief (AESA) Interrupt Mask Register */
#define REG_AESA_KEY0              (0x400B0020) /**< \brief (AESA) Key Register 0 */
#define REG_AESA_KEY1              (0x400B0024) /**< \brief (AESA) Key Register 1 */
#define REG_AESA_KEY2              (0x400B0028) /**< \brief (AESA) Key Register 2 */
#define REG_AESA_KEY3              (0x400B002C) /**< \brief (AESA) Key Register 3 */
#define REG_AESA_KEY4              (0x400B0030) /**< \brief (AESA) Key Register 4 */
#define REG_AESA_KEY5              (0x400B0034) /**< \brief (AESA) Key Register 5 */
#define REG_AESA_KEY6              (0x400B0038) /**< \brief (AESA) Key Register 6 */
#define REG_AESA_KEY7              (0x400B003C) /**< \brief (AESA) Key Register 7 */
#define REG_AESA_INITVECT0         (0x400B0040) /**< \brief (AESA) Initialization Vector Register 0 */
#define REG_AESA_INITVECT1         (0x400B0044) /**< \brief (AESA) Initialization Vector Register 1 */
#define REG_AESA_INITVECT2         (0x400B0048) /**< \brief (AESA) Initialization Vector Register 2 */
#define REG_AESA_INITVECT3         (0x400B004C) /**< \brief (AESA) Initialization Vector Register 3 */
#define REG_AESA_IDATA             (0x400B0050) /**< \brief (AESA) Input Data Register */
#define REG_AESA_ODATA             (0x400B0060) /**< \brief (AESA) Output Data Register */
#define REG_AESA_DRNGSEED          (0x400B0070) /**< \brief (AESA) DRNG Seed Register */
#define REG_AESA_PARAMETER         (0x400B00F8) /**< \brief (AESA) Parameter Register */
#define REG_AESA_VERSION           (0x400B00FC) /**< \brief (AESA) Version Register */
#else
#define REG_AESA_CTRL              (*(RwReg  *)0x400B0000UL) /**< \brief (AESA) Control Register */
#define REG_AESA_MODE              (*(RwReg  *)0x400B0004UL) /**< \brief (AESA) Mode Register */
#define REG_AESA_DATABUFPTR        (*(RwReg  *)0x400B0008UL) /**< \brief (AESA) Data Buffer Pointer Register */
#define REG_AESA_SR                (*(RoReg  *)0x400B000CUL) /**< \brief (AESA) Status Register */
#define REG_AESA_IER               (*(WoReg  *)0x400B0010UL) /**< \brief (AESA) Interrupt Enable Register */
#define REG_AESA_IDR               (*(WoReg  *)0x400B0014UL) /**< \brief (AESA) Interrupt Disable Register */
#define REG_AESA_IMR               (*(RoReg  *)0x400B0018UL) /**< \brief (AESA) Interrupt Mask Register */
#define REG_AESA_KEY0              (*(WoReg  *)0x400B0020UL) /**< \brief (AESA) Key Register 0 */
#define REG_AESA_KEY1              (*(WoReg  *)0x400B0024UL) /**< \brief (AESA) Key Register 1 */
#define REG_AESA_KEY2              (*(WoReg  *)0x400B0028UL) /**< \brief (AESA) Key Register 2 */
#define REG_AESA_KEY3              (*(WoReg  *)0x400B002CUL) /**< \brief (AESA) Key Register 3 */
#define REG_AESA_KEY4              (*(WoReg  *)0x400B0030UL) /**< \brief (AESA) Key Register 4 */
#define REG_AESA_KEY5              (*(WoReg  *)0x400B0034UL) /**< \brief (AESA) Key Register 5 */
#define REG_AESA_KEY6              (*(WoReg  *)0x400B0038UL) /**< \brief (AESA) Key Register 6 */
#define REG_AESA_KEY7              (*(WoReg  *)0x400B003CUL) /**< \brief (AESA) Key Register 7 */
#define REG_AESA_INITVECT0         (*(WoReg  *)0x400B0040UL) /**< \brief (AESA) Initialization Vector Register 0 */
#define REG_AESA_INITVECT1         (*(WoReg  *)0x400B0044UL) /**< \brief (AESA) Initialization Vector Register 1 */
#define REG_AESA_INITVECT2         (*(WoReg  *)0x400B0048UL) /**< \brief (AESA) Initialization Vector Register 2 */
#define REG_AESA_INITVECT3         (*(WoReg  *)0x400B004CUL) /**< \brief (AESA) Initialization Vector Register 3 */
#define REG_AESA_IDATA             (*(WoReg  *)0x400B0050UL) /**< \brief (AESA) Input Data Register */
#define REG_AESA_ODATA             (*(RoReg  *)0x400B0060UL) /**< \brief (AESA) Output Data Register */
#define REG_AESA_DRNGSEED          (*(WoReg  *)0x400B0070UL) /**< \brief (AESA) DRNG Seed Register */
#define REG_AESA_PARAMETER         (*(RoReg  *)0x400B00F8UL) /**< \brief (AESA) Parameter Register */
#define REG_AESA_VERSION           (*(RoReg  *)0x400B00FCUL) /**< \brief (AESA) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for AESA peripheral ========== */
#define AESA_DMAC_ID_RX                     
#define AESA_DMAC_ID_TX                     
#define AESA_GCLK_NUM               4       
#define AESA_PDCA_ID_RX             17      
#define AESA_PDCA_ID_TX             36      

#endif /* _SAM4L_AESA_INSTANCE_ */
