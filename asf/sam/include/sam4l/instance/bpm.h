/**
 * \file
 *
 * \brief Instance description for BPM
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

#ifndef _SAM4L_BPM_INSTANCE_
#define _SAM4L_BPM_INSTANCE_

/* ========== Register definition for BPM peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_BPM_IER                (0x400F0000) /**< \brief (BPM) Interrupt Enable Register */
#define REG_BPM_IDR                (0x400F0004) /**< \brief (BPM) Interrupt Disable Register */
#define REG_BPM_IMR                (0x400F0008) /**< \brief (BPM) Interrupt Mask Register */
#define REG_BPM_ISR                (0x400F000C) /**< \brief (BPM) Interrupt Status Register */
#define REG_BPM_ICR                (0x400F0010) /**< \brief (BPM) Interrupt Clear Register */
#define REG_BPM_SR                 (0x400F0014) /**< \brief (BPM) Status Register */
#define REG_BPM_UNLOCK             (0x400F0018) /**< \brief (BPM) Unlock Register */
#define REG_BPM_PMCON              (0x400F001C) /**< \brief (BPM) Power Mode Control Register */
#define REG_BPM_BKUPWCAUSE         (0x400F0028) /**< \brief (BPM) Backup Wake up Cause Register */
#define REG_BPM_BKUPWEN            (0x400F002C) /**< \brief (BPM) Backup Wake up Enable Register */
#define REG_BPM_BKUPPMUX           (0x400F0030) /**< \brief (BPM) Backup Pin Muxing Register */
#define REG_BPM_IORET              (0x400F0034) /**< \brief (BPM) Input Output Retention Register */
#define REG_BPM_BPR                (0x400F0040) /**< \brief (BPM) Bypass Register */
#define REG_BPM_FWRUNPS            (0x400F0044) /**< \brief (BPM) Factory Word Run PS Register */
#define REG_BPM_FWPSAVEPS          (0x400F0048) /**< \brief (BPM) Factory Word Power Save PS Register */
#define REG_BPM_VERSION            (0x400F00FC) /**< \brief (BPM) Version Register */
#else
#define REG_BPM_IER                (*(WoReg  *)0x400F0000UL) /**< \brief (BPM) Interrupt Enable Register */
#define REG_BPM_IDR                (*(WoReg  *)0x400F0004UL) /**< \brief (BPM) Interrupt Disable Register */
#define REG_BPM_IMR                (*(RoReg  *)0x400F0008UL) /**< \brief (BPM) Interrupt Mask Register */
#define REG_BPM_ISR                (*(RoReg  *)0x400F000CUL) /**< \brief (BPM) Interrupt Status Register */
#define REG_BPM_ICR                (*(WoReg  *)0x400F0010UL) /**< \brief (BPM) Interrupt Clear Register */
#define REG_BPM_SR                 (*(RoReg  *)0x400F0014UL) /**< \brief (BPM) Status Register */
#define REG_BPM_UNLOCK             (*(WoReg  *)0x400F0018UL) /**< \brief (BPM) Unlock Register */
#define REG_BPM_PMCON              (*(RwReg  *)0x400F001CUL) /**< \brief (BPM) Power Mode Control Register */
#define REG_BPM_BKUPWCAUSE         (*(RoReg  *)0x400F0028UL) /**< \brief (BPM) Backup Wake up Cause Register */
#define REG_BPM_BKUPWEN            (*(RwReg  *)0x400F002CUL) /**< \brief (BPM) Backup Wake up Enable Register */
#define REG_BPM_BKUPPMUX           (*(RwReg  *)0x400F0030UL) /**< \brief (BPM) Backup Pin Muxing Register */
#define REG_BPM_IORET              (*(RwReg  *)0x400F0034UL) /**< \brief (BPM) Input Output Retention Register */
#define REG_BPM_BPR                (*(RwReg  *)0x400F0040UL) /**< \brief (BPM) Bypass Register */
#define REG_BPM_FWRUNPS            (*(RoReg  *)0x400F0044UL) /**< \brief (BPM) Factory Word Run PS Register */
#define REG_BPM_FWPSAVEPS          (*(RoReg  *)0x400F0048UL) /**< \brief (BPM) Factory Word Power Save PS Register */
#define REG_BPM_VERSION            (*(RoReg  *)0x400F00FCUL) /**< \brief (BPM) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for BPM peripheral ========== */
#define BPM_BKUPPMUX_MSB            9       
#define BPM_BKUPWEN_AST             1       
#define BPM_BKUPWEN_BOD18           4       
#define BPM_BKUPWEN_BOD33           3       
#define BPM_BKUPWEN_EIC             0       
#define BPM_BKUPWEN_MSB             5       
#define BPM_BKUPWEN_PICOUART        5       
#define BPM_BKUPWEN_WDT             2       

#endif /* _SAM4L_BPM_INSTANCE_ */
