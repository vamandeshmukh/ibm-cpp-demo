#include "../include/Department.h"
#include <iostream>
using namespace std;

Department::Department(string name) : deptName(name) {}

void Department::addEmployee(const Employee &e)
{
    employees.push_back(e);
}

void Department::showDepartment() const
{
    cout << "Department: " << deptName << endl;
    cout << "Employees:" << endl;
    for (const auto &e : employees)
    {
        e.display();
    }
}
