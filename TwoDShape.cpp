#include "TwoDShape.h"

TwoDShape::TwoDShape(double w, double h) : width(w), height(h) {}
double TwoDShape::getWidth() {
    return this->width;
}

double TwoDShape::getHeight() {
    return this->height;
}