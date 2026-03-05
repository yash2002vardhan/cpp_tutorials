#include <iostream>
using namespace std;

class Vehicle{
    public:
    string brand = "Ford";

    void honk(){
        cout << "Tutt, tutt!";
    };
};

class Car : public Vehicle{
    public:
    string model = "Mustang";
};



int main() {

    Car myCar;

    cout << myCar.brand;
    myCar.honk();
    cout << myCar.brand;

    return 0;
}
