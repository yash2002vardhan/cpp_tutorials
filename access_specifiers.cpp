#include <iostream>
using namespace std;


class User{
    public:
    string username = "yash"; // can be access from outside the class
    private:
    int age = 20; // cannot be accessed from outside the class

    // there is another access specifier 'protected' ; this can be accessed in the inherited classes
};

int main() {
    User user;
    cout << user.username;
    user.username = "yashvardhan";
    cout << user.username;

    cout << user.age; // will throw an error
    return 0;
}
