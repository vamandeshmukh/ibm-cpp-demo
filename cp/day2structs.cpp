#include <iostream>
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
    // array ? // phones 
    Address address;
    // functions ? to print data 
};

int main()
{
    Employee emp;
    emp.id = 101;
    emp.name = "Sonu";
    emp.salary = 50000.50;
    emp.address.street = "2, Whites Road";
    emp.address.city = "Chennai";
    emp.address.pin = 600014;
    cout << emp.id << " " << emp.name << " " << emp.salary << endl;
    cout << emp.address.street << " " << emp.address.city << " " << emp.address.pin << endl;

    Employee emp2 = {102, "Monu", 5500075, {"Thanisandra", "Bengaluru", 500063}};

    return 0;
}
