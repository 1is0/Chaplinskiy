#pragma once

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif 

extern "C" DLL_API int Sum(int a, int b);
extern "C" DLL_API int Sub(int a, int b);
extern "C" DLL_API int Multiply(int a, int b);
extern "C" DLL_API float Div(int a, int b);
extern "C" DLL_API int Power(int a, int b);