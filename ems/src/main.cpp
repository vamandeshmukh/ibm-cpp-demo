#include <string>
#include "../include/Employee.h"
#include "../include/Department.h"

int main()
{
    Employee e1(101, "Sonu", 50000);
    Employee e2(102, "Monu", 60000);
    Employee e3(103, "Tonu", 55000);

    Department d1("IT");
    d1.addEmployee(e1);
    d1.addEmployee(e2);

    Department d2("HR");
    d2.addEmployee(e3);

    d1.showDepartment();
    d2.showDepartment();

    return 0;
}

// on CMD -
// D:\Projects\ibm\ems
// build -
// g++ src/*.cpp -I include -o build/ems
// run -
// build\ems.exe
