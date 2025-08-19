#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Operator overloading for +
    Complex operator+(const Complex &other)
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to display complex number
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex c3 = c1 + c2; // Uses overloaded + operator

    c3.display(); // Output: 4 + 6i
    return 0;
}

// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     float real, imag;

// public:
//     Complex(float r = 0, float i = 0) : real(r), imag(i) {}

//     // Overload the '+' operator
//     Complex operator+(const Complex &other)
//     {
//         return Complex(real + other.real, imag + other.imag);
//     }

//     void display() const
//     {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main()
// {
//     Complex c1(3.5, 2.5);

//     Complex c2(1.5, 4.5);
//     return 0;
// }

// // #include <iostream>
// // #include <memory>
// // using namespace std;

// // // Which one to use?

// // int main()
// // {

// //     int* ptr = new int(10); // old fashioned pointer
// //     cout << *ptr << endl;
// //     unique_ptr<int> smrtPtr(new int(20)); // smart pointer 1
// //     cout << *smrtPtr << endl;
// //     shared_ptr<int> sharedPtr(new int(30)); // smart pointer 2
// //     cout << *sharedPtr << endl;
// //     delete ptr; // delete
// //     return 0;
// // }

// // // #include <iostream>
// // // #include <memory>
// // // using namespace std;

// // // int main()
// // // {
// // //     // memory management
// // //     // smart pointers
// // //     unique_ptr<int> smrtPtr(new int(10)); // unique pointer
// // //     cout << *smrtPtr << endl; // Accessing value through unique pointer

// // //     shared_ptr<int> sharedPtr(new int(30)); // shared pointer
// // //     cout << *sharedPtr << endl; // Accessing value through shared pointer

// // //     return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     // memory management
// // //     int* ptr = new int;
// // //     int arr[5];

// // //     int n = 5; // dynamic
// // //     int* numArray = new int[n];

// // //     int num = 10;
// // //     cout << num << endl;
// // //     int* numPtr = &num; // Pointer to num
// // //     cout << *numPtr << endl;
// // //     cout << numPtr << endl; // Address of num
// // //     return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     int num = 10;
// // //     cout << num << endl;
// // //     int* numPtr = &num; // Pointer to num
// // //     cout << *numPtr << endl;
// // //     cout << numPtr << endl; // Address of num
// // //     return 0;
// // // }
