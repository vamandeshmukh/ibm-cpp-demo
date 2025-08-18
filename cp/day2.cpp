#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    cout << num << endl;
    int* numPtr = &num; // Pointer to num
    cout << *numPtr << endl; 
    cout << numPtr << endl; // Address of num
    return 0;
}

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
