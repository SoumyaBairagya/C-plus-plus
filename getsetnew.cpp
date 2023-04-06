#include<iostream>
using namespace std;

/*
Accessor and Mutator code
*/

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle()
    {
        length = 1;
        breadth = 1;
    }
    rectangle(int l, int b)
    {
        setlength(l);
        setbreadth(b);
    }
    void setlength(int l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            cout << "length cannot be negative..setting negative value to 1" << endl;
            length = 1;
        }
    }
    void setbreadth(int b)
    {
        if (b > 0)
        {
            breadth = b;
        }
        else
        {
            cout << "breadth cannot be negative..setting negative value to 1" << endl;
            breadth = 1;
        }
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area();
    int perimeter();
};

int rectangle::area()
{
    return length * breadth;
}

int rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    rectangle r1(-10,-5);
    rectangle r2(10,5);

    cout << "Length of r1 : " << r1.getlength() << endl;
    cout << "Breadth of r1 : " << r1.getbreadth() << endl;

    cout << "Length of r2 : " << r2.getlength() << endl;
    cout << "Breadth of r2 : " << r2.getbreadth() << endl;

    cout << "Area of rectangle r1 : " << r1.area() << endl;
    cout << "Area of rectangle r2 : " << r2.area() << endl;

    cout << "Perimeter of rectangle r1 : " << r1.perimeter() << endl;
    cout << "Perimeter of rectangle r2 : " << r2.perimeter() << endl;
    
    return 0;
}

