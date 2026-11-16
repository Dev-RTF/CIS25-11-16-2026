#include "Rectangle.h"
#include "TwoDShape.h"

Rectangle::Rectangle(double width, double height) : TwoDShape(width, height) {}
double Rectangle::getArea() {
    return this->width * this->height;
}