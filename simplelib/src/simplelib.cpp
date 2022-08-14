#include <iostream>
#include <simplelib.hpp>

void hello() {
    std::cout << "In hello():" << std::endl;
    std::cout << "SIMPLELIB_API is " << SIMPLELIB_API_STR << " when building library." << std::endl;
}
