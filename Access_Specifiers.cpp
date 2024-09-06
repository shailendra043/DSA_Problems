#include <iostream>
using namespace std;

class Base {
public:
    int publicVar;   // Accessible everywhere
private:
    int privateVar;  // Accessible only within the class
protected:
    int protectedVar;  // Accessible in the class and derived classes

public:
    // Constructor to initialize variables
    Base() : publicVar(10), privateVar(20), protectedVar(30) {}

    void showPrivate() {
        // Can access privateVar inside the class
        cout << "PrivateVar: " << privateVar << endl;
    }

    void showProtected() {
        // Can access protectedVar inside the class
        cout << "ProtectedVar: " << protectedVar << endl;
    }
};

class Derived : public Base {
public:
    void accessBaseMembers() {
        cout << "PublicVar (Base): " << publicVar << endl;
        // cout << "PrivateVar (Base): " << privateVar << endl; // Error: privateVar is private in Base
        cout << "ProtectedVar (Base): " << protectedVar << endl; // Can access protected members in derived class
    }
};

int main() {
    Base baseObj;
    cout << "Accessing Public Variable: " << baseObj.publicVar << endl;

    // baseObj.privateVar = 100;  // Error: privateVar is private and cannot be accessed directly
    baseObj.showPrivate();  // Accessing privateVar through public function

    Derived derivedObj;
    derivedObj.accessBaseMembers();  // Accessing base class members from derived class

    return 0;
}
