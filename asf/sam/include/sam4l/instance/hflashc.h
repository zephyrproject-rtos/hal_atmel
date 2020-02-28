/**
 * \file
 *
 * \brief Instance description for HFLASHC
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

#ifndef _SAM4L_HFLASHC_INSTANCE_
#define _SAM4L_HFLASHC_INSTANCE_

/* ========== Register definition for HFLASHC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_HFLASHC_FCR            (0x400A0000) /**< \brief (HFLASHC) Flash Controller Control Register */
#define REG_HFLASHC_FCMD           (0x400A0004) /**< \brief (HFLASHC) Flash Controller Command Register */
#define REG_HFLASHC_FSR            (0x400A0008) /**< \brief (HFLASHC) Flash Controller Status Register */
#define REG_HFLASHC_FPR            (0x400A000C) /**< \brief (HFLASHC) Flash Controller Parameter Register */
#define REG_HFLASHC_VERSION        (0x400A0010) /**< \brief (HFLASHC) Flash Controller Version Register */
#define REG_HFLASHC_FGPFRHI        (0x400A0014) /**< \brief (HFLASHC) Flash Controller General Purpose Fuse Register High */
#define REG_HFLASHC_FGPFRLO        (0x400A0018) /**< \brief (HFLASHC) Flash Controller General Purpose Fuse Register Low */
#else
#define REG_HFLASHC_FCR            (*(RwReg  *)0x400A0000UL) /**< \brief (HFLASHC) Flash Controller Control Register */
#define REG_HFLASHC_FCMD           (*(RwReg  *)0x400A0004UL) /**< \brief (HFLASHC) Flash Controller Command Register */
#define REG_HFLASHC_FSR            (*(RwReg  *)0x400A0008UL) /**< \brief (HFLASHC) Flash Controller Status Register */
#define REG_HFLASHC_FPR            (*(RoReg  *)0x400A000CUL) /**< \brief (HFLASHC) Flash Controller Parameter Register */
#define REG_HFLASHC_VERSION        (*(RoReg  *)0x400A0010UL) /**< \brief (HFLASHC) Flash Controller Version Register */
#define REG_HFLASHC_FGPFRHI        (*(RwReg  *)0x400A0014UL) /**< \brief (HFLASHC) Flash Controller General Purpose Fuse Register High */
#define REG_HFLASHC_FGPFRLO        (*(RwReg  *)0x400A0018UL) /**< \brief (HFLASHC) Flash Controller General Purpose Fuse Register Low */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#endif /* _SAM4L_HFLASHC_INSTANCE_ */
