// #ifndef DEPARTMENT_H
// #define DEPARTMENT_H
#pragma once

#include "Employee.h"
#include <vector>
#include <string>
using namespace std;

class Department
{
private:
    string deptName;
    vector<Employee> employees;

public:
    Department(string name);
    void addEmployee(const Employee &e);
    void showDepartment() const;
};

// #endif // DEPARTMENT_H
