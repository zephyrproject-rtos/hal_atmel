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

#if   defined(__SAMV70J19__) || defined(__ATSAMV70J19__)
  #include "samv70j19.h"
#elif defined(__SAMV70J20__) || defined(__ATSAMV70J20__)
  #include "samv70j20.h"
#elif defined(__SAMV70N19__) || defined(__ATSAMV70N19__)
  #include "samv70n19.h"
#elif defined(__SAMV70N20__) || defined(__ATSAMV70N20__)
  #include "samv70n20.h"
#elif defined(__SAMV70Q19__) || defined(__ATSAMV70Q19__)
  #include "samv70q19.h"
#elif defined(__SAMV70Q20__) || defined(__ATSAMV70Q20__)
  #include "samv70q20.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

