#include <iostream>
using namespace std;
int main() {
    int inputvalue;
    bool validInput = false;
    while (!validInput) {
        //prompt the user for an integer value between 5 and 10
        cout<<"Enter an integer value between 5 and 10" <<endl;
        //get user input
        if (!(cin>>inputvalue)) {
            //clear input buffer and ignore invalid input
            cin.clear();
            cin.ignore(10000, '\n');
            cout <<"Sorry, you entered an invalid number, please try again" <<endl;
            continue;
        }
        //check if input is between 5 and 10
        if (inputvalue >=5 && inputvalue<=10) {
            validInput =true;
            cout <<"Your inputvalue(" <<inputvalue<<") has been accepted." <<endl;
        }
        else{
            cout<<"You entered " <<inputvalue << ". please enter a number between 5 and 10." <<endl;
        }

    }
    return 0;
}