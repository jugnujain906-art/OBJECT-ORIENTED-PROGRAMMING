#include <iostream>
using namespace std;

class person
{ 
  public:
    string name;
    int age;
    int contact;

    void display()
    {
        cout<<"------------STUDENT INFORMATION------------"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"contact:"<<contact<<endl;
    }
};

class student: public person
{
    public:
    int rollno;
    string branch;

    void showdata()
    {
        cout<<"-------------OTHER INFORMATION-------------"<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"Branch:"<<branch<<endl;

    }
};

int main()
{
    student s1;
    s1.name = "jugnu";
    s1.age  = 18;
    s1.contact = 759879;
    s1.branch = "AI/ML";

    s1.display();
    s1.showdata();
    return 0;
}
