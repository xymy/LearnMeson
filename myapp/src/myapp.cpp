#include <iostream>
#include <simplelib.hpp>

int main() {
    std::cout << "----------------------------------------------------------------" << std::endl;
    hello();
    std::cout << "----------------------------------------------------------------" << std::endl;
    std::cout << "In main():" << std::endl;
    std::cout << "SIMPLELIB_API is " << SIMPLELIB_API_STR << " when using library." << std::endl;
    std::cout << "----------------------------------------------------------------" << std::endl;
}
