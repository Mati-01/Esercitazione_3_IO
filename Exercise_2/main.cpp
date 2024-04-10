#include <iostream>
#include "ComplexNumber.hpp"

int main() {
    ComplexNumber a(1, 2);
    ComplexNumber b(1, -2);
    ComplexNumber c = a + b;

    std::cout << "Numeri Complessi:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "Coniugato di a: " << a.coniugato() << std::endl;
    std::cout << "Coniugato di b: " << b.coniugato() << std::endl;
    std::cout << "Coniugato di c: " << c.coniugato() << std::endl;
    std::cout << "uguale a b? " << (a == b ? "Sì" : "No") << std::endl;
    std::cout << "uguale a c? " << (a == c ? "Sì" : "No") << std::endl;

    return 0;
}
