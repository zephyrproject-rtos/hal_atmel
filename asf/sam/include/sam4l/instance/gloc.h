/**
 * \file
 *
 * \brief Instance description for GLOC
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

#ifndef _SAM4L_GLOC_INSTANCE_
#define _SAM4L_GLOC_INSTANCE_

/* ========== Register definition for GLOC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_GLOC_CR0               (0x40060000) /**< \brief (GLOC) Control Register 0 */
#define REG_GLOC_TRUTH0            (0x40060004) /**< \brief (GLOC) Truth Register 0 */
#define REG_GLOC_CR1               (0x40060008) /**< \brief (GLOC) Control Register 1 */
#define REG_GLOC_TRUTH1            (0x4006000C) /**< \brief (GLOC) Truth Register 1 */
#define REG_GLOC_PARAMETER         (0x40060038) /**< \brief (GLOC) Parameter Register */
#define REG_GLOC_VERSION           (0x4006003C) /**< \brief (GLOC) Version Register */
#else
#define REG_GLOC_CR0               (*(RwReg  *)0x40060000UL) /**< \brief (GLOC) Control Register 0 */
#define REG_GLOC_TRUTH0            (*(RwReg  *)0x40060004UL) /**< \brief (GLOC) Truth Register 0 */
#define REG_GLOC_CR1               (*(RwReg  *)0x40060008UL) /**< \brief (GLOC) Control Register 1 */
#define REG_GLOC_TRUTH1            (*(RwReg  *)0x4006000CUL) /**< \brief (GLOC) Truth Register 1 */
#define REG_GLOC_PARAMETER         (*(RoReg  *)0x40060038UL) /**< \brief (GLOC) Parameter Register */
#define REG_GLOC_VERSION           (*(RoReg  *)0x4006003CUL) /**< \brief (GLOC) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for GLOC peripheral ========== */
#define GLOC_GCLK_NUM               5       
#define GLOC_LUTS                   2       

#endif /* _SAM4L_GLOC_INSTANCE_ */
