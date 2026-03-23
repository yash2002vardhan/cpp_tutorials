/*

Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.), by "pointing" to them.

It is called an "iterator" because "iterating" is the technical term for looping.

*/

#include <iostream>
using namespace std;

int main() {

    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Create a vector iterator called it
    vector<string>::iterator it;

    // Loop through the vector with the iterator
    for (it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << "\n";
    }

    for (auto it2 = cars.begin() ; it2 != cars.end() ; it2++){ // another way to use iterators ; .end points to the position after the last element
        cout << *it2 << endl;
    }

    return 0;
}
