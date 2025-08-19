#include <iostream>
using namespace std;

class Calc
{

public:
    int divideNums(int a, int b)
    {
        if (b == 0)
        {
            throw runtime_error("Division by zero is not allowed.");
        }
        return a / b;
    }
};

int main()
{
    int a, b, c;
    cout << "Enter an int: ";
    cin >> a;
    cout << "Enter another int: ";
    cin >> b;
    Calc calc;
    try
    {
        c = calc.divideNums(a, b);
        cout << "Result: " << c << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
