#include<iostream>
using namespace std;
class Test {
public:
    Test() {
        cout << "Constructor called" << endl;
    }
    ~Test() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Test obj;  // Constructor is called
    return 0;  // Destructor is called
}
