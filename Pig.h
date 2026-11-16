#pragma once

#include <iostream>
#include "Animal.h"

using namespace std;

class Pig : public Animal {
    private:

    public:
        void makeNoise() override; // allows Animal's makeNoise function to be replaced, used with virtual
};