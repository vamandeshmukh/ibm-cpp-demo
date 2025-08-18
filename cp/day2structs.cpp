// add
// - vector<phones> printing dynamically using phones.size();
// - add vector<skillset> array
// - vector<skillset> printing dynamically using range-based for loop
// - also use some other methods from vector
// - also handle null values properly

#include <iostream>
#include <vector>
using namespace std;

struct Address
{
    string street;
    string city;
    int pin;
};

struct Employee
{
    int id;
    string name;
    double salary;
    vector<string> phones;
    Address address;
    vector<string> skillset;
    double bonus = 0.0;

    void printData()
    {
        cout << id << " " << name << " " << salary << endl;
        cout << (bonus > 0 ? to_string(bonus) : "No bonus!") << endl;

        if (!phones.empty())
        {
            for (int i = 0; i < phones.size(); i++)
            {
                cout << phones.at(i) << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "No phones!" << endl;
        }

        cout << address.street << " " << address.city << " " << address.pin << endl;

        if (!skillset.empty())
        {
            for (const auto &skill : skillset)
            {
                cout << skill << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "No skills!" << endl;
        }
    }

    void calcBonus(int bonusPct)
    {
        bonus = salary * bonusPct / 100;
    }
};

int main()
{
    Employee emp1 = {101, "Tonu Pandey", 90000.00, {"9822012345", "9876543210"}, {"Thanisandra", "Bengaluru", 500063}, {"C++", "SQL", "React"}, 1.0};

    emp1.calcBonus(10);
    emp1.printData();

    Employee emp2 = {
        102, "Monu Reddy", 80000.00, {}, {"BTM Layout", "Bengaluru", 500076}, {}};
    emp2.printData();
    emp2.phones.push_back("6789012345");
    emp2.skillset.push_back("Java");
    emp2.skillset.push_back("Spring Boot");
    emp2.calcBonus(15);
    emp2.printData();

    Employee emp3 = {103, "Sony Patel", 95000.00, {"9822012345", "9876543210", "9012345678"}, {"Bank street, Abids", "Hyderabad", 500001}, {"SQL", "CPP", "Python"}};

    emp3.printData();
    emp3.phones.pop_back();
    emp3.calcBonus(20);
    emp3.printData();

    return 0;
}

// #include <iostream>
// using namespace std;

// struct Address
// {
//     string street;
//     string city;
//     int pin;
// };

// struct Employee
// {
//     int id;
//     string name;
//     double salary;
//     long long phones[2];
//     Address address;
//     void printData()
//     {
//         cout << id << " " << name << " " << salary << endl;
//         cout << phones[0] << " " << phones[1] << endl;
//         cout << address.street << " " << address.city << " " << address.pin << endl;
//     }
//     double calcBonus(int bonusPct)
//     {
//         return salary + (salary * bonusPct / 100);
//     }
// };

// int main()
// {

//     Employee emp1 = {101, "Tonu Pandey", 90000.00, {9822012345L, 9876543210L}, {"Thanisandra", "Bengaluru", 500063}};
//     emp1.printData();
//     double bonus = emp1.calcBonus(10);
//     cout << bonus << endl;

//     Employee emp2 = {102, "Monu Reddy", 80000.00, {6789012345L}, {"Thanisandra", "Bengaluru", 500063}};
//     emp2.printData();
//     bonus = emp2.calcBonus(5);
//     cout << bonus << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Address
// {
//     string street;
//     string city;
//     int pin;
// };

// struct Employee
// {
//     int id;
//     string name;
//     double salary;
//     string phones[2];
//     Address address;
//     void printData()
//     {
//         cout << id << " " << name << " " << salary << endl;
//         cout << phones[0] << " " << phones[1] << endl;
//         cout << address.street << " " << address.city << " " << address.pin << endl;
//     }
//     double calcBonus(int bonusPct)
//     {
//         return salary + (salary * bonusPct / 100);
//     }
// };

// int main()
// {

//     Employee emp1 = {101, "Tonu Pandey", 90000.00, {"9822012345", "9876543210"}, {"Thanisandra", "Bengaluru", 500063}};
//     emp1.printData();
//     double bonus = emp1.calcBonus(10);
//     cout << bonus << endl;

//     Employee emp2 = {102, "Monu Reddy", 80000.00, {"6789012345"}, {"Thanisandra", "Bengaluru", 500063}};
//     emp2.printData();
//     bonus = emp2.calcBonus(5);
//     cout << bonus << endl;

//     return 0;
// }

// // #include <iostream>
// // using namespace std;

// // struct Address
// // {
// //     string street;
// //     string city;
// //     int pin;
// // };

// // struct Employee
// // {
// //     int id;
// //     string name;
// //     double salary;
// //     string phones[2];
// //     Address address;
// //     void printData()
// //     {
// //         cout << id << " " << name << " " << salary << endl;
// //         cout << phones[0] << " " << phones[1] << endl;
// //         cout << address.street << " " << address.city << " " << address.pin << endl;
// //     }
// // };

// // int main()
// // {

// //     Employee emp3 = {102, "Tonu", 100, {"9822012345", "9876543210"}, {"Thanisandra", "Bengaluru", 500063}};
// //     emp3.printData();

// //     Employee emp;
// //     emp.id = 101;
// //     emp.name = "Sonu";
// //     emp.salary = 50000.50;
// //     emp.address.street = "2, Whites Road";
// //     emp.address.city = "Chennai";
// //     emp.address.pin = 600014;
// //     cout << emp.id << " " << emp.name << " " << emp.salary << endl;
// //     cout << emp.address.street << " " << emp.address.city << " " << emp.address.pin << endl;

// //     // Employee emp2 = {102, "Monu", 5500075, {"Thanisandra", "Bengaluru", 500063}};

// //     return 0;
// // }
