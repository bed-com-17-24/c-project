#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

Rectangle::~Rectangle() {}

void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() {
    return length;
}

float Rectangle::getWidth() {
    return width;
}

float Rectangle::calculateArea() {
    return length * width;
}