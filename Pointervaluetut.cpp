#include<iostream>
using namespace std;

int main()
{
    int i = 48, *j, **k;
    j = &i;
    k = &j;
    cout << "Value of i through j : " << *j << endl;
    cout << "Value of i through k : " << **k << endl;
    return 0;
}
