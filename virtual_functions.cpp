//A virtual function is a member function in the base class that can be overridden in derived classes.; this is true runtime polymorphism

#include <iostream>
using namespace std;

class Animal {
    public:
      virtual void sound() { // without virtual keyword, the code will return 'animal sound'
        cout << "Animal sound\n";
      }
  };
// class Animal {
//     public:
//     void sound() { 
//         cout << "Animal sound\n";
//       }
//   };
  
// class Dog : public Animal {
//     public:
//         void sound() override {
//         cout << "Dog barks\n";
//         }
// };
class Dog : public Animal {
    public:
        void sound() {
        cout << "Dog barks\n";
        }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound(); // Outputs: Dog barks (other format is (*a).sound)
    // (*a).sound();
    return 0;
}
