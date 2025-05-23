#include "lua_bridge.hpp"
#include <iostream>

// strange lua C API function (idk what the actual roblox luau hooking is)
void attachToLuau() {
    std::cout << "[*] Hooking into Luau..." << std::endl;
    // now i just have to find lua state, hook instructions, andd probably replace dispatchers
}
