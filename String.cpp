#include <iostream>
#include <string>
using namespace std;
int main() {
    //declare and initialise the array
    string array[] ={"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int size = sizeof(array)/sizeof(array[0]);
    //use for loop iterate through each element of the array
    for(int i=0; i<size; i++) {
        //check if the element starts with the letter 'B'
        if(array[i][0]== 'B') {
            //output the element to the console
            cout<<array[i] <<endl;
        }
    }
    return 0;

}