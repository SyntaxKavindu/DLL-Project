// main.cpp - Uses the math_operations.dll implicitly
#include <iostream>  
#include "math_operations.h"  // Include the DLL's header  

// #pragma comment(lib, "math_operations.lib")  // Link with the DLL's import library

int main() {
	// Test the DLL functions  
	std::cout << "5 + 3 = " << add(5, 3) << std::endl;
	std::cout << "5 - 3 = " << subtract(5, 3) << std::endl;
	std::cout << "5.0 * 3.0 = " << multiply(5.0, 3.0) << std::endl;
	std::cout << "5.0 / 3.0 = " << divide(5.0, 3.0) << std::endl;
	std::cout << "5.0 / 0.0 = " << divide(5.0, 0.0) << " (division by zero)" << std::endl;

	system("pause");  // Pause the console to see the output

	return 0;
}