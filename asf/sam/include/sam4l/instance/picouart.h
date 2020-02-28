/**
 * \file
 *
 * \brief Instance description for PICOUART
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

#ifndef _SAM4L_PICOUART_INSTANCE_
#define _SAM4L_PICOUART_INSTANCE_

/* ========== Register definition for PICOUART peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PICOUART_CR            (0x400F1400) /**< \brief (PICOUART) Control Register */
#define REG_PICOUART_CFG           (0x400F1404) /**< \brief (PICOUART) Configuration Register */
#define REG_PICOUART_SR            (0x400F1408) /**< \brief (PICOUART) Status Register */
#define REG_PICOUART_RHR           (0x400F140C) /**< \brief (PICOUART) Receive Holding Register */
#define REG_PICOUART_VERSION       (0x400F1420) /**< \brief (PICOUART) Version Register */
#else
#define REG_PICOUART_CR            (*(WoReg  *)0x400F1400UL) /**< \brief (PICOUART) Control Register */
#define REG_PICOUART_CFG           (*(RwReg  *)0x400F1404UL) /**< \brief (PICOUART) Configuration Register */
#define REG_PICOUART_SR            (*(RoReg  *)0x400F1408UL) /**< \brief (PICOUART) Status Register */
#define REG_PICOUART_RHR           (*(RoReg  *)0x400F140CUL) /**< \brief (PICOUART) Receive Holding Register */
#define REG_PICOUART_VERSION       (*(RoReg  *)0x400F1420UL) /**< \brief (PICOUART) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#endif /* _SAM4L_PICOUART_INSTANCE_ */
