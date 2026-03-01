#include <iostream>
using namespace std;

// class User{
//     public:
//         void greet_user(string user_name){
//             cout << "Hello " << user_name;
//         }

// };

// int main() {


//     User google;
//     string user_name = "yash";
//     google.greet_user(user_name);

//     return 0;
// }


// another method

class MyClass {        // The class
    public:              // Access specifier
      void myMethod();   // Method/function declaration
  };
  
  // Method/function definition outside the class
  void MyClass::myMethod() {
    cout << "Hello World!";
  }
  
  int main() {
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method
    return 0;
  }
