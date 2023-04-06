/*
Stack, Queue and Priority Queues do not have Iterators
*/

/*
// Vector
#include<iostream>
#include<vector> // Generic (It is a template)
using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5,6,7,8,9,10};
    vector <int> :: iterator itr;
    v.push_back(30);
    v.push_back(40);
    v.insert(v.begin(),100); // Insert at beginning
    int j = 7;
    v.insert(v.begin() + j, 50); // Insert at 7th Location
    cout << "Using for Loop" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << "Using for Loop" << endl;
    for (int x:v)
    {
        cout << x << endl;
    }
    cout << "Using Iterator" << endl;
    for(itr = v.begin(); itr!=v.end(); itr++) // Iterate the entire list & display all elements, *itr will print value at that iterator
    {
        cout << *itr << endl; 
    }
    return 0;
}
*/