#include <iostream>
using namespace std;

int main() {

    int myArray[5] = {0, 1, 2, 3, 4} ;

    for (int i : myArray) {
        cout << i << "\n";
    }

    string word = "Hello";
    for (char c : word) {
        cout << c << "\n";
    }

    return 0;
}
