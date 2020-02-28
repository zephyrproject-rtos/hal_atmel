/**
 * \file
 *
 * \brief Instance description for CHIPID
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

#ifndef _SAM4L_CHIPID_INSTANCE_
#define _SAM4L_CHIPID_INSTANCE_

/* ========== Register definition for CHIPID peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_CHIPID_CIDR            (0x400E0740) /**< \brief (CHIPID) Chip ID Register */
#define REG_CHIPID_EXID            (0x400E0744) /**< \brief (CHIPID) Chip ID Extension Register */
#else
#define REG_CHIPID_CIDR            (*(RoReg  *)0x400E0740UL) /**< \brief (CHIPID) Chip ID Register */
#define REG_CHIPID_EXID            (*(RoReg  *)0x400E0744UL) /**< \brief (CHIPID) Chip ID Extension Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#endif /* _SAM4L_CHIPID_INSTANCE_ */
