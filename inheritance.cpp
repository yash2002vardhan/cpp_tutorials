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

// class MyClass {
//     public:
//       void myFunction() {
//         cout << "Some content in parent class." << "\n" ;
//       }
//   };
  
//   // Another base class
//   class MyOtherClass {
//     public:
//       void myOtherFunction() {
//         cout << "Some content in another class." ;
//       }
//   };
  
//   // Derived class
//   class MyChildClass: public MyClass, public MyOtherClass {
//   };
  
//   int main() {
//     MyChildClass myObj;
//     myObj.myFunction();
//     myObj.myOtherFunction();
//     return 0;
//   }


// 'protected' access specifier


class Employee {
    protected: // Protected access specifier
      int salary;
  };
  
  // Derived class
  class Programmer: public Employee {
    public:
      int bonus;
      void setSalary(int s) {
        salary = s;
      }
      int getSalary() {
        return salary;
      }
  };
  
  int main() {
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";
    return 0;
  }
