#include <iostream>
using namespace std;

class Student
{
public:
    string name = "Jugnu Jain";
    int rollNo = 101;
    int age = 18;
    string branch = "AI/ML";
    string course = "B.Tech";
    int semester = 1;

    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Age: " << age << endl;
        cout << "Branch: " << branch << endl;
        cout << "Course: " << course << endl;
        cout << "Semester: " << semester << endl;

    }
};

int main()
{
    Student s1;

    s1.display();

    return 0;
}