/*
Write a program to add 2 numbers using 1 parameter, 2 parameter functions
Use concept of function overloading
*/

#include <iostream>
using namespace std;

class Add
{
private:
    int x, y;

public:
    Add(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    int sum(int a, int b) 
    { 
        return a + b; 
    }
    int sum(const Add &d) 
    {
        Add total;
        total.x = x + d.x; 
        total.y = y + d.y;
        return total.x + total.y; 
    }
};
int main()
{
    Add d1(5, 7);
    Add d2(7, 4);
    cout << "2 Parameter Sum = " << d1.sum(8, 24) << endl;
    cout << "1 Parameter Sum = " << d1.sum(d2) << endl;
    return 0;
}