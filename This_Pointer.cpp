#include<iostream>
using namespace std;
class Test {
public:
    int x;

    Test(int x) {
        this->x = x;  // Use of 'this' pointer to differentiate between parameter and member
    }

    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Test obj(100);
    obj.display();
    return 0;
}
