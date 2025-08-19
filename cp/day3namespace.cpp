#include <iostream>
using namespace std;

namespace MyNameSpace
{
    int num = 10;
    class Employee
    {
    public:
        void display()
        {
            cout << "Employee number: " << num << endl;
        }
    };
}

int main()
{
    MyNameSpace::Employee emp;
    emp.display();
    return 0;
}
