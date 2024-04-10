#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <iostream>

class ComplexNumber {
private:
    double real;
    double imag;

public:
    ComplexNumber(double real, double imag);
    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn);
    ComplexNumber operator+(const ComplexNumber& other) const;
    bool operator==(const ComplexNumber& other) const;
    ComplexNumber coniugato() const;
};

#endif // COMPLEXNUMBER_H
