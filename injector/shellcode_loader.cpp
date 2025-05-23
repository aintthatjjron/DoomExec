#include "shellcode_loader.hpp"
#include <windows.h>
#include <tlhelp32.h>
#include <iostream>

bool injectShellcode(const char* targetProcess) {
    // TODO: Add manual map or LoadLibraryA + bypass here
    std::cout << "[*] Injecting into " << targetProcess << "..." << std::endl;
    return true;
}
// suprisingly functional
