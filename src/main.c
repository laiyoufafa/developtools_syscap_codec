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

#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <limits.h>
#include "syscap_tool.h"
#include "create_pcid.h"

#define PRINT_ERR(...) \
    do { \
        printf("ERROR: [%s: %d] -> ", __FILE__, __LINE__); \
        printf(__VA_ARGS__); \
    } while (0)

int main(int argc, char **argv)
{
    int32_t optIndex;
    int32_t ret = 0;
    int32_t rpcid = 0;
    int32_t pcid = 0;
    int32_t encode = 0;
    int32_t decode = 0;
    int32_t stringDecode = 0;
    int32_t help = 0;
    char curpath[PATH_MAX] = {0};
    char *inputfile = NULL;
    char *pcidfile = NULL;
    char *rpcidfile = NULL;
    char *outputpath = getcwd(curpath, sizeof(curpath));

    while (1) {
        static struct option long_options[] = {
            {"help",           no_argument,       0,  'h' },
            {"RPCID",          no_argument,       0,  'R' },
            {"PCID",           no_argument,       0,  'P' },
            {"compare",        required_argument, 0,  'C' },
            {"encode",         no_argument,       0,  'e' },
            {"decode",         no_argument,       0,  'd' },
            {"string",         no_argument,       0,  's' },
            {"input",          required_argument, 0,  'i' },
            {"output",         required_argument, 0,  'o' },
            {0,                0,                 0,  0   }
        };

        int32_t flag = getopt_long(argc, argv, "hRPC:edsi:o:", long_options, &optIndex);
        if (flag == -1) {
            break;
        }
        switch (flag) {
            case 'e':
                encode = 1;
                break;
            case 'd':
                decode = 1;
                break;
            case 's':
                stringDecode = 1;
                break;
            case 'R':
                rpcid = 1;
                break;
            case 'P':
                pcid = 1;
                break;
            case 'C':
                pcidfile = optarg;
                if (argc != 4 || optind < 0 || optind >= argc) {  // 4, argc of ./syscap_tool -C f1 f2
                    PRINT_ERR("Input file too few or too many.\n");
                    return -1;
                }
                rpcidfile = argv[optind];
                break;
            case 'i':
                inputfile = optarg;
                break;
            case 'o':
                outputpath = optarg;
                break;
            case 'h':
            default:
                help = 1;
        }
    }

    if (rpcid && !pcid && encode && !decode && inputfile && !stringDecode && !help) {
        ret = RPCIDEncode(inputfile, outputpath);
    } else if (rpcid && !pcid && !encode && decode && !stringDecode && inputfile && !help) {
        ret = RPCIDDecode(inputfile, outputpath);
    } else if (rpcid && !pcid && encode && !decode && stringDecode && inputfile && !help) {
        ret = DecodeRpcidToString(inputfile, outputpath);
    } else if (!rpcid && pcid && encode && !decode && stringDecode && inputfile && !help) {
        ret = DecodePcidToString(inputfile, outputpath);
    } else if (!rpcid && !pcid && !encode && !decode && !stringDecode && pcidfile && rpcidfile && !inputfile && !help) {
        ret = ComparePcidWithRpcidString(pcidfile, rpcidfile);
    } else if (!rpcid && pcid && encode && !decode && inputfile && !stringDecode && !help) {
        ret = CreatePCID(inputfile, outputpath);
    } else if (!rpcid && pcid && !encode && decode && inputfile && !stringDecode && !help) {
        ret = DecodePCID(inputfile, outputpath);
    } else if (!rpcid && pcid && !encode && decode && stringDecode && inputfile && !help) {
        ret = DecodeStringPCID(inputfile, outputpath, TYPE_FILE);
    } else {
        printf("syscap_tool -R/P -e/d -i filepath [-o outpath]\n");
        printf("-h, --help\t: how to use\n");
        printf("-R, --RPCID\t: encode or decode RPCID\n");
        printf("-P, --PCID\t: encode or decode PCID\n");
        printf("-C, --compare\t: compare pcid with rpcid string format.\n");
        printf("-e, --encode\t: encode to sc format.\n\t-s, --string : encode to string format.\n");
        printf("-d, --decode\t: decode to json format.\n\t-s, --string : decode string format.\n");
        printf("-i filepath, --input filepath\t: input file\n");
        printf("-o outpath, --input outpath\t: output path\n");
        exit(0);
    }

    if (ret != 0) {
        PRINT_ERR("syscap_tool failed to complete. input: %s\n", inputfile);
    }

    return ret;
}