#include <iostream>

using namespace std;

struct TIME
{
    int hours;
    int mins;
    int secs;
};

void computedifference(struct TIME, struct TIME, struct TIME *);


int main()
{
    struct TIME t1, t2, difference;
    
    cout<<"Enter time T1" << endl;
    cin>>t1.hours>>t1.mins>>t1.secs;
    
    cout << "Enter time T2" << endl;
    cin>>t2.hours>>t2.mins>>t2.secs;
    
    computedifference(t1, t2, &difference);
    
    cout<< "Difference" << difference.hours << " " << difference.mins << " "<< difference.secs << endl;
    

    return 0;
}

void computedifference(struct TIME t1, struct TIME t2, struct TIME *difference)
{
    if (t2.secs > t1.secs)
    {
        t1.mins--;
        t1.secs+=60;
    }
    difference->secs = t1.secs - t2.secs;
    
    if (t2.mins > t1.mins)
    {
        t1.hours--;
        t1.mins+=60;
    }
    difference->mins = t1.mins - t2.mins;
    
    difference->hours = t1.hours - t2.hours;
}
