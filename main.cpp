// stupid root bullshit
#include <windows.h>
#include <iostream>
#include "injector/shellcode_loader.hpp"

int main() {
    std::cout << "[*] Starting injection..." << std::endl;
    if (injectShellcode("RobloxPlayerBeta.exe")) {
        std::cout << "[+] Injection successful!" << std::endl;
    } else {
        std::cerr << "[-] Injection failed!" << std::endl;
    }
    return 0;
}
