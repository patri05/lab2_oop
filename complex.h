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

        complex add(complex a, complex b);

        void print(complex x);

};
#endif // COMPLEX_H
