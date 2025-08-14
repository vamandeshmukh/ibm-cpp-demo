// version 1 
#include <iostream>

int main() {
    int someInt = 10;
    std::string name;
    std::cout << "Enter your name: "; // Sonu Joshi 
    std::cin >> name; // this     
    // std::getline(std::cin, name); // and this     
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}

// // version 2 
// #include <iostream>

// int main() {
//     std::string name;
//     std::cout << "Enter your name: ";
//     std::getline(std::cin, name);    
//     std::cout << "Hello, " << name << "!" << std::endl;
//     return 0;
// }

// // // version 1 
// // #include <iostream>
// // using namespace std;
// // // import java.util.*;

// // int main() {
// //     string name;
// //     cout << "Enter your name: ";
// //     getline(cin, name);    
// //     cout << "Hello, " << name << "!" << endl;
// //     return 0;
// // }
