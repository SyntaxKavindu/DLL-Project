// math_operations.h - Declares the functions the DLL will expose
#pragma once  

#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>  // For Windows-specific types and functions

// Ensure functions are exported when building the DLL, imported when using it
#ifdef MATH_OPERATIONS_EXPORTS  
#define MATH_API __declspec(dllexport)  
#else  
#define MATH_API __declspec(dllimport)  
#endif  

// Simple math functions (exposed from the DLL)
extern "C" MATH_API int add(int a, int b);
extern "C" MATH_API int subtract(int a, int b);
extern "C" MATH_API double multiply(double a, double b);
extern "C" MATH_API double divide(double a, double b);