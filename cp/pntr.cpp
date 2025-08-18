#include <iostream>
using namespace std;

int factorial(int n)
{
    cout << "n " << n << " ";
    if (n <= 1)
    {
        cout << endl;
        return 1;
    }
    else
    {
        int temp = n * factorial(n - 1);
        cout << "temp " << temp << " ";
        return temp; //
    }
}

int main()
{
    int a = factorial(5);
    cout << "a = " << a << endl;
}

// #include <iostream>
// using namespace std;

// // Pass by value (original variable unchanged)
// void passByValue(int x) { x = x + 10; }

// // Pass by reference (original variable changed)
// void passByReference(int &x) { x = x + 10; }

// int main()
// {
//     int a = 5, b = 5;
//     passByValue(a);
//     passByReference(b);

//     cout << "a = " << a << endl; // 5
//     cout << "b = " << b << endl; // 15
// }

// // #include <iostream>

// // int main()
// // {
// //     int arrSize;
// //     std::cin >> arrSize;
// //     int arr[arrSize];

// //     std::cout << " " << std::endl;

// //     return 0;
// // }
