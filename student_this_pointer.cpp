#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int age;
    string course;
    int rollNo;

    student(string name, int age, string course, int RollNo)
    {
        this->name = name;
        this->age = age;
        this->course = course;
        this->rollNo = RollNo;
    }

    void display()
    {
        cout << "StudentName=" << this->name << endl;
        cout << "Age=" << this->age << endl;
        cout << "Course=" << this->course << endl;
        cout << "RollNo=" << this->rollNo << endl;
    }
};

int main()
{
    student s1("Jugnu Jain", 18, "AI/ML", 101);

    s1.display();

    return 0;
}
