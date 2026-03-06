// same function is being used here to do different things ; this is not runtime polymorphism as we have declared objects of classes separately

#include <iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout << "Tick Tick";
    };
};

class Dog : public Animal {
    public:
    void sound(){
        cout << "Bhow, bhow !";
    };
};

int main() {

    Animal obj1;

    obj1.sound();

    Dog dog1;

    dog1.sound();

    return 0;
}
