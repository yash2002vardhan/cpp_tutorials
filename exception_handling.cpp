#include <iostream>
using namespace std;

// int main() {

//     try {
//         int age = 15;
//         if (age >= 18) {
//           cout << "Access granted - you are old enough.";
//         } else {
//           throw (age);
//         }
//       }
//       catch (int myNum) { // myNum becomes age, as it is thrown by the 'throw' keyword
//         cout << "Access denied - You must be at least 18 years old.\n";
//         cout << "Age is: " << myNum;
//       }
// }

int main() {
    try {
        int age = 15;
        if (age >= 18) {
          cout << "Access granted - you are old enough.";
        } else {
          throw 505;
        }
      }
      catch (...) { // we use '...' when we do not know the type of error
        cout << "Access denied - You must be at least 18 years old.\n";
      }
}
