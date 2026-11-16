#pragma once

// Because this class has a pure virtual function, it's an "abstract base class" (ABC), which means that you'll never really be able to make one of these. It's a class for the purpose of being used by other classes.
class TwoDShape {
    protected:
        double width;
        double height;
    public:
        TwoDShape(double width, double height);
        double getWidth();
        double getHeight();    
        virtual double getArea() = 0; // pure virtual function (equals 0, so no real implementation as it'll get overridden by inheritors)
};