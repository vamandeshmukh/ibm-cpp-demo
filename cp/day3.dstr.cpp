#include <iostream>
using namespace std;

class Human
{
public:
    void display()
    {
        cout << "Human is here!" << endl;
    }
    Human()
    {
        cout << "Human object created!" << endl;
    }
    ~Human()
    {
        cout << "Human object destroyed!" << endl;
    }
};

class Person : public Human
{
public:
    void display()
    {
        cout << "Person is here!" << endl;
    }
    Person()
    {
        cout << "Person object created!" << endl;
    }
    ~Person()
    {
        cout << "Person object destroyed!" << endl;
    }
};

class Employee : public Person
{
public:
    Employee()
    {
        cout << "Employee object created!" << endl;
    }
    ~Employee()
    {
        cout << "Employee object destroyed!" << endl;
    }
};

int main()
{
    Employee *emp = new Employee();
    emp->display();
    delete emp;
    return 0;
}
