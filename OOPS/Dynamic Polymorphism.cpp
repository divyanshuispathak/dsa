#include <iostream>
using namespace std;

// without virtual early binding, static binding
// with virtual late binding, dynamic binding

class Animal
{
public:
    // virtual
    void makeSound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal *animalPtr;
    Dog dogObj;
    Cat catObj;

    animalPtr = &dogObj;
    animalPtr->makeSound(); // Output: "Dog barks"

    // animalPtr = &catObj;
    // animalPtr->makeSound(); // Output: "Cat meows"

    return 0;
}
