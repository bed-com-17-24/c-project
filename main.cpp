#include "person.h"
#include <iostream>

using namespace std;
int main() {
    person Jane=Person("Jane", 60.0f);
    person  John=Person("John", 75.0f);

    float totalweight=Jane + John;
    cout <<"Total weght: "<<totalweight<<endl;

    return 0;
}