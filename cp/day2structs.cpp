#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

int main()
{
    Employee emp;
    emp.id = 101;
    emp.name = "Sonu";
    emp.salary = 50000.50;
    cout << emp.id << "" << emp.name << " " << emp.salary << endl;

    return 0;
}
