/**
 * \file
 *
 * \brief Instance description for ADCIFE
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

#ifndef _SAM4L_ADCIFE_INSTANCE_
#define _SAM4L_ADCIFE_INSTANCE_

/* ========== Register definition for ADCIFE peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_ADCIFE_CR              (0x40038000) /**< \brief (ADCIFE) Control Register */
#define REG_ADCIFE_CFG             (0x40038004) /**< \brief (ADCIFE) Configuration Register */
#define REG_ADCIFE_SR              (0x40038008) /**< \brief (ADCIFE) Status Register */
#define REG_ADCIFE_SCR             (0x4003800C) /**< \brief (ADCIFE) Status Clear Register */
#define REG_ADCIFE_RTS             (0x40038010) /**< \brief (ADCIFE) Resistive Touch Screen Register */
#define REG_ADCIFE_SEQCFG          (0x40038014) /**< \brief (ADCIFE) Sequencer Configuration Register */
#define REG_ADCIFE_CDMA            (0x40038018) /**< \brief (ADCIFE) Configuration Direct Memory Access Register */
#define REG_ADCIFE_TIM             (0x4003801C) /**< \brief (ADCIFE) Timing Configuration Register */
#define REG_ADCIFE_ITIMER          (0x40038020) /**< \brief (ADCIFE) Internal Timer Register */
#define REG_ADCIFE_WCFG            (0x40038024) /**< \brief (ADCIFE) Window Monitor Configuration Register */
#define REG_ADCIFE_WTH             (0x40038028) /**< \brief (ADCIFE) Window Monitor Threshold Configuration Register */
#define REG_ADCIFE_LCV             (0x4003802C) /**< \brief (ADCIFE) Sequencer Last Converted Value Register */
#define REG_ADCIFE_IER             (0x40038030) /**< \brief (ADCIFE) Interrupt Enable Register */
#define REG_ADCIFE_IDR             (0x40038034) /**< \brief (ADCIFE) Interrupt Disable Register */
#define REG_ADCIFE_IMR             (0x40038038) /**< \brief (ADCIFE) Interrupt Mask Register */
#define REG_ADCIFE_CALIB           (0x4003803C) /**< \brief (ADCIFE) Calibration Register */
#define REG_ADCIFE_VERSION         (0x40038040) /**< \brief (ADCIFE) Version Register */
#define REG_ADCIFE_PARAMETER       (0x40038044) /**< \brief (ADCIFE) Parameter Register */
#else
#define REG_ADCIFE_CR              (*(WoReg  *)0x40038000UL) /**< \brief (ADCIFE) Control Register */
#define REG_ADCIFE_CFG             (*(RwReg  *)0x40038004UL) /**< \brief (ADCIFE) Configuration Register */
#define REG_ADCIFE_SR              (*(RoReg  *)0x40038008UL) /**< \brief (ADCIFE) Status Register */
#define REG_ADCIFE_SCR             (*(WoReg  *)0x4003800CUL) /**< \brief (ADCIFE) Status Clear Register */
#define REG_ADCIFE_RTS             (*(RwReg  *)0x40038010UL) /**< \brief (ADCIFE) Resistive Touch Screen Register */
#define REG_ADCIFE_SEQCFG          (*(RwReg  *)0x40038014UL) /**< \brief (ADCIFE) Sequencer Configuration Register */
#define REG_ADCIFE_CDMA            (*(WoReg  *)0x40038018UL) /**< \brief (ADCIFE) Configuration Direct Memory Access Register */
#define REG_ADCIFE_TIM             (*(RwReg  *)0x4003801CUL) /**< \brief (ADCIFE) Timing Configuration Register */
#define REG_ADCIFE_ITIMER          (*(RwReg  *)0x40038020UL) /**< \brief (ADCIFE) Internal Timer Register */
#define REG_ADCIFE_WCFG            (*(RwReg  *)0x40038024UL) /**< \brief (ADCIFE) Window Monitor Configuration Register */
#define REG_ADCIFE_WTH             (*(RwReg  *)0x40038028UL) /**< \brief (ADCIFE) Window Monitor Threshold Configuration Register */
#define REG_ADCIFE_LCV             (*(RoReg  *)0x4003802CUL) /**< \brief (ADCIFE) Sequencer Last Converted Value Register */
#define REG_ADCIFE_IER             (*(WoReg  *)0x40038030UL) /**< \brief (ADCIFE) Interrupt Enable Register */
#define REG_ADCIFE_IDR             (*(WoReg  *)0x40038034UL) /**< \brief (ADCIFE) Interrupt Disable Register */
#define REG_ADCIFE_IMR             (*(RoReg  *)0x40038038UL) /**< \brief (ADCIFE) Interrupt Mask Register */
#define REG_ADCIFE_CALIB           (*(RwReg  *)0x4003803CUL) /**< \brief (ADCIFE) Calibration Register */
#define REG_ADCIFE_VERSION         (*(RoReg  *)0x40038040UL) /**< \brief (ADCIFE) Version Register */
#define REG_ADCIFE_PARAMETER       (*(RoReg  *)0x40038044UL) /**< \brief (ADCIFE) Parameter Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for ADCIFE peripheral ========== */
#define ADCIFE_CHANNELS             16      
#define ADCIFE_CHANNEL_MSB          15      
#define ADCIFE_EXT_TRIGGERS_MSB     0       
#define ADCIFE_GCLK_NUM             10      
#define ADCIFE_PDCA_ID_RX           11      
#define ADCIFE_PDCA_ID_TX           29      
#define ADCIFE_REG_RX               LCV     
#define ADCIFE_REG_TX               CDMA    

#endif /* _SAM4L_ADCIFE_INSTANCE_ */
