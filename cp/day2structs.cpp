#include <iostream>
#include <vector>
using namespace std;

// add 
// - vector<phones> printing dynamically using phones.size(); 
// - bonus can be set only through calcBonus function 
// - add vector<skillset> array 
// - vector<skillset> printing dynamically using range-based for loop
// - also use some other methods from vector 
// - also handle null values properly 

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
    double bonus; 
    vector<string> phones;
    Address address;
    vector<string> skillset;

    void printData()
    {
        cout << id << " " << name << " " << salary << endl;
        // cout use phones.size();
        cout << address.street << " " << address.city << " " << address.pin << endl;
        // cout use range-based for loop to print skillset 
    }
    double calcBonus(int bonusPct)
    {
        return salary + (salary * bonusPct / 100);
        // set to bonus field 
    }
};

int main()
{

    Employee emp1 = {101, "Tonu Pandey", 90000.00, {"9822012345", "9876543210"}, {"Thanisandra", "Bengaluru", 500063}};
    emp1.printData();

    Employee emp2 = {102, "Monu Reddy", 80000.00, {"6789012345"}, {"Thanisandra", "Bengaluru", 500063}};
    // emp2.phones.push_back("6789012345");
    // emp2.phones.size();
    emp2.printData();

    Employee emp3 = {103, "Sony Patel", 90000.00, {"9822012345", "9876543210", "9876543210"}, {"Thanisandra", "Bengaluru", 500063}};
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
