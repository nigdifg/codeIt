#include <iostream>

using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Animal makes a generic sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal genericAnimal;
    Dog myDog;
    Cat myCat;

    // Overloading example
    genericAnimal.makeSound(); // Calls the makeSound method of the Animal class
    myDog.makeSound();         // Calls the makeSound method of the Dog class
    myCat.makeSound();         // Calls the makeSound method of the Cat class

    // Overriding example
    Animal* ptrAnimal = &myDog;
    ptrAnimal->makeSound(); // Calls the makeSound method of the Dog class (dynamic binding)

    return 0;
}
