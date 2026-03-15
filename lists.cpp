/*

A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.

However, two major differences between lists and vectors are:

1. You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

2. Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.
 */

#include <iostream>
#include <list>
using namespace std;

int main() {

    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print list elements
    for (string car : cars) {
        cout << car << "\n";
    }

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // Add an element at the beginning
    cars.push_front("Tesla");

    // Add an element at the end
    cars.push_back("VW");

    cout << cars.front() << endl;
    cout << cars.back() << endl;


    // Remove the first element
    cars.pop_front();

    // Remove the last element
    cars.pop_back();

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cout << cars.size() << endl;

    cout << cars.empty() << endl;  // Outputs 1 (The list is empty)


    // this will not work as we cannot access elements via idx
    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << "\n";
      }


    return 0;
}
