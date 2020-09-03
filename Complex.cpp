#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;


Complex::Complex(double a, double b)  ///Initializare
{
    re = a;
    im = b;
}

Complex::Complex(const Complex &ob)  ///Copy Constructor
{
    re = ob.re;
    im = ob.im;
}

Complex::~Complex()
{
    re = 0;
    im = 0;
}

void Complex::set_Complex(double a, double b)
{
    re = a;
    im = b;
}

double Complex::get_real()
{
    return re;
}

double Complex::get_imaginar()
{
    return im;
}

void citire(Complex *v)
{
    int n;
    cin >> n;
    v = new Complex[n];
    for(int i = 0; i < n; i++)
        cin >> v[i].re >> v[i].im;
    for(int i = 0; i < n; i++)
        cout << v[i];
    delete[] v;
}

istream& operator>>(istream& in, Complex &z)
{
    in >> z.re >> z.im;
    return in;
}

ostream& operator<<(ostream& out, const Complex &z)
{
    if(z.re == 0)
    {
        if(z.im > 0)
            out << "i*" << z.im;
        else if(z.im < 0)
            out << "-i*" <<-z.im;
        else
            out<<0;
    }
    else if(z.re > 0)
    {
        if(z.im == 0)
            out << z.re;
        else if(z.im < 0)
            out << z.re << "-i*" << z.im;
        else
            out << z.re << "+i*" << z.im;
    }
    out << '\n';
    return out;
}

Complex operator+(const Complex &z1, const Complex &z2)
{
    Complex z;
    z.re = z1.re + z2.re;
    z.im = z1.im + z2.im;
    return z;
}

Complex operator+(double &a, const Complex &z2)
{
    Complex z;
    z.re = a + z2.re;
    z.im = a + z2.im;
    return z;
}

Complex operator+(const Complex &z1, double &a)
{
    Complex z;
    z.re = z1.re + a;
    z.im = z1.im + a;
    return z;
}

const Complex operator+(const Complex &z)
{
    return z;
}

Complex operator-(const Complex &z1, const Complex &z2)
{
    Complex z;
    z.re = z1.re - z2.re;
    z.im = z1.im - z2.im;
    return z;
}

Complex operator-(double &a, const Complex &z2)
{
    Complex z;
    z.re = a - z2.re;
    z.im = a - z2.im;
    return z;
}

Complex operator-(const Complex &z1, double &a)
{
    Complex z;
    z.re = z1.re - a;
    z.im = z1.im - a;
    return z;
}

Complex operator-(const Complex &z)
{
    Complex tmp(-z.re, -z.im);
    return tmp;
}

Complex operator*(const Complex &z1, const Complex &z2)
{
    Complex z;
    z.re = z1.re * z2.re - z1.im * z2.re;
    z.im = z1.re * z2.im + z1.im * z2.re;
    return z;
}

Complex operator*(double &a, const Complex &z2)
{
    Complex z;
    z.re = a * z2.re;
    z.im = a * z2.im;
    return z;
}

Complex operator*(const Complex &z1, double &a)
{
    Complex z;
    z.re = z1.re * a;
    z.im = z1.im * a;
    return z;
}

Complex operator/(const Complex &z1, const Complex &z2)
{
    Complex z;
    z.re = (z1.re * z2.re + z1.im * z2.im) / (z2.re * z2.re + z2.im * z2.im);
    z.im = (z2.re * z1.im - z1.re * z2.im) / (z2.re * z2.re + z2.im * z2.im);
    return z;
}

Complex operator/(double &a, const Complex &z2)
{
    Complex z;
    z.re = a / z2.re;
    z.im = a / z2.im;
    return z;
}

Complex operator/(const Complex &z1, double &a)
{
    Complex z;
    z.re = z1.re / a;
    z.im = z1.im / a;
    return z;
}

bool operator==(const Complex &z1, const Complex &z2)
{
    if(z1.re == z2.re && z1.im == z2.im)
        return 1;
    else
        return 0;
}

bool operator==(double &a, const Complex &z2)
{
    if(a == z2.re && z2.im == 0)
        return 1;
    else
        return 0;
}

bool operator==(const Complex &z1, double &a)
{
    if(z1.re == a && z1.im == 0)
        return 1;
    else
        return 0;
}

bool operator!=(const Complex &z1, const Complex &z2)
{
    if(z1.re == z2.re && z1.im == z2.im)
        return 0;
    return 1;
}

bool operator!=(double &a, const Complex &z2)
{
    if(a == z2.re && z2.im == 0)
        return 0;
    return 1;
}

bool operator!=(const Complex &z1, double &a)
{
    if(z1.re == a && z1.im == 0)
        return 0;
    return 1;
}

Complex& operator+=(Complex &z1, const Complex &z2)
{
    z1.re += z2.re;
    z1.im += z2.im;
    return z1;
}

Complex& operator+=(Complex &z1, double &a)
{
    z1.re += a;
    return z1;
}

Complex& operator-=(Complex &z1, const Complex &z2)
{
    z1.re -= z2.re;
    z1.im -= z2.im;
    return z1;
}

Complex& operator-=(Complex &z1, double &a)
{
    z1.re -= a;
    return z1;
}

Complex& operator*=(Complex &z1, const Complex &z2)
{
    z1.re = z1.re * z2.re - z1.im * z2.re;
    z1.im = z1.re * z2.im + z1.im * z2.re;
    return z1;
}

Complex& operator*=(Complex &z1, double &a)
{
    z1.re *= a;
    z1.im *= a;
    return z1;
}

Complex& operator/=(Complex &z1, const Complex &z2)
{
    z1.re = (z1.re * z2.re + z1.im * z2.im) / (z2.re * z2.re + z2.im * z2.im);
    z1.im = (z2.re * z1.im - z1.re * z2.im) / (z2.re * z2.re + z2.im * z2.im);
    return z1;
}

Complex& operator/=(Complex &z1, double &a)
{
    z1.re /= a;
    z1.im /= a;
    return z1;
}

Complex operator^(const Complex &z1, const int &x)
{
    Complex z;
    z.re = pow(z1.re, x);
    z.im = pow(z1.im, x);
    if(x % 4 == 2 || x % 4 == 3)
        z.im = -z.im;
    return z;
}

double modul(Complex z)
{
    double m;
    m = sqrt(z.re * z.re + z.im * z.im);
    return m;
}

void sqrt(Complex &z)
{
    z.re = sqrt(0.5 * (z.re + modul(z)));
    z.im = sqrt(0.5 * (-z.re + modul(z)));
}

void ecuatie(Complex a, Complex b, Complex c, Complex *radacina)
{
    Complex delta;
    radacina = new Complex[2];

    delta = b * b - 4 * a * c;
    sqrt(delta);
    radacina[0] = (-b + delta) / (2 * a);
    radacina[1] = (-b - delta) / (2 * a);
}

//


