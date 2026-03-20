/*A map stores elements in "key/value" pairs.

Elements in a map are:

Accessible by keys (not index), and each key is unique.
Automatically sorted in ascending order by their keys.*/

#include <iostream>
#include <map>
using namespace std;

int main() {

    // map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // // Get the value associated with the key "John"
    // cout << "John is: " << people["John"] << "\n";

    // // Get the value associated with the key "Adele"
    // cout << "Adele is: " << people["Adele"] << "\n";

    //  // Get the value associated with the key "Adele"
    // cout << "Adele is: " << people.at("Adele") << "\n"; // preferred approach

    // // Get the value associated with the key "Bo"
    // cout << "Bo is: " << people.at("Bo") << "\n";


    // // Add new elements
    // people["Jenny"] = 22;
    // people["Liam"] = 24;
    // people["Kasper"] = 20;
    // people["Anja"] = 30;


    // people.insert({"Jenny", 22});
    // people.insert({"Liam", 24});
    // people.insert({"Kasper", 20});
    // people.insert({"Anja", 30});


    // // Remove an element by key
    // people.erase("John");

    // // Remove all elements
    // people.clear();

    // cout << people.size() << endl;  

    // cout << people.empty(); // Outputs 1 (The map is empty)

    /*You can loop through a map with the for-each loop. However, there are a couple of things to be aware of:

You should use the auto keyword (introduced in C++ version 11) inside the for loop. This allows the compiler to automatically determine the correct data type for each key-value pair.
Since map elements consist of both keys and values, you have to include .first to access the keys, and .second to access values in the loop.
Elements in the map are sorted automatically in ascending order by their keys:*/


    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    for (auto person : people) {
    cout << person.first << " is: " << person.second << "\n"; // .first to access keys and .second to access values
    }

    //If you want to reverse the order, you can use the greater<type> functor inside the angle brackets, like this:

    cout << "============================================================" << endl;
    map<string, int, greater<string>> people2 = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    for (auto person : people2) {
    cout << person.first << " is: " << person.second << "\n";
    }

    return 0;
}
