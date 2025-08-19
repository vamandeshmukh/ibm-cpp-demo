#include <iostream>
// #include "employee"

// using namespace std;

#define PI 3.14;

int main()
{
    const int num = 10;
    std::cout << num << std::endl;
    // num = 11;
    // cout << num << endl;
    std::cout << 20 << std::endl;

    return 0;
}

// // DRY - Don't Repeat Yourself
// // KISS - Keep It Simple, Stupid

// template <typename T>
// class Box
// {
//     T content;

// public:
//     Box(T c) : content(c) {}
//     void show() { cout << content << endl; }
// };

// int main()
// {
//     Box<int> b1(123);
//     Box<string> b2("Hello");

//     b1.show(); // 123
//     b2.show(); // Hello
//     return 0;
// }

// // #include <iostream>
// // using namespace std;

// // // template function with one datatype
// // template <typename T>
// // T add(T x, T y)
// // {
// //     return x + y;
// // }

// // // template function with multiple datatypes
// // template <typename T1, typename T2>
// // void tempFun(T1 x, T2 y)
// // {
// //     cout << "x: " << x << ", y: " << y << endl;
// // }
// // int main()
// // {
// //     int num = add(10, 20);
// //     cout << num << endl;
// //     double num2 = add(3.50, 4.75);
// //     cout << num2 << endl;
// //     // invoke tempFun here
// //     return 0;
// // }

// // // #include <iostream>
// // // using namespace std;

// // // int add(int x, int y)
// // // {
// // //     return x + y;
// // // }

// // // int main()
// // // {
// // //     int num = add(10, 20);
// // //     cout << num << endl;
// // //     // string num2 = add("abc", "def");
// // //     // cout << num2 << endl;
// // //     return 0;
// // // }