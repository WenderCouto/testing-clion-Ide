#include <iostream>

#if defined(_WIN32) || defined(_WIN64)
    #define OS_WINDOWS
#elif defined(_APPLE) || defined(MACH_)
    #define OS_MAC
#elif defined(_linux_)
    #define OS_LINUX
#else
    #define OS_UNKNOWN
#endif

#if defined(_x86_64) || defined(_M_X64) || defined(ppc64_)
    #define ARCH_64BIT
#else
    #define ARCH_32BIT
#endif

int main() {
    std::cout << "Running on ";

    #ifdef OS_WINDOWS
        std::cout << "Windows, ";
    #elif defined(OS_MAC)
        std::cout << "MacOS, ";
    #elif defined(OS_LINUX)
        std::cout << "Linux, ";
    #else
        std::cout << "an unknown OS, ";
    #endif

    #ifdef ARCH_64BIT
        std::cout << "64-bit architecture." << std::endl;
    #else
        std::cout << "32-bit architecture." << std::endl;
    #endif

    std::cin.get();
}