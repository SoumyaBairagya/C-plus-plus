/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int Armstrong(int number)
{
    int digit, rem=0;
    int num = number;
    while (num!=0)
    {
        digit = num % 10;
        rem += digit * digit * digit;
        num = num / 10;
    }
    return rem;
}

int main()
{
    int num, angstrom;
    
    num = 371;
    
    angstrom = Armstrong(num);
    
    cout << angstrom;

    return 0;
}
