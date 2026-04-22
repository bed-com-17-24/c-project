#include "person.h"

// Default constructor
person::person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

// Parameterized constructor
person::person(float newWeight) {
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}

// Destructor
person::~person() {
    // No dynamic memory, so nothing special needed
}

// Overloaded + operator
float person::operator+(const person& otherperson) {
    return this->mWeight + otherperson.mWeight;
}