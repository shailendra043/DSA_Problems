#include<iostream>
using namespace std;
class AbstractShape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle circle;
    circle.draw();
    return 0;
}
