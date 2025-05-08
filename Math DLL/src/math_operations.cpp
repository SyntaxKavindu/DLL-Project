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

		// Show a message box when the DLL is loaded
		MessageBox(NULL, TEXT("Math DLL Loaded"), TEXT("DLL Notification"), MB_OK | MB_ICONINFORMATION);

		break;

	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
