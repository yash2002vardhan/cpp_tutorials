#include <iostream>

using namespace std;

// int main() {
    
//     int age = 36 ;

//     if (age > 45) {
//         cout << "you are very old" ; 
//     }

//     else if (age > 40) {
//         cout << "you are old" ; 
//     }

//     else {
//         cout << "you are young" ;
//     }

// }


// ternary operator

int main() {

    int age = 18;

    // string result = (age > 18) ? "you are eligible to vote" : "you are not eligible to vote" ;

    string result = (age > 18) ? "you are eligible to vote" : (age == 18) ? "you are just eligible to vote" : "you are not eligible to vote" ;

    cout << result ;

    // cout << ((age > 18) ? "you are eligible to vote" : "you are not eligible to vote" );    
}
