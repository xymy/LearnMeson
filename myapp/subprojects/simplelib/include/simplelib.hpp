#pragma once

#ifndef SIMPLELIB_API
    #ifdef SIMPLELIB_SHARED // shared library
        #ifdef _WIN32
            #ifdef SIMPLELIB_SHARED_BUILDING
                #define SIMPLELIB_API __declspec(dllexport)
            #else
                #define SIMPLELIB_API __declspec(dllimport)
            #endif
        #else
            #define SIMPLELIB_API __attribute__((visibility("default")))
        #endif
    #else // static library
        #define SIMPLELIB_API
    #endif
#endif

#define STR_EX(s) #s
#define STR(s) STR_EX(s)
#define SIMPLELIB_API_STR (STR(SIMPLELIB_API) "")

SIMPLELIB_API void hello();
