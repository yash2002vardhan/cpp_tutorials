#include <iostream>

using namespace std ;

int main() {
    int day = 4;
    switch (day) {
        case 6:
            cout << "Today is Saturday";
            break;
        case 7:
            cout << "Today is Sunday";
            break;
        default: // this will run if none of the case is matched
            cout << "Looking forward to the Weekend";
    }
}
