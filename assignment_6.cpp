#include <iostream>
using namespace std;

class employee
{
    public:
    int eid;
    string name;

    employee(int eid,string name)
    {
        this->eid = eid;
        this->name = name;
        cout << "employee record created!!!!" << endl;

    } 
    employee()
    {
        cout << "employee record deleted!!!!"<<endl;

    }
    void display()
    {
        cout<< "EMPLOYEE ID:" << eid << endl;
        cout<< "NAME:" << name << endl;
    }

};
int main()
{
    employee e1(978,"priya");
    e1.display();
    return 0;
}