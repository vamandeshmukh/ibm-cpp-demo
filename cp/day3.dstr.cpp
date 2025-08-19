#include <iostream>
using namespace std;

class Employee
{
public:
    void display()
    {
        cout << "Employee is here!" << endl;
    }
};

int main()
{
    Employee *emp = new Employee();
    emp->display();
    
    return 0;
}
