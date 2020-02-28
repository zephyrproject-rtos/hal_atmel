/**
 * \file
 *
 * \brief Instance description for PDCA
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

#ifndef _SAM4L_PDCA_INSTANCE_
#define _SAM4L_PDCA_INSTANCE_

/* ========== Register definition for PDCA peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PDCA_MAR0              (0x400A2000) /**< \brief (PDCA) Memory Address Register 0 */
#define REG_PDCA_PSR0              (0x400A2004) /**< \brief (PDCA) Peripheral Select Register 0 */
#define REG_PDCA_TCR0              (0x400A2008) /**< \brief (PDCA) Transfer Counter Register 0 */
#define REG_PDCA_MARR0             (0x400A200C) /**< \brief (PDCA) Memory Address Reload Register 0 */
#define REG_PDCA_TCRR0             (0x400A2010) /**< \brief (PDCA) Transfer Counter Reload Register 0 */
#define REG_PDCA_CR0               (0x400A2014) /**< \brief (PDCA) Control Register 0 */
#define REG_PDCA_MR0               (0x400A2018) /**< \brief (PDCA) Mode Register 0 */
#define REG_PDCA_SR0               (0x400A201C) /**< \brief (PDCA) Status Register 0 */
#define REG_PDCA_IER0              (0x400A2020) /**< \brief (PDCA) Interrupt Enable Register 0 */
#define REG_PDCA_IDR0              (0x400A2024) /**< \brief (PDCA) Interrupt Disable Register 0 */
#define REG_PDCA_IMR0              (0x400A2028) /**< \brief (PDCA) Interrupt Mask Register 0 */
#define REG_PDCA_ISR0              (0x400A202C) /**< \brief (PDCA) Interrupt Status Register 0 */
#define REG_PDCA_MAR1              (0x400A2040) /**< \brief (PDCA) Memory Address Register 1 */
#define REG_PDCA_PSR1              (0x400A2044) /**< \brief (PDCA) Peripheral Select Register 1 */
#define REG_PDCA_TCR1              (0x400A2048) /**< \brief (PDCA) Transfer Counter Register 1 */
#define REG_PDCA_MARR1             (0x400A204C) /**< \brief (PDCA) Memory Address Reload Register 1 */
#define REG_PDCA_TCRR1             (0x400A2050) /**< \brief (PDCA) Transfer Counter Reload Register 1 */
#define REG_PDCA_CR1               (0x400A2054) /**< \brief (PDCA) Control Register 1 */
#define REG_PDCA_MR1               (0x400A2058) /**< \brief (PDCA) Mode Register 1 */
#define REG_PDCA_SR1               (0x400A205C) /**< \brief (PDCA) Status Register 1 */
#define REG_PDCA_IER1              (0x400A2060) /**< \brief (PDCA) Interrupt Enable Register 1 */
#define REG_PDCA_IDR1              (0x400A2064) /**< \brief (PDCA) Interrupt Disable Register 1 */
#define REG_PDCA_IMR1              (0x400A2068) /**< \brief (PDCA) Interrupt Mask Register 1 */
#define REG_PDCA_ISR1              (0x400A206C) /**< \brief (PDCA) Interrupt Status Register 1 */
#define REG_PDCA_MAR2              (0x400A2080) /**< \brief (PDCA) Memory Address Register 2 */
#define REG_PDCA_PSR2              (0x400A2084) /**< \brief (PDCA) Peripheral Select Register 2 */
#define REG_PDCA_TCR2              (0x400A2088) /**< \brief (PDCA) Transfer Counter Register 2 */
#define REG_PDCA_MARR2             (0x400A208C) /**< \brief (PDCA) Memory Address Reload Register 2 */
#define REG_PDCA_TCRR2             (0x400A2090) /**< \brief (PDCA) Transfer Counter Reload Register 2 */
#define REG_PDCA_CR2               (0x400A2094) /**< \brief (PDCA) Control Register 2 */
#define REG_PDCA_MR2               (0x400A2098) /**< \brief (PDCA) Mode Register 2 */
#define REG_PDCA_SR2               (0x400A209C) /**< \brief (PDCA) Status Register 2 */
#define REG_PDCA_IER2              (0x400A20A0) /**< \brief (PDCA) Interrupt Enable Register 2 */
#define REG_PDCA_IDR2              (0x400A20A4) /**< \brief (PDCA) Interrupt Disable Register 2 */
#define REG_PDCA_IMR2              (0x400A20A8) /**< \brief (PDCA) Interrupt Mask Register 2 */
#define REG_PDCA_ISR2              (0x400A20AC) /**< \brief (PDCA) Interrupt Status Register 2 */
#define REG_PDCA_MAR3              (0x400A20C0) /**< \brief (PDCA) Memory Address Register 3 */
#define REG_PDCA_PSR3              (0x400A20C4) /**< \brief (PDCA) Peripheral Select Register 3 */
#define REG_PDCA_TCR3              (0x400A20C8) /**< \brief (PDCA) Transfer Counter Register 3 */
#define REG_PDCA_MARR3             (0x400A20CC) /**< \brief (PDCA) Memory Address Reload Register 3 */
#define REG_PDCA_TCRR3             (0x400A20D0) /**< \brief (PDCA) Transfer Counter Reload Register 3 */
#define REG_PDCA_CR3               (0x400A20D4) /**< \brief (PDCA) Control Register 3 */
#define REG_PDCA_MR3               (0x400A20D8) /**< \brief (PDCA) Mode Register 3 */
#define REG_PDCA_SR3               (0x400A20DC) /**< \brief (PDCA) Status Register 3 */
#define REG_PDCA_IER3              (0x400A20E0) /**< \brief (PDCA) Interrupt Enable Register 3 */
#define REG_PDCA_IDR3              (0x400A20E4) /**< \brief (PDCA) Interrupt Disable Register 3 */
#define REG_PDCA_IMR3              (0x400A20E8) /**< \brief (PDCA) Interrupt Mask Register 3 */
#define REG_PDCA_ISR3              (0x400A20EC) /**< \brief (PDCA) Interrupt Status Register 3 */
#define REG_PDCA_MAR4              (0x400A2100) /**< \brief (PDCA) Memory Address Register 4 */
#define REG_PDCA_PSR4              (0x400A2104) /**< \brief (PDCA) Peripheral Select Register 4 */
#define REG_PDCA_TCR4              (0x400A2108) /**< \brief (PDCA) Transfer Counter Register 4 */
#define REG_PDCA_MARR4             (0x400A210C) /**< \brief (PDCA) Memory Address Reload Register 4 */
#define REG_PDCA_TCRR4             (0x400A2110) /**< \brief (PDCA) Transfer Counter Reload Register 4 */
#define REG_PDCA_CR4               (0x400A2114) /**< \brief (PDCA) Control Register 4 */
#define REG_PDCA_MR4               (0x400A2118) /**< \brief (PDCA) Mode Register 4 */
#define REG_PDCA_SR4               (0x400A211C) /**< \brief (PDCA) Status Register 4 */
#define REG_PDCA_IER4              (0x400A2120) /**< \brief (PDCA) Interrupt Enable Register 4 */
#define REG_PDCA_IDR4              (0x400A2124) /**< \brief (PDCA) Interrupt Disable Register 4 */
#define REG_PDCA_IMR4              (0x400A2128) /**< \brief (PDCA) Interrupt Mask Register 4 */
#define REG_PDCA_ISR4              (0x400A212C) /**< \brief (PDCA) Interrupt Status Register 4 */
#define REG_PDCA_MAR5              (0x400A2140) /**< \brief (PDCA) Memory Address Register 5 */
#define REG_PDCA_PSR5              (0x400A2144) /**< \brief (PDCA) Peripheral Select Register 5 */
#define REG_PDCA_TCR5              (0x400A2148) /**< \brief (PDCA) Transfer Counter Register 5 */
#define REG_PDCA_MARR5             (0x400A214C) /**< \brief (PDCA) Memory Address Reload Register 5 */
#define REG_PDCA_TCRR5             (0x400A2150) /**< \brief (PDCA) Transfer Counter Reload Register 5 */
#define REG_PDCA_CR5               (0x400A2154) /**< \brief (PDCA) Control Register 5 */
#define REG_PDCA_MR5               (0x400A2158) /**< \brief (PDCA) Mode Register 5 */
#define REG_PDCA_SR5               (0x400A215C) /**< \brief (PDCA) Status Register 5 */
#define REG_PDCA_IER5              (0x400A2160) /**< \brief (PDCA) Interrupt Enable Register 5 */
#define REG_PDCA_IDR5              (0x400A2164) /**< \brief (PDCA) Interrupt Disable Register 5 */
#define REG_PDCA_IMR5              (0x400A2168) /**< \brief (PDCA) Interrupt Mask Register 5 */
#define REG_PDCA_ISR5              (0x400A216C) /**< \brief (PDCA) Interrupt Status Register 5 */
#define REG_PDCA_MAR6              (0x400A2180) /**< \brief (PDCA) Memory Address Register 6 */
#define REG_PDCA_PSR6              (0x400A2184) /**< \brief (PDCA) Peripheral Select Register 6 */
#define REG_PDCA_TCR6              (0x400A2188) /**< \brief (PDCA) Transfer Counter Register 6 */
#define REG_PDCA_MARR6             (0x400A218C) /**< \brief (PDCA) Memory Address Reload Register 6 */
#define REG_PDCA_TCRR6             (0x400A2190) /**< \brief (PDCA) Transfer Counter Reload Register 6 */
#define REG_PDCA_CR6               (0x400A2194) /**< \brief (PDCA) Control Register 6 */
#define REG_PDCA_MR6               (0x400A2198) /**< \brief (PDCA) Mode Register 6 */
#define REG_PDCA_SR6               (0x400A219C) /**< \brief (PDCA) Status Register 6 */
#define REG_PDCA_IER6              (0x400A21A0) /**< \brief (PDCA) Interrupt Enable Register 6 */
#define REG_PDCA_IDR6              (0x400A21A4) /**< \brief (PDCA) Interrupt Disable Register 6 */
#define REG_PDCA_IMR6              (0x400A21A8) /**< \brief (PDCA) Interrupt Mask Register 6 */
#define REG_PDCA_ISR6              (0x400A21AC) /**< \brief (PDCA) Interrupt Status Register 6 */
#define REG_PDCA_MAR7              (0x400A21C0) /**< \brief (PDCA) Memory Address Register 7 */
#define REG_PDCA_PSR7              (0x400A21C4) /**< \brief (PDCA) Peripheral Select Register 7 */
#define REG_PDCA_TCR7              (0x400A21C8) /**< \brief (PDCA) Transfer Counter Register 7 */
#define REG_PDCA_MARR7             (0x400A21CC) /**< \brief (PDCA) Memory Address Reload Register 7 */
#define REG_PDCA_TCRR7             (0x400A21D0) /**< \brief (PDCA) Transfer Counter Reload Register 7 */
#define REG_PDCA_CR7               (0x400A21D4) /**< \brief (PDCA) Control Register 7 */
#define REG_PDCA_MR7               (0x400A21D8) /**< \brief (PDCA) Mode Register 7 */
#define REG_PDCA_SR7               (0x400A21DC) /**< \brief (PDCA) Status Register 7 */
#define REG_PDCA_IER7              (0x400A21E0) /**< \brief (PDCA) Interrupt Enable Register 7 */
#define REG_PDCA_IDR7              (0x400A21E4) /**< \brief (PDCA) Interrupt Disable Register 7 */
#define REG_PDCA_IMR7              (0x400A21E8) /**< \brief (PDCA) Interrupt Mask Register 7 */
#define REG_PDCA_ISR7              (0x400A21EC) /**< \brief (PDCA) Interrupt Status Register 7 */
#define REG_PDCA_MAR8              (0x400A2200) /**< \brief (PDCA) Memory Address Register 8 */
#define REG_PDCA_PSR8              (0x400A2204) /**< \brief (PDCA) Peripheral Select Register 8 */
#define REG_PDCA_TCR8              (0x400A2208) /**< \brief (PDCA) Transfer Counter Register 8 */
#define REG_PDCA_MARR8             (0x400A220C) /**< \brief (PDCA) Memory Address Reload Register 8 */
#define REG_PDCA_TCRR8             (0x400A2210) /**< \brief (PDCA) Transfer Counter Reload Register 8 */
#define REG_PDCA_CR8               (0x400A2214) /**< \brief (PDCA) Control Register 8 */
#define REG_PDCA_MR8               (0x400A2218) /**< \brief (PDCA) Mode Register 8 */
#define REG_PDCA_SR8               (0x400A221C) /**< \brief (PDCA) Status Register 8 */
#define REG_PDCA_IER8              (0x400A2220) /**< \brief (PDCA) Interrupt Enable Register 8 */
#define REG_PDCA_IDR8              (0x400A2224) /**< \brief (PDCA) Interrupt Disable Register 8 */
#define REG_PDCA_IMR8              (0x400A2228) /**< \brief (PDCA) Interrupt Mask Register 8 */
#define REG_PDCA_ISR8              (0x400A222C) /**< \brief (PDCA) Interrupt Status Register 8 */
#define REG_PDCA_MAR9              (0x400A2240) /**< \brief (PDCA) Memory Address Register 9 */
#define REG_PDCA_PSR9              (0x400A2244) /**< \brief (PDCA) Peripheral Select Register 9 */
#define REG_PDCA_TCR9              (0x400A2248) /**< \brief (PDCA) Transfer Counter Register 9 */
#define REG_PDCA_MARR9             (0x400A224C) /**< \brief (PDCA) Memory Address Reload Register 9 */
#define REG_PDCA_TCRR9             (0x400A2250) /**< \brief (PDCA) Transfer Counter Reload Register 9 */
#define REG_PDCA_CR9               (0x400A2254) /**< \brief (PDCA) Control Register 9 */
#define REG_PDCA_MR9               (0x400A2258) /**< \brief (PDCA) Mode Register 9 */
#define REG_PDCA_SR9               (0x400A225C) /**< \brief (PDCA) Status Register 9 */
#define REG_PDCA_IER9              (0x400A2260) /**< \brief (PDCA) Interrupt Enable Register 9 */
#define REG_PDCA_IDR9              (0x400A2264) /**< \brief (PDCA) Interrupt Disable Register 9 */
#define REG_PDCA_IMR9              (0x400A2268) /**< \brief (PDCA) Interrupt Mask Register 9 */
#define REG_PDCA_ISR9              (0x400A226C) /**< \brief (PDCA) Interrupt Status Register 9 */
#define REG_PDCA_MAR10             (0x400A2280) /**< \brief (PDCA) Memory Address Register 10 */
#define REG_PDCA_PSR10             (0x400A2284) /**< \brief (PDCA) Peripheral Select Register 10 */
#define REG_PDCA_TCR10             (0x400A2288) /**< \brief (PDCA) Transfer Counter Register 10 */
#define REG_PDCA_MARR10            (0x400A228C) /**< \brief (PDCA) Memory Address Reload Register 10 */
#define REG_PDCA_TCRR10            (0x400A2290) /**< \brief (PDCA) Transfer Counter Reload Register 10 */
#define REG_PDCA_CR10              (0x400A2294) /**< \brief (PDCA) Control Register 10 */
#define REG_PDCA_MR10              (0x400A2298) /**< \brief (PDCA) Mode Register 10 */
#define REG_PDCA_SR10              (0x400A229C) /**< \brief (PDCA) Status Register 10 */
#define REG_PDCA_IER10             (0x400A22A0) /**< \brief (PDCA) Interrupt Enable Register 10 */
#define REG_PDCA_IDR10             (0x400A22A4) /**< \brief (PDCA) Interrupt Disable Register 10 */
#define REG_PDCA_IMR10             (0x400A22A8) /**< \brief (PDCA) Interrupt Mask Register 10 */
#define REG_PDCA_ISR10             (0x400A22AC) /**< \brief (PDCA) Interrupt Status Register 10 */
#define REG_PDCA_MAR11             (0x400A22C0) /**< \brief (PDCA) Memory Address Register 11 */
#define REG_PDCA_PSR11             (0x400A22C4) /**< \brief (PDCA) Peripheral Select Register 11 */
#define REG_PDCA_TCR11             (0x400A22C8) /**< \brief (PDCA) Transfer Counter Register 11 */
#define REG_PDCA_MARR11            (0x400A22CC) /**< \brief (PDCA) Memory Address Reload Register 11 */
#define REG_PDCA_TCRR11            (0x400A22D0) /**< \brief (PDCA) Transfer Counter Reload Register 11 */
#define REG_PDCA_CR11              (0x400A22D4) /**< \brief (PDCA) Control Register 11 */
#define REG_PDCA_MR11              (0x400A22D8) /**< \brief (PDCA) Mode Register 11 */
#define REG_PDCA_SR11              (0x400A22DC) /**< \brief (PDCA) Status Register 11 */
#define REG_PDCA_IER11             (0x400A22E0) /**< \brief (PDCA) Interrupt Enable Register 11 */
#define REG_PDCA_IDR11             (0x400A22E4) /**< \brief (PDCA) Interrupt Disable Register 11 */
#define REG_PDCA_IMR11             (0x400A22E8) /**< \brief (PDCA) Interrupt Mask Register 11 */
#define REG_PDCA_ISR11             (0x400A22EC) /**< \brief (PDCA) Interrupt Status Register 11 */
#define REG_PDCA_MAR12             (0x400A2300) /**< \brief (PDCA) Memory Address Register 12 */
#define REG_PDCA_PSR12             (0x400A2304) /**< \brief (PDCA) Peripheral Select Register 12 */
#define REG_PDCA_TCR12             (0x400A2308) /**< \brief (PDCA) Transfer Counter Register 12 */
#define REG_PDCA_MARR12            (0x400A230C) /**< \brief (PDCA) Memory Address Reload Register 12 */
#define REG_PDCA_TCRR12            (0x400A2310) /**< \brief (PDCA) Transfer Counter Reload Register 12 */
#define REG_PDCA_CR12              (0x400A2314) /**< \brief (PDCA) Control Register 12 */
#define REG_PDCA_MR12              (0x400A2318) /**< \brief (PDCA) Mode Register 12 */
#define REG_PDCA_SR12              (0x400A231C) /**< \brief (PDCA) Status Register 12 */
#define REG_PDCA_IER12             (0x400A2320) /**< \brief (PDCA) Interrupt Enable Register 12 */
#define REG_PDCA_IDR12             (0x400A2324) /**< \brief (PDCA) Interrupt Disable Register 12 */
#define REG_PDCA_IMR12             (0x400A2328) /**< \brief (PDCA) Interrupt Mask Register 12 */
#define REG_PDCA_ISR12             (0x400A232C) /**< \brief (PDCA) Interrupt Status Register 12 */
#define REG_PDCA_MAR13             (0x400A2340) /**< \brief (PDCA) Memory Address Register 13 */
#define REG_PDCA_PSR13             (0x400A2344) /**< \brief (PDCA) Peripheral Select Register 13 */
#define REG_PDCA_TCR13             (0x400A2348) /**< \brief (PDCA) Transfer Counter Register 13 */
#define REG_PDCA_MARR13            (0x400A234C) /**< \brief (PDCA) Memory Address Reload Register 13 */
#define REG_PDCA_TCRR13            (0x400A2350) /**< \brief (PDCA) Transfer Counter Reload Register 13 */
#define REG_PDCA_CR13              (0x400A2354) /**< \brief (PDCA) Control Register 13 */
#define REG_PDCA_MR13              (0x400A2358) /**< \brief (PDCA) Mode Register 13 */
#define REG_PDCA_SR13              (0x400A235C) /**< \brief (PDCA) Status Register 13 */
#define REG_PDCA_IER13             (0x400A2360) /**< \brief (PDCA) Interrupt Enable Register 13 */
#define REG_PDCA_IDR13             (0x400A2364) /**< \brief (PDCA) Interrupt Disable Register 13 */
#define REG_PDCA_IMR13             (0x400A2368) /**< \brief (PDCA) Interrupt Mask Register 13 */
#define REG_PDCA_ISR13             (0x400A236C) /**< \brief (PDCA) Interrupt Status Register 13 */
#define REG_PDCA_MAR14             (0x400A2380) /**< \brief (PDCA) Memory Address Register 14 */
#define REG_PDCA_PSR14             (0x400A2384) /**< \brief (PDCA) Peripheral Select Register 14 */
#define REG_PDCA_TCR14             (0x400A2388) /**< \brief (PDCA) Transfer Counter Register 14 */
#define REG_PDCA_MARR14            (0x400A238C) /**< \brief (PDCA) Memory Address Reload Register 14 */
#define REG_PDCA_TCRR14            (0x400A2390) /**< \brief (PDCA) Transfer Counter Reload Register 14 */
#define REG_PDCA_CR14              (0x400A2394) /**< \brief (PDCA) Control Register 14 */
#define REG_PDCA_MR14              (0x400A2398) /**< \brief (PDCA) Mode Register 14 */
#define REG_PDCA_SR14              (0x400A239C) /**< \brief (PDCA) Status Register 14 */
#define REG_PDCA_IER14             (0x400A23A0) /**< \brief (PDCA) Interrupt Enable Register 14 */
#define REG_PDCA_IDR14             (0x400A23A4) /**< \brief (PDCA) Interrupt Disable Register 14 */
#define REG_PDCA_IMR14             (0x400A23A8) /**< \brief (PDCA) Interrupt Mask Register 14 */
#define REG_PDCA_ISR14             (0x400A23AC) /**< \brief (PDCA) Interrupt Status Register 14 */
#define REG_PDCA_MAR15             (0x400A23C0) /**< \brief (PDCA) Memory Address Register 15 */
#define REG_PDCA_PSR15             (0x400A23C4) /**< \brief (PDCA) Peripheral Select Register 15 */
#define REG_PDCA_TCR15             (0x400A23C8) /**< \brief (PDCA) Transfer Counter Register 15 */
#define REG_PDCA_MARR15            (0x400A23CC) /**< \brief (PDCA) Memory Address Reload Register 15 */
#define REG_PDCA_TCRR15            (0x400A23D0) /**< \brief (PDCA) Transfer Counter Reload Register 15 */
#define REG_PDCA_CR15              (0x400A23D4) /**< \brief (PDCA) Control Register 15 */
#define REG_PDCA_MR15              (0x400A23D8) /**< \brief (PDCA) Mode Register 15 */
#define REG_PDCA_SR15              (0x400A23DC) /**< \brief (PDCA) Status Register 15 */
#define REG_PDCA_IER15             (0x400A23E0) /**< \brief (PDCA) Interrupt Enable Register 15 */
#define REG_PDCA_IDR15             (0x400A23E4) /**< \brief (PDCA) Interrupt Disable Register 15 */
#define REG_PDCA_IMR15             (0x400A23E8) /**< \brief (PDCA) Interrupt Mask Register 15 */
#define REG_PDCA_ISR15             (0x400A23EC) /**< \brief (PDCA) Interrupt Status Register 15 */
#define REG_PDCA_PCONTROL          (0x400A2800) /**< \brief (PDCA) Performance Control Register */
#define REG_PDCA_PRDATA0           (0x400A2804) /**< \brief (PDCA) Channel 0 Read Data Cycles */
#define REG_PDCA_PRSTALL0          (0x400A2808) /**< \brief (PDCA) Channel 0 Read Stall Cycles */
#define REG_PDCA_PRLAT0            (0x400A280C) /**< \brief (PDCA) Channel 0 Read Max Latency */
#define REG_PDCA_PWDATA0           (0x400A2810) /**< \brief (PDCA) Channel 0 Write Data Cycles */
#define REG_PDCA_PWSTALL0          (0x400A2814) /**< \brief (PDCA) Channel 0 Write Stall Cycles */
#define REG_PDCA_PWLAT0            (0x400A2818) /**< \brief (PDCA) Channel0 Write Max Latency */
#define REG_PDCA_PRDATA1           (0x400A281C) /**< \brief (PDCA) Channel 1 Read Data Cycles */
#define REG_PDCA_PRSTALL1          (0x400A2820) /**< \brief (PDCA) Channel Read Stall Cycles */
#define REG_PDCA_PRLAT1            (0x400A2824) /**< \brief (PDCA) Channel 1 Read Max Latency */
#define REG_PDCA_PWDATA1           (0x400A2828) /**< \brief (PDCA) Channel 1 Write Data Cycles */
#define REG_PDCA_PWSTALL1          (0x400A282C) /**< \brief (PDCA) Channel 1 Write stall Cycles */
#define REG_PDCA_PWLAT1            (0x400A2830) /**< \brief (PDCA) Channel 1 Read Max Latency */
#define REG_PDCA_VERSION           (0x400A2834) /**< \brief (PDCA) Version Register */
#else
#define REG_PDCA_MAR0              (*(RwReg  *)0x400A2000UL) /**< \brief (PDCA) Memory Address Register 0 */
#define REG_PDCA_PSR0              (*(RwReg  *)0x400A2004UL) /**< \brief (PDCA) Peripheral Select Register 0 */
#define REG_PDCA_TCR0              (*(RwReg  *)0x400A2008UL) /**< \brief (PDCA) Transfer Counter Register 0 */
#define REG_PDCA_MARR0             (*(RwReg  *)0x400A200CUL) /**< \brief (PDCA) Memory Address Reload Register 0 */
#define REG_PDCA_TCRR0             (*(RwReg  *)0x400A2010UL) /**< \brief (PDCA) Transfer Counter Reload Register 0 */
#define REG_PDCA_CR0               (*(WoReg  *)0x400A2014UL) /**< \brief (PDCA) Control Register 0 */
#define REG_PDCA_MR0               (*(RwReg  *)0x400A2018UL) /**< \brief (PDCA) Mode Register 0 */
#define REG_PDCA_SR0               (*(RoReg  *)0x400A201CUL) /**< \brief (PDCA) Status Register 0 */
#define REG_PDCA_IER0              (*(WoReg  *)0x400A2020UL) /**< \brief (PDCA) Interrupt Enable Register 0 */
#define REG_PDCA_IDR0              (*(WoReg  *)0x400A2024UL) /**< \brief (PDCA) Interrupt Disable Register 0 */
#define REG_PDCA_IMR0              (*(RoReg  *)0x400A2028UL) /**< \brief (PDCA) Interrupt Mask Register 0 */
#define REG_PDCA_ISR0              (*(RoReg  *)0x400A202CUL) /**< \brief (PDCA) Interrupt Status Register 0 */
#define REG_PDCA_MAR1              (*(RwReg  *)0x400A2040UL) /**< \brief (PDCA) Memory Address Register 1 */
#define REG_PDCA_PSR1              (*(RwReg  *)0x400A2044UL) /**< \brief (PDCA) Peripheral Select Register 1 */
#define REG_PDCA_TCR1              (*(RwReg  *)0x400A2048UL) /**< \brief (PDCA) Transfer Counter Register 1 */
#define REG_PDCA_MARR1             (*(RwReg  *)0x400A204CUL) /**< \brief (PDCA) Memory Address Reload Register 1 */
#define REG_PDCA_TCRR1             (*(RwReg  *)0x400A2050UL) /**< \brief (PDCA) Transfer Counter Reload Register 1 */
#define REG_PDCA_CR1               (*(WoReg  *)0x400A2054UL) /**< \brief (PDCA) Control Register 1 */
#define REG_PDCA_MR1               (*(RwReg  *)0x400A2058UL) /**< \brief (PDCA) Mode Register 1 */
#define REG_PDCA_SR1               (*(RoReg  *)0x400A205CUL) /**< \brief (PDCA) Status Register 1 */
#define REG_PDCA_IER1              (*(WoReg  *)0x400A2060UL) /**< \brief (PDCA) Interrupt Enable Register 1 */
#define REG_PDCA_IDR1              (*(WoReg  *)0x400A2064UL) /**< \brief (PDCA) Interrupt Disable Register 1 */
#define REG_PDCA_IMR1              (*(RoReg  *)0x400A2068UL) /**< \brief (PDCA) Interrupt Mask Register 1 */
#define REG_PDCA_ISR1              (*(RoReg  *)0x400A206CUL) /**< \brief (PDCA) Interrupt Status Register 1 */
#define REG_PDCA_MAR2              (*(RwReg  *)0x400A2080UL) /**< \brief (PDCA) Memory Address Register 2 */
#define REG_PDCA_PSR2              (*(RwReg  *)0x400A2084UL) /**< \brief (PDCA) Peripheral Select Register 2 */
#define REG_PDCA_TCR2              (*(RwReg  *)0x400A2088UL) /**< \brief (PDCA) Transfer Counter Register 2 */
#define REG_PDCA_MARR2             (*(RwReg  *)0x400A208CUL) /**< \brief (PDCA) Memory Address Reload Register 2 */
#define REG_PDCA_TCRR2             (*(RwReg  *)0x400A2090UL) /**< \brief (PDCA) Transfer Counter Reload Register 2 */
#define REG_PDCA_CR2               (*(WoReg  *)0x400A2094UL) /**< \brief (PDCA) Control Register 2 */
#define REG_PDCA_MR2               (*(RwReg  *)0x400A2098UL) /**< \brief (PDCA) Mode Register 2 */
#define REG_PDCA_SR2               (*(RoReg  *)0x400A209CUL) /**< \brief (PDCA) Status Register 2 */
#define REG_PDCA_IER2              (*(WoReg  *)0x400A20A0UL) /**< \brief (PDCA) Interrupt Enable Register 2 */
#define REG_PDCA_IDR2              (*(WoReg  *)0x400A20A4UL) /**< \brief (PDCA) Interrupt Disable Register 2 */
#define REG_PDCA_IMR2              (*(RoReg  *)0x400A20A8UL) /**< \brief (PDCA) Interrupt Mask Register 2 */
#define REG_PDCA_ISR2              (*(RoReg  *)0x400A20ACUL) /**< \brief (PDCA) Interrupt Status Register 2 */
#define REG_PDCA_MAR3              (*(RwReg  *)0x400A20C0UL) /**< \brief (PDCA) Memory Address Register 3 */
#define REG_PDCA_PSR3              (*(RwReg  *)0x400A20C4UL) /**< \brief (PDCA) Peripheral Select Register 3 */
#define REG_PDCA_TCR3              (*(RwReg  *)0x400A20C8UL) /**< \brief (PDCA) Transfer Counter Register 3 */
#define REG_PDCA_MARR3             (*(RwReg  *)0x400A20CCUL) /**< \brief (PDCA) Memory Address Reload Register 3 */
#define REG_PDCA_TCRR3             (*(RwReg  *)0x400A20D0UL) /**< \brief (PDCA) Transfer Counter Reload Register 3 */
#define REG_PDCA_CR3               (*(WoReg  *)0x400A20D4UL) /**< \brief (PDCA) Control Register 3 */
#define REG_PDCA_MR3               (*(RwReg  *)0x400A20D8UL) /**< \brief (PDCA) Mode Register 3 */
#define REG_PDCA_SR3               (*(RoReg  *)0x400A20DCUL) /**< \brief (PDCA) Status Register 3 */
#define REG_PDCA_IER3              (*(WoReg  *)0x400A20E0UL) /**< \brief (PDCA) Interrupt Enable Register 3 */
#define REG_PDCA_IDR3              (*(WoReg  *)0x400A20E4UL) /**< \brief (PDCA) Interrupt Disable Register 3 */
#define REG_PDCA_IMR3              (*(RoReg  *)0x400A20E8UL) /**< \brief (PDCA) Interrupt Mask Register 3 */
#define REG_PDCA_ISR3              (*(RoReg  *)0x400A20ECUL) /**< \brief (PDCA) Interrupt Status Register 3 */
#define REG_PDCA_MAR4              (*(RwReg  *)0x400A2100UL) /**< \brief (PDCA) Memory Address Register 4 */
#define REG_PDCA_PSR4              (*(RwReg  *)0x400A2104UL) /**< \brief (PDCA) Peripheral Select Register 4 */
#define REG_PDCA_TCR4              (*(RwReg  *)0x400A2108UL) /**< \brief (PDCA) Transfer Counter Register 4 */
#define REG_PDCA_MARR4             (*(RwReg  *)0x400A210CUL) /**< \brief (PDCA) Memory Address Reload Register 4 */
#define REG_PDCA_TCRR4             (*(RwReg  *)0x400A2110UL) /**< \brief (PDCA) Transfer Counter Reload Register 4 */
#define REG_PDCA_CR4               (*(WoReg  *)0x400A2114UL) /**< \brief (PDCA) Control Register 4 */
#define REG_PDCA_MR4               (*(RwReg  *)0x400A2118UL) /**< \brief (PDCA) Mode Register 4 */
#define REG_PDCA_SR4               (*(RoReg  *)0x400A211CUL) /**< \brief (PDCA) Status Register 4 */
#define REG_PDCA_IER4              (*(WoReg  *)0x400A2120UL) /**< \brief (PDCA) Interrupt Enable Register 4 */
#define REG_PDCA_IDR4              (*(WoReg  *)0x400A2124UL) /**< \brief (PDCA) Interrupt Disable Register 4 */
#define REG_PDCA_IMR4              (*(RoReg  *)0x400A2128UL) /**< \brief (PDCA) Interrupt Mask Register 4 */
#define REG_PDCA_ISR4              (*(RoReg  *)0x400A212CUL) /**< \brief (PDCA) Interrupt Status Register 4 */
#define REG_PDCA_MAR5              (*(RwReg  *)0x400A2140UL) /**< \brief (PDCA) Memory Address Register 5 */
#define REG_PDCA_PSR5              (*(RwReg  *)0x400A2144UL) /**< \brief (PDCA) Peripheral Select Register 5 */
#define REG_PDCA_TCR5              (*(RwReg  *)0x400A2148UL) /**< \brief (PDCA) Transfer Counter Register 5 */
#define REG_PDCA_MARR5             (*(RwReg  *)0x400A214CUL) /**< \brief (PDCA) Memory Address Reload Register 5 */
#define REG_PDCA_TCRR5             (*(RwReg  *)0x400A2150UL) /**< \brief (PDCA) Transfer Counter Reload Register 5 */
#define REG_PDCA_CR5               (*(WoReg  *)0x400A2154UL) /**< \brief (PDCA) Control Register 5 */
#define REG_PDCA_MR5               (*(RwReg  *)0x400A2158UL) /**< \brief (PDCA) Mode Register 5 */
#define REG_PDCA_SR5               (*(RoReg  *)0x400A215CUL) /**< \brief (PDCA) Status Register 5 */
#define REG_PDCA_IER5              (*(WoReg  *)0x400A2160UL) /**< \brief (PDCA) Interrupt Enable Register 5 */
#define REG_PDCA_IDR5              (*(WoReg  *)0x400A2164UL) /**< \brief (PDCA) Interrupt Disable Register 5 */
#define REG_PDCA_IMR5              (*(RoReg  *)0x400A2168UL) /**< \brief (PDCA) Interrupt Mask Register 5 */
#define REG_PDCA_ISR5              (*(RoReg  *)0x400A216CUL) /**< \brief (PDCA) Interrupt Status Register 5 */
#define REG_PDCA_MAR6              (*(RwReg  *)0x400A2180UL) /**< \brief (PDCA) Memory Address Register 6 */
#define REG_PDCA_PSR6              (*(RwReg  *)0x400A2184UL) /**< \brief (PDCA) Peripheral Select Register 6 */
#define REG_PDCA_TCR6              (*(RwReg  *)0x400A2188UL) /**< \brief (PDCA) Transfer Counter Register 6 */
#define REG_PDCA_MARR6             (*(RwReg  *)0x400A218CUL) /**< \brief (PDCA) Memory Address Reload Register 6 */
#define REG_PDCA_TCRR6             (*(RwReg  *)0x400A2190UL) /**< \brief (PDCA) Transfer Counter Reload Register 6 */
#define REG_PDCA_CR6               (*(WoReg  *)0x400A2194UL) /**< \brief (PDCA) Control Register 6 */
#define REG_PDCA_MR6               (*(RwReg  *)0x400A2198UL) /**< \brief (PDCA) Mode Register 6 */
#define REG_PDCA_SR6               (*(RoReg  *)0x400A219CUL) /**< \brief (PDCA) Status Register 6 */
#define REG_PDCA_IER6              (*(WoReg  *)0x400A21A0UL) /**< \brief (PDCA) Interrupt Enable Register 6 */
#define REG_PDCA_IDR6              (*(WoReg  *)0x400A21A4UL) /**< \brief (PDCA) Interrupt Disable Register 6 */
#define REG_PDCA_IMR6              (*(RoReg  *)0x400A21A8UL) /**< \brief (PDCA) Interrupt Mask Register 6 */
#define REG_PDCA_ISR6              (*(RoReg  *)0x400A21ACUL) /**< \brief (PDCA) Interrupt Status Register 6 */
#define REG_PDCA_MAR7              (*(RwReg  *)0x400A21C0UL) /**< \brief (PDCA) Memory Address Register 7 */
#define REG_PDCA_PSR7              (*(RwReg  *)0x400A21C4UL) /**< \brief (PDCA) Peripheral Select Register 7 */
#define REG_PDCA_TCR7              (*(RwReg  *)0x400A21C8UL) /**< \brief (PDCA) Transfer Counter Register 7 */
#define REG_PDCA_MARR7             (*(RwReg  *)0x400A21CCUL) /**< \brief (PDCA) Memory Address Reload Register 7 */
#define REG_PDCA_TCRR7             (*(RwReg  *)0x400A21D0UL) /**< \brief (PDCA) Transfer Counter Reload Register 7 */
#define REG_PDCA_CR7               (*(WoReg  *)0x400A21D4UL) /**< \brief (PDCA) Control Register 7 */
#define REG_PDCA_MR7               (*(RwReg  *)0x400A21D8UL) /**< \brief (PDCA) Mode Register 7 */
#define REG_PDCA_SR7               (*(RoReg  *)0x400A21DCUL) /**< \brief (PDCA) Status Register 7 */
#define REG_PDCA_IER7              (*(WoReg  *)0x400A21E0UL) /**< \brief (PDCA) Interrupt Enable Register 7 */
#define REG_PDCA_IDR7              (*(WoReg  *)0x400A21E4UL) /**< \brief (PDCA) Interrupt Disable Register 7 */
#define REG_PDCA_IMR7              (*(RoReg  *)0x400A21E8UL) /**< \brief (PDCA) Interrupt Mask Register 7 */
#define REG_PDCA_ISR7              (*(RoReg  *)0x400A21ECUL) /**< \brief (PDCA) Interrupt Status Register 7 */
#define REG_PDCA_MAR8              (*(RwReg  *)0x400A2200UL) /**< \brief (PDCA) Memory Address Register 8 */
#define REG_PDCA_PSR8              (*(RwReg  *)0x400A2204UL) /**< \brief (PDCA) Peripheral Select Register 8 */
#define REG_PDCA_TCR8              (*(RwReg  *)0x400A2208UL) /**< \brief (PDCA) Transfer Counter Register 8 */
#define REG_PDCA_MARR8             (*(RwReg  *)0x400A220CUL) /**< \brief (PDCA) Memory Address Reload Register 8 */
#define REG_PDCA_TCRR8             (*(RwReg  *)0x400A2210UL) /**< \brief (PDCA) Transfer Counter Reload Register 8 */
#define REG_PDCA_CR8               (*(WoReg  *)0x400A2214UL) /**< \brief (PDCA) Control Register 8 */
#define REG_PDCA_MR8               (*(RwReg  *)0x400A2218UL) /**< \brief (PDCA) Mode Register 8 */
#define REG_PDCA_SR8               (*(RoReg  *)0x400A221CUL) /**< \brief (PDCA) Status Register 8 */
#define REG_PDCA_IER8              (*(WoReg  *)0x400A2220UL) /**< \brief (PDCA) Interrupt Enable Register 8 */
#define REG_PDCA_IDR8              (*(WoReg  *)0x400A2224UL) /**< \brief (PDCA) Interrupt Disable Register 8 */
#define REG_PDCA_IMR8              (*(RoReg  *)0x400A2228UL) /**< \brief (PDCA) Interrupt Mask Register 8 */
#define REG_PDCA_ISR8              (*(RoReg  *)0x400A222CUL) /**< \brief (PDCA) Interrupt Status Register 8 */
#define REG_PDCA_MAR9              (*(RwReg  *)0x400A2240UL) /**< \brief (PDCA) Memory Address Register 9 */
#define REG_PDCA_PSR9              (*(RwReg  *)0x400A2244UL) /**< \brief (PDCA) Peripheral Select Register 9 */
#define REG_PDCA_TCR9              (*(RwReg  *)0x400A2248UL) /**< \brief (PDCA) Transfer Counter Register 9 */
#define REG_PDCA_MARR9             (*(RwReg  *)0x400A224CUL) /**< \brief (PDCA) Memory Address Reload Register 9 */
#define REG_PDCA_TCRR9             (*(RwReg  *)0x400A2250UL) /**< \brief (PDCA) Transfer Counter Reload Register 9 */
#define REG_PDCA_CR9               (*(WoReg  *)0x400A2254UL) /**< \brief (PDCA) Control Register 9 */
#define REG_PDCA_MR9               (*(RwReg  *)0x400A2258UL) /**< \brief (PDCA) Mode Register 9 */
#define REG_PDCA_SR9               (*(RoReg  *)0x400A225CUL) /**< \brief (PDCA) Status Register 9 */
#define REG_PDCA_IER9              (*(WoReg  *)0x400A2260UL) /**< \brief (PDCA) Interrupt Enable Register 9 */
#define REG_PDCA_IDR9              (*(WoReg  *)0x400A2264UL) /**< \brief (PDCA) Interrupt Disable Register 9 */
#define REG_PDCA_IMR9              (*(RoReg  *)0x400A2268UL) /**< \brief (PDCA) Interrupt Mask Register 9 */
#define REG_PDCA_ISR9              (*(RoReg  *)0x400A226CUL) /**< \brief (PDCA) Interrupt Status Register 9 */
#define REG_PDCA_MAR10             (*(RwReg  *)0x400A2280UL) /**< \brief (PDCA) Memory Address Register 10 */
#define REG_PDCA_PSR10             (*(RwReg  *)0x400A2284UL) /**< \brief (PDCA) Peripheral Select Register 10 */
#define REG_PDCA_TCR10             (*(RwReg  *)0x400A2288UL) /**< \brief (PDCA) Transfer Counter Register 10 */
#define REG_PDCA_MARR10            (*(RwReg  *)0x400A228CUL) /**< \brief (PDCA) Memory Address Reload Register 10 */
#define REG_PDCA_TCRR10            (*(RwReg  *)0x400A2290UL) /**< \brief (PDCA) Transfer Counter Reload Register 10 */
#define REG_PDCA_CR10              (*(WoReg  *)0x400A2294UL) /**< \brief (PDCA) Control Register 10 */
#define REG_PDCA_MR10              (*(RwReg  *)0x400A2298UL) /**< \brief (PDCA) Mode Register 10 */
#define REG_PDCA_SR10              (*(RoReg  *)0x400A229CUL) /**< \brief (PDCA) Status Register 10 */
#define REG_PDCA_IER10             (*(WoReg  *)0x400A22A0UL) /**< \brief (PDCA) Interrupt Enable Register 10 */
#define REG_PDCA_IDR10             (*(WoReg  *)0x400A22A4UL) /**< \brief (PDCA) Interrupt Disable Register 10 */
#define REG_PDCA_IMR10             (*(RoReg  *)0x400A22A8UL) /**< \brief (PDCA) Interrupt Mask Register 10 */
#define REG_PDCA_ISR10             (*(RoReg  *)0x400A22ACUL) /**< \brief (PDCA) Interrupt Status Register 10 */
#define REG_PDCA_MAR11             (*(RwReg  *)0x400A22C0UL) /**< \brief (PDCA) Memory Address Register 11 */
#define REG_PDCA_PSR11             (*(RwReg  *)0x400A22C4UL) /**< \brief (PDCA) Peripheral Select Register 11 */
#define REG_PDCA_TCR11             (*(RwReg  *)0x400A22C8UL) /**< \brief (PDCA) Transfer Counter Register 11 */
#define REG_PDCA_MARR11            (*(RwReg  *)0x400A22CCUL) /**< \brief (PDCA) Memory Address Reload Register 11 */
#define REG_PDCA_TCRR11            (*(RwReg  *)0x400A22D0UL) /**< \brief (PDCA) Transfer Counter Reload Register 11 */
#define REG_PDCA_CR11              (*(WoReg  *)0x400A22D4UL) /**< \brief (PDCA) Control Register 11 */
#define REG_PDCA_MR11              (*(RwReg  *)0x400A22D8UL) /**< \brief (PDCA) Mode Register 11 */
#define REG_PDCA_SR11              (*(RoReg  *)0x400A22DCUL) /**< \brief (PDCA) Status Register 11 */
#define REG_PDCA_IER11             (*(WoReg  *)0x400A22E0UL) /**< \brief (PDCA) Interrupt Enable Register 11 */
#define REG_PDCA_IDR11             (*(WoReg  *)0x400A22E4UL) /**< \brief (PDCA) Interrupt Disable Register 11 */
#define REG_PDCA_IMR11             (*(RoReg  *)0x400A22E8UL) /**< \brief (PDCA) Interrupt Mask Register 11 */
#define REG_PDCA_ISR11             (*(RoReg  *)0x400A22ECUL) /**< \brief (PDCA) Interrupt Status Register 11 */
#define REG_PDCA_MAR12             (*(RwReg  *)0x400A2300UL) /**< \brief (PDCA) Memory Address Register 12 */
#define REG_PDCA_PSR12             (*(RwReg  *)0x400A2304UL) /**< \brief (PDCA) Peripheral Select Register 12 */
#define REG_PDCA_TCR12             (*(RwReg  *)0x400A2308UL) /**< \brief (PDCA) Transfer Counter Register 12 */
#define REG_PDCA_MARR12            (*(RwReg  *)0x400A230CUL) /**< \brief (PDCA) Memory Address Reload Register 12 */
#define REG_PDCA_TCRR12            (*(RwReg  *)0x400A2310UL) /**< \brief (PDCA) Transfer Counter Reload Register 12 */
#define REG_PDCA_CR12              (*(WoReg  *)0x400A2314UL) /**< \brief (PDCA) Control Register 12 */
#define REG_PDCA_MR12              (*(RwReg  *)0x400A2318UL) /**< \brief (PDCA) Mode Register 12 */
#define REG_PDCA_SR12              (*(RoReg  *)0x400A231CUL) /**< \brief (PDCA) Status Register 12 */
#define REG_PDCA_IER12             (*(WoReg  *)0x400A2320UL) /**< \brief (PDCA) Interrupt Enable Register 12 */
#define REG_PDCA_IDR12             (*(WoReg  *)0x400A2324UL) /**< \brief (PDCA) Interrupt Disable Register 12 */
#define REG_PDCA_IMR12             (*(RoReg  *)0x400A2328UL) /**< \brief (PDCA) Interrupt Mask Register 12 */
#define REG_PDCA_ISR12             (*(RoReg  *)0x400A232CUL) /**< \brief (PDCA) Interrupt Status Register 12 */
#define REG_PDCA_MAR13             (*(RwReg  *)0x400A2340UL) /**< \brief (PDCA) Memory Address Register 13 */
#define REG_PDCA_PSR13             (*(RwReg  *)0x400A2344UL) /**< \brief (PDCA) Peripheral Select Register 13 */
#define REG_PDCA_TCR13             (*(RwReg  *)0x400A2348UL) /**< \brief (PDCA) Transfer Counter Register 13 */
#define REG_PDCA_MARR13            (*(RwReg  *)0x400A234CUL) /**< \brief (PDCA) Memory Address Reload Register 13 */
#define REG_PDCA_TCRR13            (*(RwReg  *)0x400A2350UL) /**< \brief (PDCA) Transfer Counter Reload Register 13 */
#define REG_PDCA_CR13              (*(WoReg  *)0x400A2354UL) /**< \brief (PDCA) Control Register 13 */
#define REG_PDCA_MR13              (*(RwReg  *)0x400A2358UL) /**< \brief (PDCA) Mode Register 13 */
#define REG_PDCA_SR13              (*(RoReg  *)0x400A235CUL) /**< \brief (PDCA) Status Register 13 */
#define REG_PDCA_IER13             (*(WoReg  *)0x400A2360UL) /**< \brief (PDCA) Interrupt Enable Register 13 */
#define REG_PDCA_IDR13             (*(WoReg  *)0x400A2364UL) /**< \brief (PDCA) Interrupt Disable Register 13 */
#define REG_PDCA_IMR13             (*(RoReg  *)0x400A2368UL) /**< \brief (PDCA) Interrupt Mask Register 13 */
#define REG_PDCA_ISR13             (*(RoReg  *)0x400A236CUL) /**< \brief (PDCA) Interrupt Status Register 13 */
#define REG_PDCA_MAR14             (*(RwReg  *)0x400A2380UL) /**< \brief (PDCA) Memory Address Register 14 */
#define REG_PDCA_PSR14             (*(RwReg  *)0x400A2384UL) /**< \brief (PDCA) Peripheral Select Register 14 */
#define REG_PDCA_TCR14             (*(RwReg  *)0x400A2388UL) /**< \brief (PDCA) Transfer Counter Register 14 */
#define REG_PDCA_MARR14            (*(RwReg  *)0x400A238CUL) /**< \brief (PDCA) Memory Address Reload Register 14 */
#define REG_PDCA_TCRR14            (*(RwReg  *)0x400A2390UL) /**< \brief (PDCA) Transfer Counter Reload Register 14 */
#define REG_PDCA_CR14              (*(WoReg  *)0x400A2394UL) /**< \brief (PDCA) Control Register 14 */
#define REG_PDCA_MR14              (*(RwReg  *)0x400A2398UL) /**< \brief (PDCA) Mode Register 14 */
#define REG_PDCA_SR14              (*(RoReg  *)0x400A239CUL) /**< \brief (PDCA) Status Register 14 */
#define REG_PDCA_IER14             (*(WoReg  *)0x400A23A0UL) /**< \brief (PDCA) Interrupt Enable Register 14 */
#define REG_PDCA_IDR14             (*(WoReg  *)0x400A23A4UL) /**< \brief (PDCA) Interrupt Disable Register 14 */
#define REG_PDCA_IMR14             (*(RoReg  *)0x400A23A8UL) /**< \brief (PDCA) Interrupt Mask Register 14 */
#define REG_PDCA_ISR14             (*(RoReg  *)0x400A23ACUL) /**< \brief (PDCA) Interrupt Status Register 14 */
#define REG_PDCA_MAR15             (*(RwReg  *)0x400A23C0UL) /**< \brief (PDCA) Memory Address Register 15 */
#define REG_PDCA_PSR15             (*(RwReg  *)0x400A23C4UL) /**< \brief (PDCA) Peripheral Select Register 15 */
#define REG_PDCA_TCR15             (*(RwReg  *)0x400A23C8UL) /**< \brief (PDCA) Transfer Counter Register 15 */
#define REG_PDCA_MARR15            (*(RwReg  *)0x400A23CCUL) /**< \brief (PDCA) Memory Address Reload Register 15 */
#define REG_PDCA_TCRR15            (*(RwReg  *)0x400A23D0UL) /**< \brief (PDCA) Transfer Counter Reload Register 15 */
#define REG_PDCA_CR15              (*(WoReg  *)0x400A23D4UL) /**< \brief (PDCA) Control Register 15 */
#define REG_PDCA_MR15              (*(RwReg  *)0x400A23D8UL) /**< \brief (PDCA) Mode Register 15 */
#define REG_PDCA_SR15              (*(RoReg  *)0x400A23DCUL) /**< \brief (PDCA) Status Register 15 */
#define REG_PDCA_IER15             (*(WoReg  *)0x400A23E0UL) /**< \brief (PDCA) Interrupt Enable Register 15 */
#define REG_PDCA_IDR15             (*(WoReg  *)0x400A23E4UL) /**< \brief (PDCA) Interrupt Disable Register 15 */
#define REG_PDCA_IMR15             (*(RoReg  *)0x400A23E8UL) /**< \brief (PDCA) Interrupt Mask Register 15 */
#define REG_PDCA_ISR15             (*(RoReg  *)0x400A23ECUL) /**< \brief (PDCA) Interrupt Status Register 15 */
#define REG_PDCA_PCONTROL          (*(RwReg  *)0x400A2800UL) /**< \brief (PDCA) Performance Control Register */
#define REG_PDCA_PRDATA0           (*(RoReg  *)0x400A2804UL) /**< \brief (PDCA) Channel 0 Read Data Cycles */
#define REG_PDCA_PRSTALL0          (*(RoReg  *)0x400A2808UL) /**< \brief (PDCA) Channel 0 Read Stall Cycles */
#define REG_PDCA_PRLAT0            (*(RoReg  *)0x400A280CUL) /**< \brief (PDCA) Channel 0 Read Max Latency */
#define REG_PDCA_PWDATA0           (*(RoReg  *)0x400A2810UL) /**< \brief (PDCA) Channel 0 Write Data Cycles */
#define REG_PDCA_PWSTALL0          (*(RoReg  *)0x400A2814UL) /**< \brief (PDCA) Channel 0 Write Stall Cycles */
#define REG_PDCA_PWLAT0            (*(RoReg  *)0x400A2818UL) /**< \brief (PDCA) Channel0 Write Max Latency */
#define REG_PDCA_PRDATA1           (*(RoReg  *)0x400A281CUL) /**< \brief (PDCA) Channel 1 Read Data Cycles */
#define REG_PDCA_PRSTALL1          (*(RoReg  *)0x400A2820UL) /**< \brief (PDCA) Channel Read Stall Cycles */
#define REG_PDCA_PRLAT1            (*(RoReg  *)0x400A2824UL) /**< \brief (PDCA) Channel 1 Read Max Latency */
#define REG_PDCA_PWDATA1           (*(RoReg  *)0x400A2828UL) /**< \brief (PDCA) Channel 1 Write Data Cycles */
#define REG_PDCA_PWSTALL1          (*(RoReg  *)0x400A282CUL) /**< \brief (PDCA) Channel 1 Write stall Cycles */
#define REG_PDCA_PWLAT1            (*(RoReg  *)0x400A2830UL) /**< \brief (PDCA) Channel 1 Read Max Latency */
#define REG_PDCA_VERSION           (*(RoReg  *)0x400A2834UL) /**< \brief (PDCA) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for PDCA peripheral ========== */
#define PDCA_CHANNEL_LENGTH         16      
#define PDCA_CLK_AHB_ID             0       
#define PDCA_MON_CH0_IMPL           0       
#define PDCA_MON_CH1_IMPL           0       

#endif /* _SAM4L_PDCA_INSTANCE_ */
