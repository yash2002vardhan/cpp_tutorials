#include <iostream>
using namespace std;

class Student{
    public: // access specifier : public means the memebers(attributes and methods) can be accessed from outside the class
        string FirstName ;
        string LastName ;
        int rollNo ;
};

int main() {

    Student frenzy;

    frenzy.FirstName = "frenzy ";
    frenzy.LastName = "Scholar ";
    frenzy.rollNo = 45;

    cout << frenzy.FirstName << frenzy.LastName << frenzy.rollNo;

    return 0;
}
