// version 5
#include <iostream>

int main()
{
    for (char b = 0; b < 1000; ++b) {
        std::cout << b << " ";
    }
    std::cout << std::endl;
    return 0;
}


// // version 4
// #include <iostream>

// int main()
// {
//     int id;
//     std::string name;
//     double salary;

//     std::cout << "Enter your id: ";
//     std::cin >> id;
//     std::cout << "Enter your name: "; // Sonu Joshi
//     std::cin.ignore();
//     std::getline(std::cin, name);
//     std::cout << "Enter your salary: ";
//     std::cin >> salary;
//     std::cout << id << " " << name << " " << salary << std::endl;
//     return 0;
// }

// // version 3
// #include <iostream>

// int main() {
//     std::string name;
//     std::cout << "Enter your name: "; // Sonu Joshi
//     std::cin >> name; // this
//     // std::getline(std::cin, name); // and this
//     std::cout << "Hello, " << name << "!" << std::endl;
//     return 0;
// }

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
