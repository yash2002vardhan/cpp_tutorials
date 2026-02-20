#include <iostream>
using namespace std;

int main() {

    string food = "Pizza" ;
    string &meal = food ;

    cout << "food = " << food << "\n" ;
    cout << "meal = " << meal << "\n" ; 

    food = "Burger" ;  // now both the values will be changed

    cout << "food = " << food << "\n" ;
    cout << "meal = " << meal << "\n" ; 

    // the & operator can also be used to get the memory address of the variable

    cout << &food ;

    return 0;
}
