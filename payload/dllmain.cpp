#include <windows.h>
#include "lua_bridge.hpp"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason, LPVOID lpReserved) {
    if (ul_reason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        MessageBoxA(nullptr, "Payload injected!", "Executor", MB_OK);
        attachToLuau(); // i think this is how i bridge idfk
    }
    return TRUE;
}
// horrid
