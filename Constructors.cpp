#include <iostream>
#include <string>  // Include for the string class
using namespace std;

class Car {
public:
    string brand;
    int year;

    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota", 2021);  // Calls the constructor
    car1.display();            // Calls display method
    return 0;
}
