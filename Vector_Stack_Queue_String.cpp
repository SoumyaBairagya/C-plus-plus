#include <iostream>
#include <vector> 
#include <stack> 
#include <queue>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    vector <int> a;
    // int x;
    
    for (int i = 1; i <= 5; i++)
    {
        // cin >> x;
        // a.push_back(x);
        a.push_back(i);
    }
    
    for (auto i=a.begin(); i !=a.end(); i++)
    {
        cout << *i << endl;
    }
    
    stack <int> st;
    
    st.push(5);
    st.push(4);
    
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    
    queue <int> qt;
    
    qt.push(1);
    qt.push(5);

    while (!qt.empty()) 
    {
        cout << '\t' << qt.front();
        qt.pop();
    }
    
    /*
    void print_queue(queue<int> q)
{
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front()<<" ";
        temp.pop();
    }
    cout << '\n';
}
    */
    
    string y = "myname";
    cout << y;
    string z = y;
    reverse(y.begin(),y.end());
    cout << y;
    cout << z;
    
    return 0;
}
