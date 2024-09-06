#include<iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Barking" << endl;
    }
};

int main() {
    Animal* animal = nullptr; // Initialize the animal pointer
    Dog dog;
    animal = &dog; // Assign the address of dog to animal pointer (base class pointer to derived object)
    animal->sound();  // Calls Dog's sound method due to runtime polymorphism
    return 0;
}
