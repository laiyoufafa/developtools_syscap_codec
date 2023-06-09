/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SYSCAP_CODEC_TEST_H
#define _SYSCAP_CODEC_TEST_H

#include <gtest/gtest.h>
#include "syscap_interface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /* __cplusplus */
#endif /* __cplusplus */

namespace Syscap {
int osSyscap[32] = {1, 3, 3};
char priSyscap[] = "Device.syscap1GEDR,Device.syscap2WREGW,Vendor.syscap3RGD,Vendor.syscap4RWEG,Vendor.syscap5REWGWE,";

class SyscapCodecTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
};
} // namespace Syscap

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cplusplus */
#endif /* __cplusplus */

#endif /* _SYSCAP_CODEC_TEST_H */