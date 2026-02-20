#include <iostream>
using namespace std;

// int main() {

//     string myCars[4] = {"car1", "car2", "car3", "car4"}; // one way to define an array

//     string myCars2[] = {"car2", "car3", "car4", "car5"}; // another way to define an array

//     // arrays are fixed size, meaning you cannot add or delete an element from it

//     // cpp has vectors to handle this

//     vector<string> cars = {"car1", "car2", "car3", "car4"};
//     cars.push_back("car5");

//     for (string i : cars){
//         cout << i << "\n";
//     }
//     return 0;
// }

int main() {

    int myArray[5] = {1, 2, 3, 4, 5};

    cout << sizeof(myArray); // this returns the size of the type in bytes ; this means it will be 4*5 = 20 (integer takes up 4 bytes)

    cout << "\n" ;
    
    cout << (sizeof(myArray) / sizeof(myArray[0])) ; // this will return the number of elements in the array



}
