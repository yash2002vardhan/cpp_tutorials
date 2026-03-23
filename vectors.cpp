#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {1, 2, 3, 4, 5};

    for (int i: nums){
        cout << i << endl;
    }

    cout << nums.front() << endl ; // prints first element
    cout << nums.back() << endl ; // prints last element

    cout << nums.at(2) << endl; // prints number at index 2

    // vectors mutable, like we can change/add/remove a value

    nums.push_back(6); // adds an element to the last

    cout << nums.back() << endl;

    nums.pop_back(); // remove the last element

    cout << nums.back() << endl;

    cout << nums.size() << endl; // prints the numbe of elements in the vector

    vector<string> cars = {};

    cout << cars.empty() << endl; // returns 1 if vector is empty


    return 0;
}
