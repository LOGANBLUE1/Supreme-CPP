#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    void display() {
        cout << "This is the parent class." << endl;
    }
};

// Child class
class Child : public Parent {
public:
    void display() {
        cout << "This is the child class." << endl;
    }
};

int main() {
    // Create an instance of the child class
    Child child;

    // Assign the child class object to a parent class object
    Parent parentRef = child;

    child.display();
    parentRef.display(); 

    return 0;
}
