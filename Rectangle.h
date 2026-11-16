#pragma once

#include "TwoDShape.h"

class Rectangle : public TwoDShape {
    private:
    public:
        // we already inherit getWidth and getHeight, so define getArea
        Rectangle(double width, double height);
        double getArea() override;


};