// Compiler defines
#ifndef COMPILERS_H_
#define COMPILERS_H_

// Situational compilers
#if defined(__MINGW32__) || defined(__MINGW64__)
    #define MINGW

#elif defined(_MSC_VER) || defined(_MSC_FULL_VER) || defined(_MSC_BUILD)
    #define MSVC

#elif defined(__INTEL_COMPILER) || defined(__ICL) || defined(__ICC)
    #define ICC

#elif defined(__TINYC__)
    #define TCC

#elif defined(__DMC__)
    #define DMC

#elif defined(__BORLANDC__)
    #define BORLANDC

#elif defined(__WATCOMC__)
    #define WATCOMC

#elif defined(__CODEGEARC__)
    #define CGC

#elif defined(__xlC__) || defined(__IBMC__) || defined(__IBMCPP__)
    #define XLC

#elif defined(__ghs__)
    #define GHS

#elif defined(__CC_ARM)
    #define ARMCC

#elif defined(__ARMCC_VERSION)
    #define ARMCC6

#elif defined(__SUNPRO_C) || defined(__SUNPRO_CC)
    #define SUNCC

#elif defined(__CRAYC)
    #define CRAYC

#endif


// Clang
#if defined(__clang__) || defined(__clang_major__) || defined(__clang_minor__) || defined(__clang_patchlevel__)
    #define CLANG
#endif


// GCC
#if defined(__GNUC__) || defined(__GNUC_MINOR__) || defined(__GNUC_PATCHLEVEL__)
    #define GCC
#endif

#endif