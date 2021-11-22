#include <iostream>
#include <numbers>

int main(int argc, const char **argv) {

    std::cout << "Hello GitHub Action! :) :)" << std::endl;

    const int a = 42;
    std::cout << "a = " << a << std::endl;

    const int b = 87;
    std::cout << "b = " << b << std::endl;

    const int *c = &a;
    std::cout << "c = " << *c << std::endl; // error here

    std::cout << "PI = " << std::numbers::pi << std::endl;

    return 0;
}
