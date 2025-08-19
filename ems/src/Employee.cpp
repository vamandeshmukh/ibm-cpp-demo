#include "../include/Employee.h"

#include <iostream>
using namespace std;

Employee::Employee(int i, string n, double s)
    : id(i), name(n), salary(s) {}

void Employee::display() const
{
    cout << "ID: " << id
         << ", Name: " << name
         << ", Salary: " << salary << endl;
}

string Employee::getName() const
{
    return name;
}
