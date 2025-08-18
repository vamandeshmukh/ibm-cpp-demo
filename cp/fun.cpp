#include <iostream>

int addNums(int a, int b);
int addNums2(int a, int b = 5);

int main()
{
    int sum = addNums(10, 10);
    std::cout << sum << std::endl;
    sum = addNums2(addNums(2, 2) , 20);
    std::cout << sum << std::endl;
    sum = addNums2(10);
    return 0;
}

int addNums(int a, int b)
{
    return a + b;
}

int addNums2(int a, int b)
{
    return a + b;
}


// g++ -std=c++17  fun.cpp -o fun



// #include <iostream>

// // function declaration
// int addNums(int a, int b);
// // int addNums(int, int);
// int addNums2(int a, int b = 5);
// int addNums3(const int a, int b);
// void addNums4(const int a, int b);
// int giveNum();

// int main()
// {
//     int sum = addNums(10, 10);
//     std::cout << sum << std::endl;
//     sum = addNums2(10, 20);
//     std::cout << sum << std::endl;
//     sum = addNums2(10);
//     std::cout << sum << std::endl;
//     sum = addNums3(10, 10);
//     std::cout << sum << std::endl;
//     // sum = addNums4(10, 10);
//     addNums4(10, 10);
//     sum = giveNum();
//     std::cout << sum << std::endl;
//     return 0;
// }

// // function definition
// int addNums(int a, int b)
// {
//     return a + b;
// }

// int addNums2(int a, int b)
// {
//     return a + b;
// }

// int addNums3(const int a, int b)
// {
//     // a++; // CE error: cannot modify a variable that is const
//     return a + b;
// }

// void addNums4(const int a, int b)
// {
//     // return a + b; // CE error: void function cannot return a value
//     std::cout << a + b << std::endl;
// }
// int giveNum()
// {
//     return 10;
// }

// // g++ -std=c++17  fun.cpp -o fun
