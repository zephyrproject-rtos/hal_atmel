/**
 * \file
 *
 * \brief Instance description for EIC
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

#ifndef _SAM4L_EIC_INSTANCE_
#define _SAM4L_EIC_INSTANCE_

/* ========== Register definition for EIC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_EIC_IER                (0x400F1000) /**< \brief (EIC) Interrupt Enable Register */
#define REG_EIC_IDR                (0x400F1004) /**< \brief (EIC) Interrupt Disable Register */
#define REG_EIC_IMR                (0x400F1008) /**< \brief (EIC) Interrupt Mask Register */
#define REG_EIC_ISR                (0x400F100C) /**< \brief (EIC) Interrupt Status Register */
#define REG_EIC_ICR                (0x400F1010) /**< \brief (EIC) Interrupt Clear Register */
#define REG_EIC_MODE               (0x400F1014) /**< \brief (EIC) Mode Register */
#define REG_EIC_EDGE               (0x400F1018) /**< \brief (EIC) Edge Register */
#define REG_EIC_LEVEL              (0x400F101C) /**< \brief (EIC) Level Register */
#define REG_EIC_FILTER             (0x400F1020) /**< \brief (EIC) Filter Register */
#define REG_EIC_ASYNC              (0x400F1028) /**< \brief (EIC) Asynchronous Register */
#define REG_EIC_EN                 (0x400F1030) /**< \brief (EIC) Enable Register */
#define REG_EIC_DIS                (0x400F1034) /**< \brief (EIC) Disable Register */
#define REG_EIC_CTRL               (0x400F1038) /**< \brief (EIC) Control Register */
#define REG_EIC_VERSION            (0x400F13FC) /**< \brief (EIC) Version Register */
#else
#define REG_EIC_IER                (*(WoReg  *)0x400F1000UL) /**< \brief (EIC) Interrupt Enable Register */
#define REG_EIC_IDR                (*(WoReg  *)0x400F1004UL) /**< \brief (EIC) Interrupt Disable Register */
#define REG_EIC_IMR                (*(RoReg  *)0x400F1008UL) /**< \brief (EIC) Interrupt Mask Register */
#define REG_EIC_ISR                (*(RoReg  *)0x400F100CUL) /**< \brief (EIC) Interrupt Status Register */
#define REG_EIC_ICR                (*(WoReg  *)0x400F1010UL) /**< \brief (EIC) Interrupt Clear Register */
#define REG_EIC_MODE               (*(RwReg  *)0x400F1014UL) /**< \brief (EIC) Mode Register */
#define REG_EIC_EDGE               (*(RwReg  *)0x400F1018UL) /**< \brief (EIC) Edge Register */
#define REG_EIC_LEVEL              (*(RwReg  *)0x400F101CUL) /**< \brief (EIC) Level Register */
#define REG_EIC_FILTER             (*(RwReg  *)0x400F1020UL) /**< \brief (EIC) Filter Register */
#define REG_EIC_ASYNC              (*(RwReg  *)0x400F1028UL) /**< \brief (EIC) Asynchronous Register */
#define REG_EIC_EN                 (*(WoReg  *)0x400F1030UL) /**< \brief (EIC) Enable Register */
#define REG_EIC_DIS                (*(WoReg  *)0x400F1034UL) /**< \brief (EIC) Disable Register */
#define REG_EIC_CTRL               (*(RoReg  *)0x400F1038UL) /**< \brief (EIC) Control Register */
#define REG_EIC_VERSION            (*(RoReg  *)0x400F13FCUL) /**< \brief (EIC) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for EIC peripheral ========== */
#define EIC_STD_NUM                 8       
#define EIC_EIC_EDGE_IRQ            0       
#define EIC_EIC_FALLING_EDGE        0       
#define EIC_EIC_FILTER_OFF          0       
#define EIC_EIC_FILTER_ON           1       
#define EIC_EIC_HIGH_LEVEL          1       
#define EIC_EIC_LEVEL_IRQ           1       
#define EIC_EIC_LOW_LEVEL           0       
#define EIC_EIC_RISING_EDGE         1       
#define EIC_EIC_SYNC                0       
#define EIC_EIC_USE_ASYNC           1       

#endif /* _SAM4L_EIC_INSTANCE_ */
