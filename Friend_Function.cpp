#include<iostream>
using namespace std;
class Test {
private:
    int x;

public:
    Test() : x(10) {}

    // Friend function declaration
    friend void show(Test &t);
};

// Friend function definition
void show(Test &t) {
    cout << "Value of x: " << t.x << endl;  // Can access private member x
}

int main() {
    Test obj;
    show(obj);  // Call friend function
    return 0;
}
