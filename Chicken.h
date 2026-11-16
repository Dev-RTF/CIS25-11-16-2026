#pragma once

#include <iostream>
#include "Animal.h"

using namespace std;

class Chicken : public Animal {
    private:

    public:
        void makeNoise() override;
};