#pragma once

#include <iostream>

using namespace std;

class Animal {
    private:

    public:
        virtual void makeNoise(); // virtual: function can be replaced by function w/ same name & signature on a child class
};