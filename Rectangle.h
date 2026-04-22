#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();                 // default constructor
    Rectangle(float l, float w); // overloaded constructor
    ~Rectangle();                // destructor

    // setters (mutators)
    void setLength(float l);
    void setWidth(float w);

    // getters (accessors)
    float getLength();
    float getWidth();

    float calculateArea();
};

#endif