#include <iostream>
#include <string>
using namespace std;

// OOP concepts in C++

struct Calc
{
    void add(int a, int b)
    {
        cout << "Sum: " << a + b << endl;
    }
    void add(double a, double b)
    {
        cout << "Sum: " << a + b << endl;
    }
    void add(int a, double b)
    {
        cout << "Sum: " << a + b << endl;
    }
};

main()
{

    return 0;
}
