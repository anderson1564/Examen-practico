#if defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(_WIN64)
    #define WINDOWS
#elif defined(__APPLE__)
    #define MAC
#elif defined (__linux)
    #define LINUX
#elif defined (__unix)
    #define UNIX
#elif defined (__posix)
    #define POSIX
#else
    #define UNKNOWN
#endif
