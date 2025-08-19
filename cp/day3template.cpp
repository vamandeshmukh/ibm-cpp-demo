#include <iostream>
using namespace std;

// template function with one datatype
template <typename T>
T add(T x, T y)
{
    return x + y;
}

// template function with multiple datatypes
template <typename T1, typename T2>
void tempFun(T1 x, T2 y)
{
    cout << "x: " << x << ", y: " << y << endl;
}
int main()
{
    int num = add(10, 20);
    cout << num << endl;
    double num2 = add(3.50, 4.75);
    cout << num2 << endl;
    // string num3 = add("aaa", "bbb");
    // cout << num3 << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int add(int x, int y)
// {
//     return x + y;
// }

// int main()
// {
//     int num = add(10, 20);
//     cout << num << endl;
//     // string num2 = add("abc", "def");
//     // cout << num2 << endl;
//     return 0;
// }