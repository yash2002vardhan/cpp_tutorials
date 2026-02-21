#include <iostream>
using namespace std;

int main() {

    // a pointer is a variabe which stores the memory address of another variable
    string food = "Pizza";
    string* p1 = &food ;

    cout << food << "\n";
    cout << &food << "\n";
    cout << p1 << "\n";

    cout << *p1 << "\n"; // this will return the value of the variable food

    *p1 = "Hamburber" ; // this will change the value of the food variable as well

    cout << *p1 << "\n" ;

    cout << food << "\n" ;

    // TODO:
    // Learn memory management in details

    // for now remember keywords 'new' and 'delete' are used to allocate memory and deleting the same resp.

    

    return 0;
}
