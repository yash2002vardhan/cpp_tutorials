/*

A queue stores multiple elements in a specific order, called FIFO.

FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket. The first person to stand in line is also the first who can pay and leave the supermarket. This way of organizing elements is called FIFO in computer science and programming.

Unlike vectors, elements in the queue are not accessed by index numbers. Since queue elements are added at the end and removed from the front, you can only access an element at the front or the back.
*/


#include <iostream>
#include <queue>
using namespace std;

int main() {

    // Create a queue of strings
    queue<string> cars;

    // Add elements to the queue
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Access the front element (first and oldest)
    cout << cars.front() << endl;  // Outputs "Volvo"

    // Access the back element (last and newest)
    cout << cars.back() << endl;  // Outputs "Mazda"

    // Remove the front element (Volvo)
    cars.pop();

    cout << cars.front() << endl;

    cout << cars.size() << endl;

    cout << cars.empty();

    return 0;
}
