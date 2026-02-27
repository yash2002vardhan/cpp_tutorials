#include <iostream>
using namespace std;

// int main() {
//     auto message = []() { // syntax is as : [capture](parameters){code}
//       cout << "Hello World!\n";
//     };
  
//     message();
//     return 0;
//   }


// // another example
// int main() {
//     auto add = [](int a, int b) { // auto will automatically determine the variable type based on the return value, we don't need to explicitly mention the data type
//       return a + b;
//     };
  
//     cout << add(3, 4);
//     return 0;
//   }


// passing labmdas to functions

// // A function that takes another function as parameter
// void myFunction(function<void()> func) {
//     func();
//     func();
//   }
  
//   int main() {
//     auto message = []() {
//       cout << "Hello World!\n";
//     };
  
//     myFunction(message);
//     return 0;
//   }


// usage of capture

// int main() {
//     for (int i = 1; i <= 3; i++) {
//       auto show = [i]() { // You can use the [ ] brackets to give a lambda access to variables outside of it.
//         cout << "Number: " << i << "\n";
//       };
//       show();
//     }
//     return 0;
//   }
  


int main() {

    string greeting = "Hello World" ;
    auto message = [&greeting]() { // here we are passing by reference therefore it will always get the latest value
      cout << greeting;
    };

    greeting = "Hello yash" ;

    
  
    message();
    return 0;
  }
