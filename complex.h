#ifndef COMPLEX_H
#define COMPLEX_H

class complex
{
    private:

    public:
        double real;
        double imaginary;

        complex();

        complex(double r, double i);

        double get_real();

        double get_imaginary();

        void set_real(double r);

        void set_imaginary(double i);

        friend complex operator+(complex a, complex b);

        void print(complex x);

        double modul();

};
#endif // COMPLEX_H
