/**
 * \file
 *
 * \brief Component description for CHIPID
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

#ifndef _SAM4L_CHIPID_COMPONENT_
#define _SAM4L_CHIPID_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR CHIPID */
/* ========================================================================== */
/** \addtogroup SAM4L_CHIPID Chip ID Registers */
/*@{*/

#define CHIPID_
#define REV_CHIPID                  0x100

/* -------- CHIPID_CIDR : (CHIPID Offset: 0x340) (R/  32) Chip ID Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} CHIPID_CIDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CHIPID_CIDR_OFFSET          0x340        /**< \brief (CHIPID_CIDR offset) Chip ID Register */
#define CHIPID_CIDR_RESETVALUE      _U_(0xAB0A09E0); /**< \brief (CHIPID_CIDR reset_value) Chip ID Register */
#define CHIPID_CIDR_MASK            _U_(0xFFFFFFFF) /**< \brief (CHIPID_CIDR) MASK Register */

/* -------- CHIPID_EXID : (CHIPID Offset: 0x344) (R/  32) Chip ID Extension Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} CHIPID_EXID_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CHIPID_EXID_OFFSET          0x344        /**< \brief (CHIPID_EXID offset) Chip ID Extension Register */
#define CHIPID_EXID_RESETVALUE      _U_(0x0400000F); /**< \brief (CHIPID_EXID reset_value) Chip ID Extension Register */
#define CHIPID_EXID_MASK            _U_(0xFFFFFFFF) /**< \brief (CHIPID_EXID) MASK Register */

/** \brief CHIPID hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
       RoReg8   Reserved1[0x340];
  __I  uint32_t CIDR;        /**< \brief Offset: 0x340 (R/  32) Chip ID Register */
  __I  uint32_t EXID;        /**< \brief Offset: 0x344 (R/  32) Chip ID Extension Register */
} Chipid;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_CHIPID_COMPONENT_ */
