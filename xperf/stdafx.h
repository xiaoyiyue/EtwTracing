// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#define INITGUID
#define WINVER 0x0601
#include "targetver.h"
#include <assert.h>
#include <Guiddef.h>
#include <CGuid.h>
#include <rpc.h>
#include <specstrings_strict.h>
#include <Rpcsal.h>
#include <RpcDce.h>
#include <Windows.h>
#include <stdio.h>
#include <tchar.h>
#include <wmistr.h>
#include <evntrace.h>

DEFINE_GUID ( /* 3d6fa8d4-fe05-11d0-9dda-00c04fd7ba7c */
			 DiskIoGuid,
			 0x3d6fa8d4,
			 0xfe05,
			 0x11d0,
			 0x9d, 0xda, 0x00, 0xc0, 0x4f, 0xd7, 0xba, 0x7c
			 );

DEFINE_GUID ( /* ce1dbfb4-137e-4da6-87b0-3f59aa102cbc */
			 PerfInfoGuid,
			 0xce1dbfb4,
			 0x137e,
			 0x4da6,
			 0x87, 0xb0, 0x3f, 0x59, 0xaa, 0x10, 0x2c, 0xbc
			 );

DEFINE_GUID ( /* 2cb15d1d-5fc1-11d2-abe1-00a0c911f518 */
			 ImageLoadGuid,
			 0x2cb15d1d,
			 0x5fc1,
			 0x11d2,
			 0xab, 0xe1, 0x00, 0xa0, 0xc9, 0x11, 0xf5, 0x18
			 );

DEFINE_GUID ( /* 3d6fa8d0-fe05-11d0-9dda-00c04fd7ba7c */
			 ProcessGuid,
			 0x3d6fa8d0,
			 0xfe05,
			 0x11d0,
			 0x9d, 0xda, 0x00, 0xc0, 0x4f, 0xd7, 0xba, 0x7c
			 );

DEFINE_GUID ( /* 3d6fa8d1-fe05-11d0-9dda-00c04fd7ba7c */
			 ThreadGuid,
			 0x3d6fa8d1,
			 0xfe05,
			 0x11d0,
			 0x9d, 0xda, 0x00, 0xc0, 0x4f, 0xd7, 0xba, 0x7c
			 );

DEFINE_GUID ( /* 90cbdc39-4a3e-11d1-84f4-0000f80464e3 */
			 FileIoGuid,
			 0x90cbdc39,
			 0x4a3e,
			 0x11d1,
			 0x84, 0xf4, 0x00, 0x00, 0xf8, 0x04, 0x64, 0xe3
			 );

DEFINE_GUID ( /* def2fe46-7bd6-4b80-bd94-f57fe20d0ce3 */
			 StackWalkGuid,
			 0xdef2fe46,
			 0x7bd6,
			 0x4b80,
			 0xbd, 0x94, 0xf5, 0x7f, 0xe2, 0x0d, 0x0c, 0xe3
			 );

DEFINE_GUID ( /* 3d6fa8d3-fe05-11d0-9dda-00c04fd7ba7c */
			 PageFaultGuid,
			 0x3d6fa8d3,
			 0xfe05,
			 0x11d0,
			 0x9d, 0xda, 0x00, 0xc0, 0x4f, 0xd7, 0xba, 0x7c
			 );

// TODO: 在此处引用程序需要的其他头文件
