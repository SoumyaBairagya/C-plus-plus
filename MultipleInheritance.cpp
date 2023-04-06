/*
Create an Employee class with data members as employee id, name and date of joining. 
Derive class WageEmployee with data members as hours and rate 
And class Manager with data members as No of subordinates, basic salary and DA from class Employee.
Derive SalesPerson class from WageEmployee class.
Use Multiple Inheritance to derive class SalesManager from classes i.e SalesPerson and Manager.
Assume suitable data members and member functions.
Display the summary using Inheritance.
*/

#include<iostream>
using namespace std;

class Employee
{
    private:
        int employee_id;
        char name[20];
        int date_of_joining;
    
    public:
        Employee()
        {
            cout << "I'm in class Employee\n" << endl;
        }
};

class WageEmployee : virtual public Employee
{
    private:
        int hours;
        int rate;

    public:
        WageEmployee()
        {
            cout << "I'm in class WageEmployee" << endl << "I'm derived from class Employee\n" << endl;
        }
};

class Manager : virtual public Employee
{
    private:
        int no_of_subordinates;
        int basic_salary;
        int DA;

    public:
        Manager()
        {
            cout << "I'm in class Manager" << endl << "I'm derived from class Employee\n" << endl;
        }
};

class SalesPerson : public WageEmployee
{
    public:
        SalesPerson()
        {
            cout << "I'm in class SalesPerson" << endl << "I'm derived from class WageEmployee\n" << endl;
        }
};

class SalesManager : public SalesPerson, public Manager
{
    public:
        SalesManager()
        {
            cout << "I'm in class SalesManager" << endl << "I'm derived from class SalesPerson and class Manager\n" << endl;
        }
};

int main()
{
    SalesManager sm;
    cout << "Size of SalesManager Object : " << sizeof(sm) << endl;
    return 0;
}

/*
With Virtual : 56
Without Virtual 76
*/

/*
#include <iostream>
#include <ctime>

using namespace std;

int main() {
   // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;
}
*/
