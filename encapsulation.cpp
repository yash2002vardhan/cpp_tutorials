#include <iostream>
using namespace std;

// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.

class Employee{
    private:
    int salary;

    public:
    void setSalary(int s){
        salary = s;
    } ;

    int getSalary(){
        return salary;
    } ;


} ;

int main() {

    Employee emp1;

    emp1.setSalary(100000);

    int salary = emp1.getSalary();

    cout << "this is the salary : " << salary;

    return 0;
}


