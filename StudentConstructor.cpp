#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
        int roll;
        string name;
        float marks1;
        float marks2;
        float marks3;

    public:
        Student(int rn, string nm, float mks1, float mks2, float mks3)
        {
            roll = rn;
            name = nm;
            marks1 = mks1;
            marks2 = mks2;
            marks3 = mks3;
        }

        void studInfo();
        float totalMarks();
        float average();
        void grade();
};

void Student :: studInfo()
{
    cout << "Name : " << name << endl;
    cout << "Roll no : " << roll << endl;
    cout << "Marks : " << marks1 << ", " << marks2 << ", " << marks3 << endl;
}

float Student :: totalMarks()
{
    return marks1 + marks2 + marks3;
}

float Student :: average()
{
    return (marks1 + marks2 + marks3)/3;
}

void Student :: grade()
{
    float average = (marks1 + marks2 + marks3)/3;
    if (average > 60)
    {
        cout << "Your grade is A" << endl;
    }
    else if (average > 40 && average <= 60)
    {
        cout << "Your grade is B" << endl;
    }
    else if (average == 40)
    {
        cout << "Your grade is C" << endl;
    }
}

int main()
{
    cout << "Student Info" << endl;
    Student s1(1, "Asa", 45, 50, 60);
    s1.studInfo();
    cout << "----------------------------" << endl;
    cout << "Score details" << endl;
    cout << "Total Marks : " << s1.totalMarks() << endl;
    cout << "Average Marks : " << s1.average() << endl;
    s1.grade();
    return 0;
}
