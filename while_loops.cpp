#include <iostream>
using namespace std;

int main() {

    int number ;
    cout << "Enter a number : " ;
    cin >> number ;

    while (number > 10) {
        cout << "you are  not eligible \n" ;
        number -- ;
    }
    

    return 0;
}
