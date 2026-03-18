/*
A deque (stands for double-ended queue) however, is more flexible, as elements can be added and removed from both ends (at the front and the back). You can also access elements by index numbers.
*/

#include <iostream>
#include <deque>


using namespace std;

int main() {

    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print deque elements
    for (string car : cars) {
    cout << car << "\n";
    }

    // Get the first element
    cout << cars[0] << endl;  // Outputs Volvo

    // Get the second element
    cout << cars[1] << endl;  // Outputs BMW

    // Get the first element
    cout << cars.front() << endl;

    // Get the last element
    cout << cars.back() << endl;

    // Get the second element
    cout << cars.at(1) << endl;

    // Get the third element
    cout << cars.at(2) << endl;

    /*To add elements to a deque, you can use .push_front() to insert an element at the beginning of the deque and .push_back() to add an element at the end:*/

    // Add an element at the beginning
    cars.push_front("Tesla");

    // Add an element at the end
    cars.push_back("VW");


    // Remove the first element
    cars.pop_front();

    // Remove the last element
    cars.pop_back();

    cout << cars.size() << endl;  // Outputs 4

    cout << cars.empty();  // Outputs 1 (The deque is empty)



    return 0;
}
