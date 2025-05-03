# Math DLL Project & Client Application

A simple example demonstrating how to create a DLL for math operations and a client app that uses it via implicit linking.

## 📂 Repository Structure

math-dll-project/  
├── math_operations/          # DLL Project  
│   ├── include/              # Public headers  
│   │   └── math_operations.h  
│   ├── src/                  # Source files  
│   │   └── math_operations.cpp  
│   ├── lib/                  # Compiled .lib files (auto-generated)  
│   └── bin/                  # Compiled .dll files (auto-generated)  
│  
├── client_app/               # Client Application  
│   ├── src/  
│   │   └── main.cpp          # Example usage  
│   └── bin/                  # Client output (auto-generated)  
│  
├── CMakeLists.txt            # Build configuration  
└── README.md                 # This file  

## 🔧 Prerequisites
- Visual Studio 2022 (or GCC/MinGW)
- CMake (>= 3.20)
- Git

## 🚀 Build Instructions

### 1. Clone the Repository
```bash
git clone https://github.com/yourusername/math-dll-project.git
cd math-dll-project

2. Build the Math DLL

mkdir build && cd build
cmake .. -A x64  # For 64-bit (use `-A Win32` for 32-bit)
cmake --build . --config Release

3. Build the Client App

cd client_app
mkdir build && cd build
cmake .. -A x64
cmake --build . --config Release

📚 Code Documentation
Math DLL (math_operations)
math_operations.h

#pragma once

#ifdef MATH_OPERATIONS_EXPORTS
#define MATH_API __declspec(dllexport)
#else
#define MATH_API __declspec(dllimport)
#endif

extern "C" MATH_API int add(int a, int b);
extern "C" MATH_API int subtract(int a, int b);
extern "C" MATH_API double multiply(double a, double b);
extern "C" MATH_API double divide(double a, double b);

math_operations.cpp

#include "math_operations.h"

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0) ? a / b : 0.0; }

Client Application
main.cpp

#include <iostream>
#include "../../math_operations/include/math_operations.h"

int main() {
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "5 - 3 = " << subtract(5, 3) << std::endl;
    std::cout << "5.0 * 3.0 = " << multiply(5.0, 3.0) << std::endl;
    std::cout << "5.0 / 3.0 = " << divide(5.0, 3.0) << std::endl;
    return 0;
}

⚙️ How It Works
The DLL exports math functions

Client app links to the DLL implicitly

DLL loads automatically at runtime

📦 Distribution
For developers: include/ + lib/

For end users: Just the .dll file

🔍 Troubleshooting
Error	Solution
DLL not found	Copy DLL to client's executable folder
Linker errors	Check library paths and dependencies
📜 License: MIT
