#include <iostream>
#include <string>
using namespace std;

struct A
{
    void funA()
    {
        cout << "A::fun()" << endl;
    }
};

struct B
{
    void funB()
    {
        cout << "B::fun()" << endl;
    }
};

struct C : public A, public B
{
private:
    int id2;

public:
    int id;

    int getId2()
    {
        return id2;
    }
    void setId2(int id)
    {
        id2 = id;
    }
};

main()
{
    C c;
    // c.fun(); // CE
    c.funA(); // OK
    c.funB(); // OK

    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// struct Employee
// {
//     int id;
//     string name;
//     double salary;

//     // pure virtual function in C++ == abstract method in Java
//     virtual void printBonus() = 0;
// };

// struct ContractEmployee : public Employee
// {

//     void printBonus() override
//     {
//         cout << "No bonus for contractuals!" << endl;
//     }
// };

// int main()
// {
//     // Employee emp1;
//     // emp1.printBonus();
//     ContractEmployee emp2;
//     emp2.printBonus();
//     return 0;
// }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // struct Employee
// // {
// //     int id;
// //     string name;
// //     double salary;

// // Virtual function to be overridden in derived classes
// //     virtual void printBonus()
// //     {
// //         cout << "Bonus received by employee!" << endl;
// //     }
// // };

// // struct ContractEmployee : public Employee
// // {

// //     void printBonus() override
// //     {
// //         cout << "No bonus for contractuals!" << endl;
// //     }
// // };

// // int main()
// // {
// //     Employee emp1;
// //     emp1.printBonus();
// //     ContractEmployee emp2;
// //     emp2.printBonus();
// //     return 0;
// // }

// // // #include <iostream>
// // // #include <string>
// // // using namespace std;

// // // struct Employee
// // // {
// // //     int id;
// // //     string name;
// // //     double salary;

// // //     void printData()
// // //     {
// // //         cout << id << " " << name << " " << salary << endl;
// // //     }

// // //     virtual void printBonus();

// // //     // virtual void printBonus()
// // //     // {
// // //     //     cout << salary * 2 << endl;
// // //     // }
// // // };

// // // int main()
// // // {
// // //     // Employee emp1 = {101, "Tonu Pandey", 90000.00};
// // //     // emp1.printData();
// // //     // // emp1.printBonus();
// // //     return 0;
// // // }
