/**
 * \file
 *
 * \brief Instance description for SMAP
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

#ifndef _SAM4L_SMAP_INSTANCE_
#define _SAM4L_SMAP_INSTANCE_

/* ========== Register definition for SMAP peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_SMAP_CR                (0x400A3000) /**< \brief (SMAP) Control Register */
#define REG_SMAP_SR                (0x400A3004) /**< \brief (SMAP) Status Register */
#define REG_SMAP_SCR               (0x400A3008) /**< \brief (SMAP) Status Clear Register */
#define REG_SMAP_ADDR              (0x400A300C) /**< \brief (SMAP) Address Register */
#define REG_SMAP_LENGTH            (0x400A3010) /**< \brief (SMAP) Length Register */
#define REG_SMAP_DATA              (0x400A3014) /**< \brief (SMAP) Data Register */
#define REG_SMAP_VERSION           (0x400A3028) /**< \brief (SMAP) VERSION register */
#define REG_SMAP_CIDR              (0x400A30F0) /**< \brief (SMAP) Chip ID Register */
#define REG_SMAP_EXID              (0x400A30F4) /**< \brief (SMAP) Chip ID Extension Register */
#define REG_SMAP_IDR               (0x400A30FC) /**< \brief (SMAP) AP Identification register */
#else
#define REG_SMAP_CR                (*(WoReg  *)0x400A3000UL) /**< \brief (SMAP) Control Register */
#define REG_SMAP_SR                (*(RoReg  *)0x400A3004UL) /**< \brief (SMAP) Status Register */
#define REG_SMAP_SCR               (*(WoReg  *)0x400A3008UL) /**< \brief (SMAP) Status Clear Register */
#define REG_SMAP_ADDR              (*(RwReg  *)0x400A300CUL) /**< \brief (SMAP) Address Register */
#define REG_SMAP_LENGTH            (*(RwReg  *)0x400A3010UL) /**< \brief (SMAP) Length Register */
#define REG_SMAP_DATA              (*(RwReg  *)0x400A3014UL) /**< \brief (SMAP) Data Register */
#define REG_SMAP_VERSION           (*(RoReg  *)0x400A3028UL) /**< \brief (SMAP) VERSION register */
#define REG_SMAP_CIDR              (*(RoReg  *)0x400A30F0UL) /**< \brief (SMAP) Chip ID Register */
#define REG_SMAP_EXID              (*(RoReg  *)0x400A30F4UL) /**< \brief (SMAP) Chip ID Extension Register */
#define REG_SMAP_IDR               (*(RoReg  *)0x400A30FCUL) /**< \brief (SMAP) AP Identification register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#endif /* _SAM4L_SMAP_INSTANCE_ */
