#include <iostream>
using namespace std;

// class -
// members - fields, methods, constructors, inner classes
// access - private
// object - stack / heap
// ======================
// class - blueprint for creating objects

class Employee
{
public:
    int id;
    string name;
    double salary;

    // // member initializer list
    // Employee(int i, string n, double s) : id(i), name(n), salary(s) {}

    //  assignment inside the body
    Employee(int i, string n, double s)
    {
        id = i;
        name = n;
        salary = s;
    }

    void display()
    {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp1(101, "Sonu", 50000.0);
    Employee emp2(102, "Monu", 60000.0);
    emp1.display();
    emp2.display();

    return 0;
}
