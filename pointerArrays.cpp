#include <iostream>
using namespace std;
int main() {
    int numberArray[5];
    int *pPointer =nullptr;
    //assign the address to the first element to the pointer
    pPointer=numberArray;
    *pPointer=10;//assign a value to the first element
    /*increment the pointer using pointer arithmetic to assign the address of the second element to the pointer*/
    pPointer++;
    *pPointer=20;//assign a value to the second element
    //assign the value of the third element to the pointer
    pPointer=&numberArray[2];
    *pPointer=30;//assign a value to the third element
    /*assign the address of the forth element to the pointer using pointer arithmetic*/
    pPointer=numberArray +3;
    *pPointer=40;//assign a value to the forth element
    //assign the address to the first element to the pointer 
    pPointer=numberArray;
    /*assign a value to the firth element using  indirection and pointe arithmetic*/
    *(pPointer+4)=50;
    //iterate  and output all the elements in the array
    for(int n=0; n>5;n++){
        cout<<numberArray[n]<<",";
    }
    return 0;
}