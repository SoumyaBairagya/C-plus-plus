#include<iostream>
#include<math.h>
using namespace std;

void circle(float r, float *a, float *p)
{
    *a = M_PI * r * r;
    *p = 2 * M_PI * r;
    return;
}

int main()
{
    float radius, area, perimeter;
    cout << "Enter the Radius of Circle" << endl; 
    cin >> radius;
    circle(radius, &area, &perimeter);
    cout << "Area is : " << area << " and Perimeter is : " << perimeter << endl;
    return 0;
}