#include <iostream>
using namespace std;
//function to calculate the area of the square
double calculateSquareArea(double side) {
    return side *side;
}
//function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}
//function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 *base *height;
}
int main() {
    int choice;
    while (true) {
        //display menu to select shape
        cout << "Please select the area of the shape to calculate" <<endl;
        cout <<"1. Square" <<endl;
        cout <<"2. Rectangle" <<endl;
        cout <<"3. Triangle" <<endl;
        cout <<"4. Quit program" <<endl;
        cout <<"5. Enter selection";
        // Get user selection
        if(!(cin>>choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Your input was invalid. please enter a valid input!!!" <<endl;
            continue;
        }
        //Handle user selection
        switch (choice) {
            case 1: {
                //square
                double side;
                cout <<"Enter the side length of the square: ";
                cin>>side;
                cout <<"The area of the square is: " << calculateSquareArea(side) <<endl;
                break;
            }
            case 2: {
                //Rectangle
                double length, width;
                cout <<"Enter the length of the rectangle: ";
                cin>>length;
                cout<<"Enter the width of the rectangle";
                cin>>width;
                cout<<"The area of the rectangle is: " <<calculateRectangleArea(length, width)<<endl;
                break;
            }
            case 3: {
                // Triangle
                double base, height;
                cout <<"Enter the base of the triangle: ";
                cin>>base;
                cout <<"Enter the height of the triangle: ";
                cin>>height;
                cout <<"The area of the triangle is: " <<calculateTriangleArea(base, height)<<endl;
                break;
            }
            case 4: //Quit program
            cout <<"Exiting program." <<endl;
            return 0;
            default:
            cout <<"Your input was " <<choice<< "which is an invalid input." <<endl;
            cout <<"Please enter a valid input!!!" <<endl;
            
        }
    }
    return 0;
}