// ofstream	Creates and writes to files
// ifstream	Reads from files
// fstream	A combination of ofstream and ifstream: creates, reads, and writes to files


#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // ofstream MyFile("tutorial.txt"); // creating and opening a file

    // MyFile << "Hello World!"; // writing to a file

    // MyFile.close(); // closing the file

    string MyText;

    ifstream MyReadFile("tutorial.txt");

    while (getline(MyReadFile, MyText)){
        cout << MyText;
    }



    return 0;
}
