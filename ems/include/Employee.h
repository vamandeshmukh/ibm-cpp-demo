// #ifndef EMPLOYEE_H
// #define EMPLOYEE_H
#pragma once

#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    double salary;

public:
    Employee(int i, string n, double s);
    void display() const;
    string getName() const;
};

// #endif // EMPLOYEE_H

