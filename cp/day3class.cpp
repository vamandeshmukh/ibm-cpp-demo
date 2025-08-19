// class -
// members - fields, methods, constructors, inner classes, friends, outsiders
// access - private
// object - stack / heap
// ======================
// class - blueprint for creating objects

#include <iostream>
using namespace std;

int num = 10;

class Employee
{

private:
    double salary;

public:
    // fields
    int id;
    string name;

    // default constructor == no args constructor
    Employee()
    {
        id = 0;
        name = "";
        salary = 0.0;
    }

    // parameterized constructor
    Employee(int i, string n, double s)
    {
        id = i;
        name = n;
        salary = s;
    }

    // member function
    void display()
    {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << num << endl;
    }

    // friend function declaration
    friend void salaryCredited(Employee e);

    // member function outside the class - declaration
    void getBonus();
};

// firend function definition
void salaryCredited(Employee e)
{
    cout << "Salary credited for " << e.name << ": " << e.salary << num << endl;
}

// member function outside the class - definition
void Employee::getBonus()
{
    cout << "Bonus for " << name << ": " << salary * 0.1 << endl;
}

int main()
{
    Employee emp1(101, "Sonu", 50000.0);
    emp1.display();
    salaryCredited(emp1); // calling friend function

    // Employee *emp2 = new Employee(102, "Monu", 60000.0);
    // Employee *emp3 = new Employee();
    // Employee emp4;
    // emp1.display();
    // emp2->display();
    // emp3->display();
    // emp4.display();
    // delete emp2;
    // delete emp3;

    return 0;
}

// #include <iostream>
// using namespace std;

// // class -
// // members - fields, methods, constructors, inner classes
// // access - private
// // object - stack / heap
// // ======================
// // class - blueprint for creating objects

// class Employee
// {

// private:
//     static string officePhone;

// private:
//     double salary;

// public:
//     int id;
//     string name;

//     // member initializer list
//     Employee(int i, string n, double s) : id(i), name(n), salary(s) {}

//     Employee() {}

//     //  assignment inside the body
//     Employee(int i, string n, double s)
//     {
//         id = i;
//         name = n;
//         salary = s;
//     }

//     class SubEmployee
//     {
//     };

//     void display()
//     {
//         cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
//     }
// };

// int main()
// {
//     Employee emp1(101, "Sonu", 50000.0);
//     Employee *emp2 = new Employee(102, "Monu", 60000.0);
//     Employee *emp3 = new Employee();
//     Employee emp4;
//     emp1.display();
//     // emp2.display();
//     // emp3.display();

//     return 0;
// }
