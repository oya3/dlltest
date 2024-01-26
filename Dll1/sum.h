#pragma once

#ifdef DLL1_EXPORTS
#define DllExport extern "C" __declspec(dllexport)
#else
#define DllExport extern "C" __declspec(dllimport)
#endif

DllExport int sum(int a, int b);