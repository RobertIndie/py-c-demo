// test.cpp: 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"

#define DLLEXPORT extern "C" __declspec(dllexport)

DLLEXPORT int sum(int a, int b) {
	return a + b;
}
