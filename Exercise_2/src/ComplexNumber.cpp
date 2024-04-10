#include "ComplexNumber.hpp"

ComplexNumber::ComplexNumber(double real, double imag) : real(real), imag(imag) {}

std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn) {
    if (cn.imag >= 0)
        os << cn.real << "+" << cn.imag << "i";
    else
        os << cn.real << cn.imag << "i";
    return os;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imag + other.imag);
}

bool ComplexNumber::operator==(const ComplexNumber& other) const {
    return (real == other.real) && (imag == other.imag);
}

ComplexNumber ComplexNumber::coniugato() const {
    return ComplexNumber(real, -imag);
}
