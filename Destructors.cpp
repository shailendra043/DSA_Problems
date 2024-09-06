#include<iostream>
using namespace std;
class Test {
public:
    // Constructor
    Test() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Test() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Test obj;  // Constructor is called
    return 0;  // Destructor is called automatically at the end of the program
}
