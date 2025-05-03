// math_operations.cpp - Implements the math functions
#include "math_operations.h"  

// Simple addition
int add(int a, int b) {
	return a + b;
}

// Simple subtraction
int subtract(int a, int b) {
	return a - b;
}

// Simple multiplication
double multiply(double a, double b) {
	return a * b;
}

// Simple division (returns 0.0 if dividing by zero)
double divide(double a, double b) {
	if (b == 0.0) return 0.0;
	return a / b;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
