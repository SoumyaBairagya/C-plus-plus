#include <iostream>
#include <cmath>

using namespace std;

int Armstrong(int number)
{
    int digit, n=0, rem=0;
    int num = number;
    
    while (num!=0)
    {
        num/=10;
        ++n;
    }
    
    num = number;
    
    while (num!=0)
    {
        digit = num % 10;
        rem += pow(digit,n);
        num = num / 10;
    }
    return rem;
}

int main()
{
    int num, angstrom;
    
    num = 1634;
    
    angstrom = Armstrong(num);
    
    cout << angstrom;

    return 0;
}
