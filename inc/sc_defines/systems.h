// System defines

#ifndef SYSTEMS_H_
#define SYSTEMS_H_

// Level 1
#if defined(_WIN32) || defined(_WIN64)
    #define WINDOWS

#elif defined(__MACH__)
    #define MACOS
    
#elif defined(__ANDROID__)
    #define ANDROID
    
#elif defined(__FreeBSD__)
    #define FREEBSD

#elif defined(__NetBSD__)
    #define NETBSD

#elif defined(__OpenBSD__)
    #define OPENBSD

#elif defined(__sun) || defined(__SVR4)
    #define SOLARIS

#elif defined(__HAIKU__)
    #define HAIKU

#elif defined(__CYGWIN__)
    #define CYGWIN

#endif /* Level 1 */


// Level 2
#if defined(__linux__) || defined(__gnu_linux__) || defined(__linux) || defined(linux)
    #define LINUX

#elif defined(__APPLE__)
    #define APPLE

#endif /* Level 2 */


// Level 3
#if defined(__unix__) || defined(__unix)
    #define UNIX
#endif /* Level 3 */


#endif /* SYSTEMS_H_ */