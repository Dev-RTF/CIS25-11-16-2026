#include "Animal.h"
#include "Cat.h"
#include "Chicken.h"
#include "Pig.h"
#include <iostream>

using namespace std;

/* POLYMORPHISM */
// Polymorphism allows different classes to share the same method name or interface, while each class provides its own unique implementation

// This function is pass by value, which means that it always copies an Animal, even if it's just a class that inherits Animal, UNLESS you use pointers.
// And it always calls Animal's makeNoise function, because it's passed in as type Animal. Pig holds Pig's function AND Animal's. As the type passed in is Animal, it calls Animal's function.
// This is fixed by putting "virtual" in front of Animal's makeNoise function, and "override" after everyone else's makeNoise function.
void oldMakeAnimalMakeNoise(Animal animal) {
    animal.makeNoise();
}

void makeAnimalMakeNoise(Animal* animal) { 
    animal->makeNoise();
}

int main() {
    Animal myAnimal;
    Pig myPig;
    Cat myCat;
    Chicken myChicken;
    makeAnimalMakeNoise(&myAnimal);
    makeAnimalMakeNoise(&myPig);
    makeAnimalMakeNoise(&myCat);
    makeAnimalMakeNoise(&myChicken);

    return 0;
}