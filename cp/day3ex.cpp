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
        if (a < 0 || b < 0)
        {
            throw invalid_argument("Negative numbers are not allowed.");
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
    catch (runtime_error &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (...)
    {
        std::cerr << "Something is wrong!" << '\n';
    }
    return 0;
}
