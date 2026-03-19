/*
A set stores unique elements where they:

Are sorted automatically in ascending order.
Are unique, meaning equal or duplicate values are ignored.
Can be added or removed, but the value of an existing element cannot be changed.
Cannot be accessed by index numbers, because the order is based on sorting and not indexing.

*/

#include <iostream>
#include <set>
using namespace std;

int main() {

    // set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // // Print set elements
    // for (string car : cars) {
    // cout << car << "\n";
    // }

    // // Create a set called numbers that will store integers
    // set<int> numbers = {1, 7, 3, 2, 5, 9};

    // // Print set elements
    // for (int num : numbers) {
    // cout << num << "\n";
    // }



    // By default, the elements in a set are sorted in ascending order. If you want to reverse the order, you can use the greater<type> functor inside the angle brackets, like this:

    set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};
    // Print the elements
    for (int num : numbers) {
    cout << num << "\n";
    }

    // set<string> cars = {"Volvo", "BMW", "Ford", "BMW", "Mazda"};

    // // Print set elements
    // for (string car : cars) {
    // cout << car << "\n";
    // }


    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Add new elements
    cars.insert("Tesla");
    cars.insert("VW");
    cars.insert("Toyota");
    cars.insert("Audi");

    // Remove elements
    cars.erase("Volvo");
    cars.erase("Mazda");

    // Remove all elements
    cars.clear();

    cout << cars.size() << endl;  // Outputs 4

    for (string car : cars){
        cout << car << endl;
    }

    cout << cars.empty();  // Outputs 1 (The set is empty)

    return 0;
}
