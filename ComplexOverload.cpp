#include <iostream>
#include <conio.h>
using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    Complex()
    {
        real = 0;
        img = 0;
        cout << "I'm in Non-Parameterized Constructor" << endl;
    }
    Complex(float re, float im)
    {
        real = re;
        img = im;
        cout << "I'm in Parameterized Constructor" << endl;
    }
    Complex(const Complex &si)
    {
        real = si.real;
        img = si.img;
        cout << "I'm in Copy Constructor" << endl;
    }

    friend istream & operator>>(istream& input, Complex &c)
    {
        input >> c.real >> c.img;
        return input;
    }
    
    void operator+(Complex x);
    void operator-(Complex x);
    friend void operator*(Complex x, Complex y);
    friend void operator/(Complex x, Complex y);

    // Destructor
    ~Complex()
    {
        cout << "I'm in destructor" << endl;
    }
};

void Complex::operator+(Complex x)
{
    Complex tmp;
    tmp.real = real + x.real;
    tmp.img = img + x.img;
    cout << "Output Addition Complex number : " << tmp.real << "+(" << tmp.img << ")i" << endl;
}

void Complex::operator-(Complex x)
{
    Complex tmp;
    tmp.real = real - x.real;
    tmp.img = img - x.img;
    {
        if (tmp.img < 0)
            cout << "Output Subtraction Complex number : " << tmp.real << tmp.img << "i" << endl;
        else
            cout << "Output Subtraction Complex number : " << tmp.real << "+" << tmp.img << "i" << endl;
    }
}

void operator*(Complex x, Complex y)
{
    Complex tmp;
    tmp.real = x.real * y.real - x.img * y.img;
    tmp.img = x.img * y.real + x.real * y.img;
    cout << "Output Multiplication Complex number : " << tmp.real << "+(" << tmp.img << ")i" << endl;
}

void operator/(Complex x, Complex y)
{
    Complex tmp;
    if (y.real && y.img == 0)
    {
        cout << "Denominator can't be zero" << endl;
    }
    else
    {
        tmp.real = (x.real * y.real + x.img * y.img) / (y.real * y.real + y.img * y.img);
        tmp.img = (x.img * y.real - x.real * y.img) / (y.real * y.real + y.img * y.img);
        cout << "Output Division Complex number : " << tmp.real << "+(" << tmp.img << ")i" << endl;
    }
}

int main()
{
    {
        Complex c1, c2;
        cout << "Enter (real,img) pair for First Complex Number" << endl;
        cin >> c1;
        cout << "Enter (real,img) pair for Second Complex Number" << endl;
        cin >> c2;
        c1.operator+(c2);
        c1.operator-(c2);
        c1 * c2;
        c1 / c2;
    }
    getch();
    return 0;
}

/*
Complex number multiplication
(a+bi)(c+di) = ac - bd + (bc + ad)i

Complex number division
a+bi/c+di = (a+bi)(c-di)/(c+di)(c-di) = (ac + bd)/(c^2 + d^2) + (bc - ad)/(c^2 + d^2)i
*/