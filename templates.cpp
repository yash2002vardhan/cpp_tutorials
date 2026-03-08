#include <iostream>
using namespace std;

// //Templates let you write a function or class that works with different data types.


// template <typename T> // T is just a placeholder for a datatype
// T add(T a, T b) {
//   return a + b;
// }

// int main() {
//   cout << add<int>(5, 3) << "\n";
//   cout << add<double>(2.5, 1.5) << "\n";
//   return 0;
// }

// templates can also be used for classes
template <typename T>
class Box {
  public:
    T value;
    Box(T v) {
      value = v;
    }
    void show() {
      cout << "Value: " << value << "\n";
    }
};

int main() {
  Box<int> intBox(50);
  Box<string> strBox("Hello");

  intBox.show();
  strBox.show();
  return 0;
}
