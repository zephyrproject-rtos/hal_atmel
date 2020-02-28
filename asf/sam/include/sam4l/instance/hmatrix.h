/**
 * \file
 *
 * \brief Instance description for HMATRIX
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

#ifndef _SAM4L_HMATRIX_INSTANCE_
#define _SAM4L_HMATRIX_INSTANCE_

/* ========== Register definition for HMATRIX peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_HMATRIX_MCFG0          (0x400A1000) /**< \brief (HMATRIX) Master Configuration Register 0 */
#define REG_HMATRIX_MCFG1          (0x400A1004) /**< \brief (HMATRIX) Master Configuration Register 1 */
#define REG_HMATRIX_MCFG2          (0x400A1008) /**< \brief (HMATRIX) Master Configuration Register 2 */
#define REG_HMATRIX_MCFG3          (0x400A100C) /**< \brief (HMATRIX) Master Configuration Register 3 */
#define REG_HMATRIX_MCFG4          (0x400A1010) /**< \brief (HMATRIX) Master Configuration Register 4 */
#define REG_HMATRIX_MCFG5          (0x400A1014) /**< \brief (HMATRIX) Master Configuration Register 5 */
#define REG_HMATRIX_MCFG6          (0x400A1018) /**< \brief (HMATRIX) Master Configuration Register 6 */
#define REG_HMATRIX_MCFG7          (0x400A101C) /**< \brief (HMATRIX) Master Configuration Register 7 */
#define REG_HMATRIX_MCFG8          (0x400A1020) /**< \brief (HMATRIX) Master Configuration Register 8 */
#define REG_HMATRIX_MCFG9          (0x400A1024) /**< \brief (HMATRIX) Master Configuration Register 9 */
#define REG_HMATRIX_MCFG10         (0x400A1028) /**< \brief (HMATRIX) Master Configuration Register 10 */
#define REG_HMATRIX_MCFG11         (0x400A102C) /**< \brief (HMATRIX) Master Configuration Register 11 */
#define REG_HMATRIX_MCFG12         (0x400A1030) /**< \brief (HMATRIX) Master Configuration Register 12 */
#define REG_HMATRIX_MCFG13         (0x400A1034) /**< \brief (HMATRIX) Master Configuration Register 13 */
#define REG_HMATRIX_MCFG14         (0x400A1038) /**< \brief (HMATRIX) Master Configuration Register 14 */
#define REG_HMATRIX_MCFG15         (0x400A103C) /**< \brief (HMATRIX) Master Configuration Register 15 */
#define REG_HMATRIX_SCFG0          (0x400A1040) /**< \brief (HMATRIX) Slave Configuration Register 0 */
#define REG_HMATRIX_SCFG1          (0x400A1044) /**< \brief (HMATRIX) Slave Configuration Register 1 */
#define REG_HMATRIX_SCFG2          (0x400A1048) /**< \brief (HMATRIX) Slave Configuration Register 2 */
#define REG_HMATRIX_SCFG3          (0x400A104C) /**< \brief (HMATRIX) Slave Configuration Register 3 */
#define REG_HMATRIX_SCFG4          (0x400A1050) /**< \brief (HMATRIX) Slave Configuration Register 4 */
#define REG_HMATRIX_SCFG5          (0x400A1054) /**< \brief (HMATRIX) Slave Configuration Register 5 */
#define REG_HMATRIX_SCFG6          (0x400A1058) /**< \brief (HMATRIX) Slave Configuration Register 6 */
#define REG_HMATRIX_SCFG7          (0x400A105C) /**< \brief (HMATRIX) Slave Configuration Register 7 */
#define REG_HMATRIX_SCFG8          (0x400A1060) /**< \brief (HMATRIX) Slave Configuration Register 8 */
#define REG_HMATRIX_SCFG9          (0x400A1064) /**< \brief (HMATRIX) Slave Configuration Register 9 */
#define REG_HMATRIX_SCFG10         (0x400A1068) /**< \brief (HMATRIX) Slave Configuration Register 10 */
#define REG_HMATRIX_SCFG11         (0x400A106C) /**< \brief (HMATRIX) Slave Configuration Register 11 */
#define REG_HMATRIX_SCFG12         (0x400A1070) /**< \brief (HMATRIX) Slave Configuration Register 12 */
#define REG_HMATRIX_SCFG13         (0x400A1074) /**< \brief (HMATRIX) Slave Configuration Register 13 */
#define REG_HMATRIX_SCFG14         (0x400A1078) /**< \brief (HMATRIX) Slave Configuration Register 14 */
#define REG_HMATRIX_SCFG15         (0x400A107C) /**< \brief (HMATRIX) Slave Configuration Register 15 */
#define REG_HMATRIX_PRAS0          (0x400A1080) /**< \brief (HMATRIX) Priority Register A for Slave 0 */
#define REG_HMATRIX_PRBS0          (0x400A1084) /**< \brief (HMATRIX) Priority Register B for Slave 0 */
#define REG_HMATRIX_PRAS1          (0x400A1088) /**< \brief (HMATRIX) Priority Register A for Slave 1 */
#define REG_HMATRIX_PRBS1          (0x400A108C) /**< \brief (HMATRIX) Priority Register B for Slave 1 */
#define REG_HMATRIX_PRAS2          (0x400A1090) /**< \brief (HMATRIX) Priority Register A for Slave 2 */
#define REG_HMATRIX_PRBS2          (0x400A1094) /**< \brief (HMATRIX) Priority Register B for Slave 2 */
#define REG_HMATRIX_PRAS3          (0x400A1098) /**< \brief (HMATRIX) Priority Register A for Slave 3 */
#define REG_HMATRIX_PRBS3          (0x400A109C) /**< \brief (HMATRIX) Priority Register B for Slave 3 */
#define REG_HMATRIX_PRAS4          (0x400A10A0) /**< \brief (HMATRIX) Priority Register A for Slave 4 */
#define REG_HMATRIX_PRBS4          (0x400A10A4) /**< \brief (HMATRIX) Priority Register B for Slave 4 */
#define REG_HMATRIX_PRAS5          (0x400A10A8) /**< \brief (HMATRIX) Priority Register A for Slave 5 */
#define REG_HMATRIX_PRBS5          (0x400A10AC) /**< \brief (HMATRIX) Priority Register B for Slave 5 */
#define REG_HMATRIX_PRAS6          (0x400A10B0) /**< \brief (HMATRIX) Priority Register A for Slave 6 */
#define REG_HMATRIX_PRBS6          (0x400A10B4) /**< \brief (HMATRIX) Priority Register B for Slave 6 */
#define REG_HMATRIX_PRAS7          (0x400A10B8) /**< \brief (HMATRIX) Priority Register A for Slave 7 */
#define REG_HMATRIX_PRBS7          (0x400A10BC) /**< \brief (HMATRIX) Priority Register B for Slave 7 */
#define REG_HMATRIX_PRAS8          (0x400A10C0) /**< \brief (HMATRIX) Priority Register A for Slave 8 */
#define REG_HMATRIX_PRBS8          (0x400A10C4) /**< \brief (HMATRIX) Priority Register B for Slave 8 */
#define REG_HMATRIX_PRAS9          (0x400A10C8) /**< \brief (HMATRIX) Priority Register A for Slave 9 */
#define REG_HMATRIX_PRBS9          (0x400A10CC) /**< \brief (HMATRIX) Priority Register B for Slave 9 */
#define REG_HMATRIX_PRAS10         (0x400A10D0) /**< \brief (HMATRIX) Priority Register A for Slave 10 */
#define REG_HMATRIX_PRBS10         (0x400A10D4) /**< \brief (HMATRIX) Priority Register B for Slave 10 */
#define REG_HMATRIX_PRAS11         (0x400A10D8) /**< \brief (HMATRIX) Priority Register A for Slave 11 */
#define REG_HMATRIX_PRBS11         (0x400A10DC) /**< \brief (HMATRIX) Priority Register B for Slave 11 */
#define REG_HMATRIX_PRAS12         (0x400A10E0) /**< \brief (HMATRIX) Priority Register A for Slave 12 */
#define REG_HMATRIX_PRBS12         (0x400A10E4) /**< \brief (HMATRIX) Priority Register B for Slave 12 */
#define REG_HMATRIX_PRAS13         (0x400A10E8) /**< \brief (HMATRIX) Priority Register A for Slave 13 */
#define REG_HMATRIX_PRBS13         (0x400A10EC) /**< \brief (HMATRIX) Priority Register B for Slave 13 */
#define REG_HMATRIX_PRAS14         (0x400A10F0) /**< \brief (HMATRIX) Priority Register A for Slave 14 */
#define REG_HMATRIX_PRBS14         (0x400A10F4) /**< \brief (HMATRIX) Priority Register B for Slave 14 */
#define REG_HMATRIX_PRAS15         (0x400A10F8) /**< \brief (HMATRIX) Priority Register A for Slave 15 */
#define REG_HMATRIX_PRBS15         (0x400A10FC) /**< \brief (HMATRIX) Priority Register B for Slave 15 */
#define REG_HMATRIX_MRCR           (0x400A1100) /**< \brief (HMATRIX) Master Remap Control Register */
#define REG_HMATRIX_SFR0           (0x400A1110) /**< \brief (HMATRIX) Special Function Register 0 */
#define REG_HMATRIX_SFR1           (0x400A1114) /**< \brief (HMATRIX) Special Function Register 1 */
#define REG_HMATRIX_SFR2           (0x400A1118) /**< \brief (HMATRIX) Special Function Register 2 */
#define REG_HMATRIX_SFR3           (0x400A111C) /**< \brief (HMATRIX) Special Function Register 3 */
#define REG_HMATRIX_SFR4           (0x400A1120) /**< \brief (HMATRIX) Special Function Register 4 */
#define REG_HMATRIX_SFR5           (0x400A1124) /**< \brief (HMATRIX) Special Function Register 5 */
#define REG_HMATRIX_SFR6           (0x400A1128) /**< \brief (HMATRIX) Special Function Register 6 */
#define REG_HMATRIX_SFR7           (0x400A112C) /**< \brief (HMATRIX) Special Function Register 7 */
#define REG_HMATRIX_SFR8           (0x400A1130) /**< \brief (HMATRIX) Special Function Register 8 */
#define REG_HMATRIX_SFR9           (0x400A1134) /**< \brief (HMATRIX) Special Function Register 9 */
#define REG_HMATRIX_SFR10          (0x400A1138) /**< \brief (HMATRIX) Special Function Register 10 */
#define REG_HMATRIX_SFR11          (0x400A113C) /**< \brief (HMATRIX) Special Function Register 11 */
#define REG_HMATRIX_SFR12          (0x400A1140) /**< \brief (HMATRIX) Special Function Register 12 */
#define REG_HMATRIX_SFR13          (0x400A1144) /**< \brief (HMATRIX) Special Function Register 13 */
#define REG_HMATRIX_SFR14          (0x400A1148) /**< \brief (HMATRIX) Special Function Register 14 */
#define REG_HMATRIX_SFR15          (0x400A114C) /**< \brief (HMATRIX) Special Function Register 15 */
#else
#define REG_HMATRIX_MCFG0          (*(RwReg  *)0x400A1000UL) /**< \brief (HMATRIX) Master Configuration Register 0 */
#define REG_HMATRIX_MCFG1          (*(RwReg  *)0x400A1004UL) /**< \brief (HMATRIX) Master Configuration Register 1 */
#define REG_HMATRIX_MCFG2          (*(RwReg  *)0x400A1008UL) /**< \brief (HMATRIX) Master Configuration Register 2 */
#define REG_HMATRIX_MCFG3          (*(RwReg  *)0x400A100CUL) /**< \brief (HMATRIX) Master Configuration Register 3 */
#define REG_HMATRIX_MCFG4          (*(RwReg  *)0x400A1010UL) /**< \brief (HMATRIX) Master Configuration Register 4 */
#define REG_HMATRIX_MCFG5          (*(RwReg  *)0x400A1014UL) /**< \brief (HMATRIX) Master Configuration Register 5 */
#define REG_HMATRIX_MCFG6          (*(RwReg  *)0x400A1018UL) /**< \brief (HMATRIX) Master Configuration Register 6 */
#define REG_HMATRIX_MCFG7          (*(RwReg  *)0x400A101CUL) /**< \brief (HMATRIX) Master Configuration Register 7 */
#define REG_HMATRIX_MCFG8          (*(RwReg  *)0x400A1020UL) /**< \brief (HMATRIX) Master Configuration Register 8 */
#define REG_HMATRIX_MCFG9          (*(RwReg  *)0x400A1024UL) /**< \brief (HMATRIX) Master Configuration Register 9 */
#define REG_HMATRIX_MCFG10         (*(RwReg  *)0x400A1028UL) /**< \brief (HMATRIX) Master Configuration Register 10 */
#define REG_HMATRIX_MCFG11         (*(RwReg  *)0x400A102CUL) /**< \brief (HMATRIX) Master Configuration Register 11 */
#define REG_HMATRIX_MCFG12         (*(RwReg  *)0x400A1030UL) /**< \brief (HMATRIX) Master Configuration Register 12 */
#define REG_HMATRIX_MCFG13         (*(RwReg  *)0x400A1034UL) /**< \brief (HMATRIX) Master Configuration Register 13 */
#define REG_HMATRIX_MCFG14         (*(RwReg  *)0x400A1038UL) /**< \brief (HMATRIX) Master Configuration Register 14 */
#define REG_HMATRIX_MCFG15         (*(RwReg  *)0x400A103CUL) /**< \brief (HMATRIX) Master Configuration Register 15 */
#define REG_HMATRIX_SCFG0          (*(RwReg  *)0x400A1040UL) /**< \brief (HMATRIX) Slave Configuration Register 0 */
#define REG_HMATRIX_SCFG1          (*(RwReg  *)0x400A1044UL) /**< \brief (HMATRIX) Slave Configuration Register 1 */
#define REG_HMATRIX_SCFG2          (*(RwReg  *)0x400A1048UL) /**< \brief (HMATRIX) Slave Configuration Register 2 */
#define REG_HMATRIX_SCFG3          (*(RwReg  *)0x400A104CUL) /**< \brief (HMATRIX) Slave Configuration Register 3 */
#define REG_HMATRIX_SCFG4          (*(RwReg  *)0x400A1050UL) /**< \brief (HMATRIX) Slave Configuration Register 4 */
#define REG_HMATRIX_SCFG5          (*(RwReg  *)0x400A1054UL) /**< \brief (HMATRIX) Slave Configuration Register 5 */
#define REG_HMATRIX_SCFG6          (*(RwReg  *)0x400A1058UL) /**< \brief (HMATRIX) Slave Configuration Register 6 */
#define REG_HMATRIX_SCFG7          (*(RwReg  *)0x400A105CUL) /**< \brief (HMATRIX) Slave Configuration Register 7 */
#define REG_HMATRIX_SCFG8          (*(RwReg  *)0x400A1060UL) /**< \brief (HMATRIX) Slave Configuration Register 8 */
#define REG_HMATRIX_SCFG9          (*(RwReg  *)0x400A1064UL) /**< \brief (HMATRIX) Slave Configuration Register 9 */
#define REG_HMATRIX_SCFG10         (*(RwReg  *)0x400A1068UL) /**< \brief (HMATRIX) Slave Configuration Register 10 */
#define REG_HMATRIX_SCFG11         (*(RwReg  *)0x400A106CUL) /**< \brief (HMATRIX) Slave Configuration Register 11 */
#define REG_HMATRIX_SCFG12         (*(RwReg  *)0x400A1070UL) /**< \brief (HMATRIX) Slave Configuration Register 12 */
#define REG_HMATRIX_SCFG13         (*(RwReg  *)0x400A1074UL) /**< \brief (HMATRIX) Slave Configuration Register 13 */
#define REG_HMATRIX_SCFG14         (*(RwReg  *)0x400A1078UL) /**< \brief (HMATRIX) Slave Configuration Register 14 */
#define REG_HMATRIX_SCFG15         (*(RwReg  *)0x400A107CUL) /**< \brief (HMATRIX) Slave Configuration Register 15 */
#define REG_HMATRIX_PRAS0          (*(RwReg  *)0x400A1080UL) /**< \brief (HMATRIX) Priority Register A for Slave 0 */
#define REG_HMATRIX_PRBS0          (*(RwReg  *)0x400A1084UL) /**< \brief (HMATRIX) Priority Register B for Slave 0 */
#define REG_HMATRIX_PRAS1          (*(RwReg  *)0x400A1088UL) /**< \brief (HMATRIX) Priority Register A for Slave 1 */
#define REG_HMATRIX_PRBS1          (*(RwReg  *)0x400A108CUL) /**< \brief (HMATRIX) Priority Register B for Slave 1 */
#define REG_HMATRIX_PRAS2          (*(RwReg  *)0x400A1090UL) /**< \brief (HMATRIX) Priority Register A for Slave 2 */
#define REG_HMATRIX_PRBS2          (*(RwReg  *)0x400A1094UL) /**< \brief (HMATRIX) Priority Register B for Slave 2 */
#define REG_HMATRIX_PRAS3          (*(RwReg  *)0x400A1098UL) /**< \brief (HMATRIX) Priority Register A for Slave 3 */
#define REG_HMATRIX_PRBS3          (*(RwReg  *)0x400A109CUL) /**< \brief (HMATRIX) Priority Register B for Slave 3 */
#define REG_HMATRIX_PRAS4          (*(RwReg  *)0x400A10A0UL) /**< \brief (HMATRIX) Priority Register A for Slave 4 */
#define REG_HMATRIX_PRBS4          (*(RwReg  *)0x400A10A4UL) /**< \brief (HMATRIX) Priority Register B for Slave 4 */
#define REG_HMATRIX_PRAS5          (*(RwReg  *)0x400A10A8UL) /**< \brief (HMATRIX) Priority Register A for Slave 5 */
#define REG_HMATRIX_PRBS5          (*(RwReg  *)0x400A10ACUL) /**< \brief (HMATRIX) Priority Register B for Slave 5 */
#define REG_HMATRIX_PRAS6          (*(RwReg  *)0x400A10B0UL) /**< \brief (HMATRIX) Priority Register A for Slave 6 */
#define REG_HMATRIX_PRBS6          (*(RwReg  *)0x400A10B4UL) /**< \brief (HMATRIX) Priority Register B for Slave 6 */
#define REG_HMATRIX_PRAS7          (*(RwReg  *)0x400A10B8UL) /**< \brief (HMATRIX) Priority Register A for Slave 7 */
#define REG_HMATRIX_PRBS7          (*(RwReg  *)0x400A10BCUL) /**< \brief (HMATRIX) Priority Register B for Slave 7 */
#define REG_HMATRIX_PRAS8          (*(RwReg  *)0x400A10C0UL) /**< \brief (HMATRIX) Priority Register A for Slave 8 */
#define REG_HMATRIX_PRBS8          (*(RwReg  *)0x400A10C4UL) /**< \brief (HMATRIX) Priority Register B for Slave 8 */
#define REG_HMATRIX_PRAS9          (*(RwReg  *)0x400A10C8UL) /**< \brief (HMATRIX) Priority Register A for Slave 9 */
#define REG_HMATRIX_PRBS9          (*(RwReg  *)0x400A10CCUL) /**< \brief (HMATRIX) Priority Register B for Slave 9 */
#define REG_HMATRIX_PRAS10         (*(RwReg  *)0x400A10D0UL) /**< \brief (HMATRIX) Priority Register A for Slave 10 */
#define REG_HMATRIX_PRBS10         (*(RwReg  *)0x400A10D4UL) /**< \brief (HMATRIX) Priority Register B for Slave 10 */
#define REG_HMATRIX_PRAS11         (*(RwReg  *)0x400A10D8UL) /**< \brief (HMATRIX) Priority Register A for Slave 11 */
#define REG_HMATRIX_PRBS11         (*(RwReg  *)0x400A10DCUL) /**< \brief (HMATRIX) Priority Register B for Slave 11 */
#define REG_HMATRIX_PRAS12         (*(RwReg  *)0x400A10E0UL) /**< \brief (HMATRIX) Priority Register A for Slave 12 */
#define REG_HMATRIX_PRBS12         (*(RwReg  *)0x400A10E4UL) /**< \brief (HMATRIX) Priority Register B for Slave 12 */
#define REG_HMATRIX_PRAS13         (*(RwReg  *)0x400A10E8UL) /**< \brief (HMATRIX) Priority Register A for Slave 13 */
#define REG_HMATRIX_PRBS13         (*(RwReg  *)0x400A10ECUL) /**< \brief (HMATRIX) Priority Register B for Slave 13 */
#define REG_HMATRIX_PRAS14         (*(RwReg  *)0x400A10F0UL) /**< \brief (HMATRIX) Priority Register A for Slave 14 */
#define REG_HMATRIX_PRBS14         (*(RwReg  *)0x400A10F4UL) /**< \brief (HMATRIX) Priority Register B for Slave 14 */
#define REG_HMATRIX_PRAS15         (*(RwReg  *)0x400A10F8UL) /**< \brief (HMATRIX) Priority Register A for Slave 15 */
#define REG_HMATRIX_PRBS15         (*(RwReg  *)0x400A10FCUL) /**< \brief (HMATRIX) Priority Register B for Slave 15 */
#define REG_HMATRIX_MRCR           (*(RwReg  *)0x400A1100UL) /**< \brief (HMATRIX) Master Remap Control Register */
#define REG_HMATRIX_SFR0           (*(RwReg  *)0x400A1110UL) /**< \brief (HMATRIX) Special Function Register 0 */
#define REG_HMATRIX_SFR1           (*(RwReg  *)0x400A1114UL) /**< \brief (HMATRIX) Special Function Register 1 */
#define REG_HMATRIX_SFR2           (*(RwReg  *)0x400A1118UL) /**< \brief (HMATRIX) Special Function Register 2 */
#define REG_HMATRIX_SFR3           (*(RwReg  *)0x400A111CUL) /**< \brief (HMATRIX) Special Function Register 3 */
#define REG_HMATRIX_SFR4           (*(RwReg  *)0x400A1120UL) /**< \brief (HMATRIX) Special Function Register 4 */
#define REG_HMATRIX_SFR5           (*(RwReg  *)0x400A1124UL) /**< \brief (HMATRIX) Special Function Register 5 */
#define REG_HMATRIX_SFR6           (*(RwReg  *)0x400A1128UL) /**< \brief (HMATRIX) Special Function Register 6 */
#define REG_HMATRIX_SFR7           (*(RwReg  *)0x400A112CUL) /**< \brief (HMATRIX) Special Function Register 7 */
#define REG_HMATRIX_SFR8           (*(RwReg  *)0x400A1130UL) /**< \brief (HMATRIX) Special Function Register 8 */
#define REG_HMATRIX_SFR9           (*(RwReg  *)0x400A1134UL) /**< \brief (HMATRIX) Special Function Register 9 */
#define REG_HMATRIX_SFR10          (*(RwReg  *)0x400A1138UL) /**< \brief (HMATRIX) Special Function Register 10 */
#define REG_HMATRIX_SFR11          (*(RwReg  *)0x400A113CUL) /**< \brief (HMATRIX) Special Function Register 11 */
#define REG_HMATRIX_SFR12          (*(RwReg  *)0x400A1140UL) /**< \brief (HMATRIX) Special Function Register 12 */
#define REG_HMATRIX_SFR13          (*(RwReg  *)0x400A1144UL) /**< \brief (HMATRIX) Special Function Register 13 */
#define REG_HMATRIX_SFR14          (*(RwReg  *)0x400A1148UL) /**< \brief (HMATRIX) Special Function Register 14 */
#define REG_HMATRIX_SFR15          (*(RwReg  *)0x400A114CUL) /**< \brief (HMATRIX) Special Function Register 15 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for HMATRIX ========== */
#define HMATRIX_SLAVE_FLASH         0
#define HMATRIX_SLAVE_HTOP0         1
#define HMATRIX_SLAVE_HTOP1         2
#define HMATRIX_SLAVE_HTOP2         3
#define HMATRIX_SLAVE_HTOP3         4
#define HMATRIX_SLAVE_HRAMC0        5
#define HMATRIX_SLAVE_HRAMC1        6
#define HMATRIX_SLAVE_AESA          7
#define HMATRIX_SLAVE_NUM           8

#define HMATRIX_MASTER_CPU_IDCODE   0
#define HMATRIX_MASTER_CPU_SYS      1
#define HMATRIX_MASTER_SMAP         2
#define HMATRIX_MASTER_PDCA         3
#define HMATRIX_MASTER_USBC_MASTER  4
#define HMATRIX_MASTER_CRCCU        5
#define HMATRIX_MASTER_NUM          6

#endif /* _SAM4L_HMATRIX_INSTANCE_ */
