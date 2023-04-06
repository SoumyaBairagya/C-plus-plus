/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void reverse(string mystring)
{
    int numsize = mystring.size();
    
    if (numsize==1)
    {
        cout << mystring << endl;
    }
    else
    {
        cout << mystring[numsize - 1];
    }
    reverse(mystring.substr(0, numsize - 1));
}

int main()
{
    string str;
    getline(cin, str);
    reverse(str);
    return 0;
}
