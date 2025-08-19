// class -
// members - fields, methods, constructors, inner classes
// access - private
// object - stack / heap
// ======================
// class - blueprint for creating objects

#include <iostream>
using namespace std;

class Employee
{

public:
    int id;
    string name;
    double salary;

    Employee() {}

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
    Employee *emp2 = new Employee(102, "Monu", 60000.0);
    Employee *emp3 = new Employee();
    Employee emp4;
    emp1.display();
    emp2->display();
    emp3->display();
    emp4.display();

    delete emp2;
    delete emp3;

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
