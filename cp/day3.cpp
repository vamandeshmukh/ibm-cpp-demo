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

    // Operator overloading for -
    Complex operator-(const Complex &other)
    {
        return Complex(real - other.real, imag - other.imag);
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
    Complex c4 = c1 - c2; // CE error: no match for 'operator-' (operand types are 'Complex' and 'Complex')

    c3.display(); // Output: 4 + 6i
    c4.display(); // Output: 4 + 6i
    return 0;
}

// // #include <iostream>

// // using namespace std;

// // class Calc
// // {
// // public:
// //     int x;
// //     int add(int y)
// //     {
// //         return x + y;
// //     }
// // };

// // int main()
// // {

// //     Calc calc;
// //     calc.x = 10;                    // Initialize x
// //     int y = 20;                     // Another number to add
// //     int num = calc.add(y);          // Function call
// //     cout << "Sum: " << num << endl; // Output the result

// //     return 0;
// // }

// // // int main()
// // // {
// // //     int x = 10, y = 20;
// // //     int num = add(x, y);            // Function call
// // //     cout << "Sum: " << num << endl; // Output the result

// // //     return 0;
// // // }

// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int real;
//     int imag;

// public:
//     // Constructor
//     Complex(int r = 0, int i = 0) : real(r), imag(i) {}

//     // Operator overloading for +
//     Complex operator+(const Complex &other)
//     {
//         return Complex(real + other.real, imag + other.imag);
//     }

//     // Operator overloading for -
//     Complex operator-(const Complex &other)
//     {
//         return Complex(real - other.real, imag - other.imag);
//     }

//     // Function to display complex number
//     void display()
//     {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main()
// {
//     Complex c1(3, 4);
//     Complex c2(1, 2);

//     Complex c3 = c1 + c2; // Uses overloaded + operator
//     Complex c4 = c1 - c2; // CE error: no match for 'operator-' (operand types are 'Complex' and 'Complex')

//     c3.display(); // Output: 4 + 6i
//     c4.display(); // Output: 4 + 6i
//     return 0;
// }

// // #include <iostream>

// // using namespace std;

// // class Calc
// // {
// // public:
// //     int x;
// //     int operator add +  (int y)
// //     {
// //         return x + y;
// //     }
// // };

// // int main()
// // {

// //     Calc calc;
// //     calc.x = 10;                    // Initialize x
// //     int y = 20;                     // Another number to add
// //     int num = calc.add(y);          // Function call
// //     cout << "Sum: " << num << endl; // Output the result

// //     return 0;
// // }

// // // #include <iostream>

// // // using namespace std;

// // // class Calc
// // // {
// // // public:
// // //     int x;
// // //     int add(int y)
// // //     {
// // //         return x + y;
// // //     }
// // // };

// // // int main()
// // // {

// // //     Calc calc;
// // //     calc.x = 10;                    // Initialize x
// // //     int y = 20;                     // Another number to add
// // //     int num = calc.add(y);          // Function call
// // //     cout << "Sum: " << num << endl; // Output the result

// // //     return 0;
// // // }

// // // // int main()
// // // // {
// // // //     int x = 10, y = 20;
// // // //     int num = add(x, y);            // Function call
// // // //     cout << "Sum: " << num << endl; // Output the result

// // // //     return 0;
// // // // }
