#pragma once

#include "TwoDShape.h"

class Triangle : public TwoDShape {
    private:
    public:
        // we already inherit getWidth and getHeight, so define getArea
        Triangle(double width, double height);
        double getArea() override;


};