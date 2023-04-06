#include <iostream>

using namespace std;

int Palindrome(int number)
{
    int final=0, digit, rev=0;
    int num = number;
    while (num!=0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    
    if (rev==number)
    {
        final = rev;
    }
    else
    {
        final = Palindrome(number+1);
    }
    return final;
}

int main()
{
    int num, reverse;
    
    num = 1506;
    
    reverse = Palindrome(num);
    
    cout << reverse;

    return 0;
}
