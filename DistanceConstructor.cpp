#include <iostream>
#include <conio.h>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    // Non-parameterized constructor
    Distance()
    {
        feet = 1;
        inches = 1;
        cout << "I'm in Non-parameterized constructor" << endl;
    }

    // Parameterized constructor
    Distance(int f, float i)
    {
        setfeet(f);
        setinches(i);
        cout << "I'm in Parameterized constructor" << endl;
    }
    // Setters for the constructor
    void setfeet(int f)
    {
        if (f > 0)
            feet = f;
        else
        {
            cout << "Distance can't be negative, setting it to 1" << endl;
            feet = 1;
        }
    }
    void setinches(float i)
    {
        if (i > 0)
            inches = i;
        else
        {
            cout << "Distance can't be negative, setting it to 1" << endl;
            inches = 1;
        }
    }

    Distance(const Distance &d)
    {
        feet = d.feet;
        inches = d.inches;
        cout << "I'm in Copy constructor" << endl;
    }

    // Function Declaration
    Distance add(Distance dist1, Distance dist2);

    // Displaying the values
    void display();

    // Destructor
    ~Distance()
    {
        cout << "I'm in destructor" << endl;
    }
};

Distance Distance::add(Distance dist1, Distance dist2)
{
    Distance total;
    total.feet = dist1.feet + dist2.feet;
    total.inches = dist1.inches + dist2.inches;
    return total;
}

void Distance::display()
{
    cout << "Distance in feet : " << feet << " Distance in inches : " << inches << endl;
}

int main()
{
    {
        Distance d1(3, 5.0), d2(4, 6.0), d3;
        d3 = d3.add(d1, d2); // Call to copy constructor will happen as many times as args are passed, here twice, since it is call by value function(this won't happen with call by reference function)
        d1.display();
        d2.display();
        d3.display();
    }
    getch();
    return 0;
}
