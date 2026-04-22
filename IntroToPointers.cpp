#include <iostream>
using namespace std;
int main() {
    //declare pointer and initialise it
    //so that it doesnt store a random address 
    int *pPointer = nullptr;
    int integervar =5;
    //assign the pointer to address of object 
    pPointer = &integervar;
    //output the value of integervar
    cout <<"integervar: " <<integervar<<endl;
    //output the address of integervar
    cout<<"Address of integervar: " <<&integervar<<endl;
    //output the address assigned to a pPointer
    cout<<"pPointer: "<<pPointer<<endl;
    //output the address of pPointer
    cout<<"Address of pPointer " <<&pPointer<<endl;
    return 0;
}