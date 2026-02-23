#include <iostream>
using namespace std;


void greet_user(string name){ // this means that this function do not return anything, therefore we cannot use return keyword here
    cout << "Hello " << name ;
}

int add_nums(int num1, int num2) {
    int result = num1 + num2 ;
    return result ;

}


int main() {

    // string name;
    // cout << "Please enter your name : " ;
    // cin >> name ;

    // greet_user(name);
    int value = add_nums(3, 4) ;
    cout << value ;


    return 0;
}

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
