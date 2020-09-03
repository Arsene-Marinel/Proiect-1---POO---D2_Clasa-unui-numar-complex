#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex
{
    double re, im;
public:
    Complex(double a = 0, double b = 0);
    Complex(const Complex &ob);
    ~Complex();
    void set_Complex(double a, double b);
    double get_real();
    double get_imaginar();

    friend void citire(Complex *v);
    friend istream& operator>>(istream&, Complex&);
    friend ostream& operator<<(ostream&, const Complex&);

    friend Complex operator+(const Complex &, const Complex &);
    friend Complex operator+(double &, const Complex &);
    friend Complex operator+(const Complex &, double &);

    friend const Complex operator+(const Complex &);

    friend Complex operator-(const Complex &, const Complex &);
    friend Complex operator-(double &, const Complex &);
    friend Complex operator-(const Complex &, double &);

    friend Complex operator-(const Complex &);

    friend Complex operator*(const Complex &, const Complex &);
    friend Complex operator*(double &, const Complex &);
    friend Complex operator*(const Complex &, double &);

    friend Complex operator/(const Complex &, const Complex &);
    friend Complex operator/(double &, const Complex &);
    friend Complex operator/(const Complex &, double &);

    friend bool operator==(const Complex &, const Complex &);
    friend bool operator==(double &, const Complex &);
    friend bool operator==(const Complex &, double &);

    friend bool operator!=(const Complex &, const Complex &);
    friend bool operator!=(double &, const Complex &);
    friend bool operator!=(const Complex &, double &);

    friend Complex& operator+=(Complex &, const Complex &);
    friend Complex& operator+=(Complex &, double &);

    friend Complex& operator-=(Complex &, const Complex &);
    friend Complex& operator-=(Complex &, double &);

    friend Complex& operator*=(Complex &, const Complex &);
    friend Complex& operator*=(Complex &, double &);

    friend Complex& operator/=(Complex &, const Complex &);
    friend Complex& operator/=(Complex &, double &);

    friend Complex operator^(const Complex &, const int &);

    friend double modul(Complex z);
    friend void sqrt(Complex &z);
    friend void ecuatie(Complex a, Complex b, Complex c, Complex *v);

};

#endif // COMPLEX_H
