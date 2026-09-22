#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
    int employeeID;
    string employee_name;
    string employee_department;
    string employee_designation;
    float employee_salary;

    void display()
    {
        cout << "---------- OOP COMPANY ----------" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employee_name << endl;
        cout << "Employee Department: " << employee_department << endl;
        cout << "Employee Salary: " << employee_salary << endl;
    }
};

int main()
{
    employee e1;

    e1.employeeID = 111;
    e1.employee_name = "Rahul Sharma";
    e1.employee_department = "AI/ML";
    e1.employee_salary = 10000;

    e1.display();

    return 0;
}