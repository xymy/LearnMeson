#pragma once

#ifndef SIMPLELIB_API
    #ifdef DLL_EXPORT
        #if defined _WIN32 || defined __CYGWIN__
            #define SIMPLELIB_API __declspec(dllexport)
        #else
            #define SIMPLELIB_API __attribute__((visibility("default")))
        #endif
    #else
        #if defined _WIN32 || defined __CYGWIN__
            #define SIMPLELIB_API __declspec(dllimport)
        #else
            #define SIMPLELIB_API
        #endif
    #endif
#endif

SIMPLELIB_API void hello();
