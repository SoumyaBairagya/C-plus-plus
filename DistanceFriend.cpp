/*
Create two classes DM and DB which stores the value in distances. DM stores distance in meters and centimeters and DB in feet and inches.
Write a program that can read values for the class objects and add one object of DM with another object of DB. Use a friend function to carry out
the addition operation. The object that stores the results may be a DM object or DB object, depending on the units in which the results are required.
The display should be in the format of feet and inches or meters 
and centimeters depending on the object on display.
*/

#include<iostream>
using namespace std;
class DB;

class DM
{
private:
    float meter;
    float cm;
public:
    DM(float m = 0, float c = 0)
    {
        meter = m;
        cm = c;
    }
    friend void add(DM dm, DB db);
};

class DB
{
private:
    float feet;
    float inches;
public:
    DB(float f = 0, float i = 0)
    {
        feet = f;
        inches = i;
    }
    friend void add(DM dm, DB db);
};

void add(DM dm, DB db)
{
    DM met_cm;
    DB ft_inc;
    float h = ((dm.meter + (dm.cm/100))*39.3701 + ((db.feet * 12) + db.inches));
    met_cm.cm = h / 0.393701;
    met_cm.meter = h / 39.3701;
    ft_inc.inches = h;
    ft_inc.feet = h / 12;
    cout << "Distance in cm : " << met_cm.cm << ", Distance in m : " << met_cm.meter << endl;
    cout << "Distance in feet : " << ft_inc.feet << ", Distance in inches : " << ft_inc.inches << endl;
}

int main()
{
    DM mc(1,20);
    DB fi(3, 4);
    add(mc, fi);
    return 0;
}

/*
1 cm = 0.393701 inches
1 m = 39.3701 inches
1 foot = 12 inches
1 inch = 2.54 cm = 0.0254 m
*/
