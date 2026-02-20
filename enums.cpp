#include <iostream>
using namespace std;

enum Level {
    LOW = 25,
    MEDIUM = 30,
    HARD = 35
};

int main() {

    Level myVar = MEDIUM;

    cout << myVar; // be default first value is zero and so on (if you have not assigned any values)



    return 0;
}
