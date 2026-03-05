#include <iostream>
using namespace std;

// class Vehicle{
//     public:
//     string brand = "Ford";

//     void honk(){
//         cout << "Tutt, tutt!";
//     };
// };

// class Car : public Vehicle{
//     public:
//     string model = "Mustang";
// };



// int main() {

//     Car myCar;

//     cout << myCar.brand;
//     myCar.honk();
//     cout << myCar.brand;

//     return 0;
// }


// multiple inheritance

class MyClass {
    public:
      void myFunction() {
        cout << "Some content in parent class." << "\n" ;
      }
  };
  
  // Another base class
  class MyOtherClass {
    public:
      void myOtherFunction() {
        cout << "Some content in another class." ;
      }
  };
  
  // Derived class
  class MyChildClass: public MyClass, public MyOtherClass {
  };
  
  int main() {
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
  }
