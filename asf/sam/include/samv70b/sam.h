/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

#ifndef _SAM_
#define _SAM_

#if   defined(__SAMV70J19B__) || defined(__ATSAMV70J19B__)
  #include "samv70j19b.h"
#elif defined(__SAMV70J20B__) || defined(__ATSAMV70J20B__)
  #include "samv70j20b.h"
#elif defined(__SAMV70N19B__) || defined(__ATSAMV70N19B__)
  #include "samv70n19b.h"
#elif defined(__SAMV70N20B__) || defined(__ATSAMV70N20B__)
  #include "samv70n20b.h"
#elif defined(__SAMV70Q19B__) || defined(__ATSAMV70Q19B__)
  #include "samv70q19b.h"
#elif defined(__SAMV70Q20B__) || defined(__ATSAMV70Q20B__)
  #include "samv70q20b.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

