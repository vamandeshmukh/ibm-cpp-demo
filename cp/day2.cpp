#include <iostream>
#include <memory>
using namespace std;

// Which one to use?

int main()
{

    int* ptr = new int(10); // old fashioned pointer
    cout << *ptr << endl;
    unique_ptr<int> smrtPtr(new int(20)); // smart pointer 1
    cout << *smrtPtr << endl;
    shared_ptr<int> sharedPtr(new int(30)); // smart pointer 2
    cout << *sharedPtr << endl;
    delete ptr; // delete
    return 0;
}

// #include <iostream>
// #include <memory>
// using namespace std;

// int main()
// {
//     // memory management
//     // smart pointers
//     unique_ptr<int> smrtPtr(new int(10)); // unique pointer
//     cout << *smrtPtr << endl; // Accessing value through unique pointer

//     shared_ptr<int> sharedPtr(new int(30)); // shared pointer
//     cout << *sharedPtr << endl; // Accessing value through shared pointer

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // memory management
//     int* ptr = new int;
//     int arr[5];

//     int n = 5; // dynamic
//     int* numArray = new int[n];

//     int num = 10;
//     cout << num << endl;
//     int* numPtr = &num; // Pointer to num
//     cout << *numPtr << endl;
//     cout << numPtr << endl; // Address of num
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num = 10;
//     cout << num << endl;
//     int* numPtr = &num; // Pointer to num
//     cout << *numPtr << endl;
//     cout << numPtr << endl; // Address of num
//     return 0;
// }
