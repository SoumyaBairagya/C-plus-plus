#include<iostream>
#include<map>

using namespace std;

char findAlphabet(string &s, int k, int size){
    map<char, int> mp;

    for(int i = 0; i < size; i++){
        mp[s[i]]++;
    }

    int mapSize = mp.size();
    
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        if(it->second == 1)
            k--;
        if(k == 0){
            return it->first;
        }
    }

    return '\0';
}

int main()
{
    string s = "aaabxbccdcffdx";
    int k = 1;

    cout << findAlphabet(s, k, s.length());

    return 0;
}

// check Kadane's Algorithm