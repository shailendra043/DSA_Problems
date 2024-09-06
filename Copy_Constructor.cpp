#include <iostream>  // Make sure iostream is included for cout and cin
using namespace std;

class Test {
public:
    int x;

    // Constructor
    Test(int val) {
        x = val;
    }

    // Copy constructor
    Test(const Test &obj) {
        x = obj.x;
    }

    // Method to display the value of x
    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Test obj1(10);     // Calls the constructor
    Test obj2 = obj1;  // Calls the copy constructor
    obj2.display();    // Displays the value of obj2.x
    return 0;
}
