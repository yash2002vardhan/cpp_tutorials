#include <iostream>
using namespace std;


// void greet_user(string name){ // this means that this function do not return anything, therefore we cannot use return keyword here
//     cout << "Hello " << name ;
// }

// int add_nums(int num1, int num2) {
//     int result = num1 + num2 ;
//     return result ;

// }


// int main() {

//     // string name;
//     // cout << "Please enter your name : " ;
//     // cin >> name ;

//     // greet_user(name);
//     int value = add_nums(3, 4) ;
//     cout << value ;


//     return 0;
// }

// another way to declare and use functions

// // Function declaration
// void myFunction();

// // The main method
// int main() {
//   myFunction();  // call the function
//   return 0;
// }

// // Function definition
// void myFunction() {
//   cout << "I just got executed!";
// }

// pass by reference

// void changeValue(int &num) {
//     num = 50;
//   }
  
//   int main() {
//     int value = 10;
//     changeValue(value);  // Call the function and change the value to 50
//     cout << value; 
//     return 0;
//   }


//swapping values of the variables

// void swapNums(int &x, int &y) {
//     int z = x;
//     x = y;
//     y = z;
//   }
  
//   int main() {
//     int firstNum = 10;
//     int secondNum = 20;
  
//     cout << "Before swap: " << "\n";
//     cout << firstNum << secondNum << "\n";
  
//     // Call the function, which will change the values of firstNum and secondNum
//     swapNums(firstNum, secondNum);
  
//     cout << "After swap: " << "\n";
//     cout << firstNum << secondNum << "\n";
  
//     return 0;
//   }


struct Car {
    string brand;
    int year;
  };
  
  void myFunction(Car c) {
    cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
  }
  
  int main() {
    Car myCar = {"Toyota", 2020};
    myFunction(myCar);
    return 0;
  }
