/**
 * \file
 *
 * \brief Instance description for CATB
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

#ifndef _SAM4L_CATB_INSTANCE_
#define _SAM4L_CATB_INSTANCE_

/* ========== Register definition for CATB peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_CATB_CR                (0x40070000) /**< \brief (CATB) Control Register */
#define REG_CATB_CNTCR             (0x40070004) /**< \brief (CATB) Counter Control Register */
#define REG_CATB_IDLE              (0x40070008) /**< \brief (CATB) Sensor Idle Level */
#define REG_CATB_LEVEL             (0x4007000C) /**< \brief (CATB) Sensor Relative Level */
#define REG_CATB_RAW               (0x40070010) /**< \brief (CATB) Sensor Raw Value */
#define REG_CATB_TIMING            (0x40070014) /**< \brief (CATB) Filter Timing Register */
#define REG_CATB_THRESH            (0x40070018) /**< \brief (CATB) Threshold Register */
#define REG_CATB_PINSEL            (0x4007001C) /**< \brief (CATB) Pin Selection Register */
#define REG_CATB_DMA               (0x40070020) /**< \brief (CATB) Direct Memory Access Register */
#define REG_CATB_ISR               (0x40070024) /**< \brief (CATB) Interrupt Status Register */
#define REG_CATB_IER               (0x40070028) /**< \brief (CATB) Interrupt Enable Register */
#define REG_CATB_IDR               (0x4007002C) /**< \brief (CATB) Interrupt Disable Register */
#define REG_CATB_IMR               (0x40070030) /**< \brief (CATB) Interrupt Mask Register */
#define REG_CATB_SCR               (0x40070034) /**< \brief (CATB) Status Clear Register */
#define REG_CATB_INTCH0            (0x40070040) /**< \brief (CATB) In-Touch Status Register 0 */
#define REG_CATB_INTCHCLR0         (0x40070050) /**< \brief (CATB) In-Touch Status Clear Register 0 */
#define REG_CATB_OUTTCH0           (0x40070060) /**< \brief (CATB) Out-of-Touch Status Register 0 */
#define REG_CATB_OUTTCHCLR0        (0x40070070) /**< \brief (CATB) Out-of-Touch Status Clear Register 0 */
#define REG_CATB_PARAMETER         (0x400700F8) /**< \brief (CATB) Parameter Register */
#define REG_CATB_VERSION           (0x400700FC) /**< \brief (CATB) Version Register */
#else
#define REG_CATB_CR                (*(RwReg  *)0x40070000UL) /**< \brief (CATB) Control Register */
#define REG_CATB_CNTCR             (*(RwReg  *)0x40070004UL) /**< \brief (CATB) Counter Control Register */
#define REG_CATB_IDLE              (*(RwReg  *)0x40070008UL) /**< \brief (CATB) Sensor Idle Level */
#define REG_CATB_LEVEL             (*(RoReg  *)0x4007000CUL) /**< \brief (CATB) Sensor Relative Level */
#define REG_CATB_RAW               (*(RoReg  *)0x40070010UL) /**< \brief (CATB) Sensor Raw Value */
#define REG_CATB_TIMING            (*(RwReg  *)0x40070014UL) /**< \brief (CATB) Filter Timing Register */
#define REG_CATB_THRESH            (*(RwReg  *)0x40070018UL) /**< \brief (CATB) Threshold Register */
#define REG_CATB_PINSEL            (*(RwReg  *)0x4007001CUL) /**< \brief (CATB) Pin Selection Register */
#define REG_CATB_DMA               (*(RwReg  *)0x40070020UL) /**< \brief (CATB) Direct Memory Access Register */
#define REG_CATB_ISR               (*(RoReg  *)0x40070024UL) /**< \brief (CATB) Interrupt Status Register */
#define REG_CATB_IER               (*(WoReg  *)0x40070028UL) /**< \brief (CATB) Interrupt Enable Register */
#define REG_CATB_IDR               (*(WoReg  *)0x4007002CUL) /**< \brief (CATB) Interrupt Disable Register */
#define REG_CATB_IMR               (*(RoReg  *)0x40070030UL) /**< \brief (CATB) Interrupt Mask Register */
#define REG_CATB_SCR               (*(WoReg  *)0x40070034UL) /**< \brief (CATB) Status Clear Register */
#define REG_CATB_INTCH0            (*(RoReg  *)0x40070040UL) /**< \brief (CATB) In-Touch Status Register 0 */
#define REG_CATB_INTCHCLR0         (*(WoReg  *)0x40070050UL) /**< \brief (CATB) In-Touch Status Clear Register 0 */
#define REG_CATB_OUTTCH0           (*(RoReg  *)0x40070060UL) /**< \brief (CATB) Out-of-Touch Status Register 0 */
#define REG_CATB_OUTTCHCLR0        (*(WoReg  *)0x40070070UL) /**< \brief (CATB) Out-of-Touch Status Clear Register 0 */
#define REG_CATB_PARAMETER         (*(RoReg  *)0x400700F8UL) /**< \brief (CATB) Parameter Register */
#define REG_CATB_VERSION           (*(RoReg  *)0x400700FCUL) /**< \brief (CATB) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for CATB peripheral ========== */
#define CATB_GCLK_NUM               3       
#define CATB_PDCA_ID_RX             12      
#define CATB_PDCA_ID_TX             30      
#define CATB_SENSORS_MSB            31      
#define CATB_STATUS_REG_NUMBER      1       

#endif /* _SAM4L_CATB_INSTANCE_ */
