#include "Animal.h"
#include "Cat.h"
#include "Chicken.h"
#include "Pig.h"
#include <iostream>

#include "TwoDShape.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;


/* POLYMORPHISM */
// Polymorphism allows different classes to share the same method name or interface, while each class provides its own unique implementation

// This function is pass by value, which means that it always copies an Animal, even if it's just a class that inherits Animal, UNLESS you use pointers.
// And it always calls Animal's makeNoise function, because it's passed in as type Animal. Pig holds Pig's function AND Animal's. As the type passed in is Animal, it calls Animal's function.
// This is fixed by putting "virtual" in front of Animal's makeNoise function, and "override" after everyone else's makeNoise function. Override is optional, but good practice
void oldMakeAnimalMakeNoise(Animal animal) {
    animal.makeNoise();
}

void makeAnimalMakeNoise(Animal* animal) { 
    animal->makeNoise();
}

void printArea(TwoDShape* shape) {
    cout << "\nThe area of the shape is " << shape->getArea() << endl;
}

int main() {
    // Animal myAnimal;
    // Pig myPig;
    // Cat myCat;
    // Chicken myChicken;
    // makeAnimalMakeNoise(&myAnimal);
    // makeAnimalMakeNoise(&myPig);
    // makeAnimalMakeNoise(&myCat);
    // makeAnimalMakeNoise(&myChicken);

    // You can't make an object of an abstract base class. Again, ABCs are meant to be inherited from.
    // TwoDShape myShape(5, 10);
    Rectangle myRectangle(5, 10);
    Triangle myTriangle(5, 10);

    printArea(&myRectangle);
    printArea(&myTriangle);

    return 0;
}