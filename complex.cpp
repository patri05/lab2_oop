#include "complex.h"
#include <iostream>
#include <math.h>

complex::complex()
{
    real = 0;
    imaginary = 0;
}

complex::complex(double r, double i)
{
    real = r;
    imaginary = i;
}

double complex::get_real()
{
    return real;
}


double complex::get_imaginary()
{
    return imaginary;
}

void complex::set_real(double r)
{
    real = r;
}

void complex::set_imaginary(double i)
{
    imaginary = i;
}

complex operator+(complex a, complex b)
{
    return complex(a.get_real()+b.get_real(),a.get_imaginary()+b.get_imaginary());
}

double complex::modul()
{
    return sqrt(this->real*this->real+this->imaginary*this->imaginary);
}

