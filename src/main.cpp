#include <iostream>

int main(int argc, const char **argv) {

    std::cout << "Hello GitHub Action!" << std::endl;

    const int a = 42;
    std::cout << "a = " << a << std::endl;

    const int b = 87;
    std::cout << "b = " << b << std::endl;

    const int *c = nullptr;
    std::cout << "c = " << *c << std::endl; // error here

    return 0;
}
