#include<iostream>
using namespace std;
class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations math;
    cout << math.add(5, 3) << endl;        // Calls int version
    cout << math.add(4.5, 2.3) << endl;    // Calls double version
    return 0;
}
