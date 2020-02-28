/**
 * \file
 *
 * \brief Instance description for HCACHE
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

#ifndef _SAM4L_HCACHE_INSTANCE_
#define _SAM4L_HCACHE_INSTANCE_

/* ========== Register definition for HCACHE peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_HCACHE_CTRL            (0x400A0408) /**< \brief (HCACHE) Control Register */
#define REG_HCACHE_SR              (0x400A040C) /**< \brief (HCACHE) Status Register */
#define REG_HCACHE_MAINT0          (0x400A0420) /**< \brief (HCACHE) Maintenance Register 0 */
#define REG_HCACHE_MAINT1          (0x400A0424) /**< \brief (HCACHE) Maintenance Register 1 */
#define REG_HCACHE_MCFG            (0x400A0428) /**< \brief (HCACHE) Monitor Configuration Register */
#define REG_HCACHE_MEN             (0x400A042C) /**< \brief (HCACHE) Monitor Enable Register */
#define REG_HCACHE_MCTRL           (0x400A0430) /**< \brief (HCACHE) Monitor Control Register */
#define REG_HCACHE_MSR             (0x400A0434) /**< \brief (HCACHE) Monitor Status Register */
#define REG_HCACHE_VERSION         (0x400A04FC) /**< \brief (HCACHE) Version Register */
#else
#define REG_HCACHE_CTRL            (*(WoReg  *)0x400A0408UL) /**< \brief (HCACHE) Control Register */
#define REG_HCACHE_SR              (*(RwReg  *)0x400A040CUL) /**< \brief (HCACHE) Status Register */
#define REG_HCACHE_MAINT0          (*(WoReg  *)0x400A0420UL) /**< \brief (HCACHE) Maintenance Register 0 */
#define REG_HCACHE_MAINT1          (*(WoReg  *)0x400A0424UL) /**< \brief (HCACHE) Maintenance Register 1 */
#define REG_HCACHE_MCFG            (*(RwReg  *)0x400A0428UL) /**< \brief (HCACHE) Monitor Configuration Register */
#define REG_HCACHE_MEN             (*(RwReg  *)0x400A042CUL) /**< \brief (HCACHE) Monitor Enable Register */
#define REG_HCACHE_MCTRL           (*(WoReg  *)0x400A0430UL) /**< \brief (HCACHE) Monitor Control Register */
#define REG_HCACHE_MSR             (*(RoReg  *)0x400A0434UL) /**< \brief (HCACHE) Monitor Status Register */
#define REG_HCACHE_VERSION         (*(RoReg  *)0x400A04FCUL) /**< \brief (HCACHE) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#endif /* _SAM4L_HCACHE_INSTANCE_ */
