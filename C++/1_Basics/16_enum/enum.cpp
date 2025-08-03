#include <iostream>
using namespace std;

int main() {

    //  enum or enumeration is a data type consisting of named values like elements, members, etc., that represent integral constants.
    // An enum type is a special data type that enables for a variable to be a set of predefined constants.
    // value of enum variable must be equal to one of the values that have been predefined for it.

    // value of enum variable cannot be changed.. i.e these values are constants

    enum Days {             // yo Days variable chai auta enum ho
        Sunday,
        Monday,
        Tuesday,
        Wedenesday,
        Thursday,
        Friday,
        Saturday
    };


    // d vanni enum ma Sunday value haleko, i.e it is 0th positional value
    Days d = Sunday;        // Sunday chai 0 position ma cha
    cout<<d<<endl;          // so, 0 output aaucha

    // d = Monday;          // pahila predefine constant value change garna milcha
    // cout<<d<<endl;

    // d = Sontag;           // predefine navako value lai enum value garauna mildaina
    // cout<<d<<endl;

    // Days d = Saturday;        // Saturday chai 6 position ma cha
    // cout<<d<<endl;          // so, 6 output aaucha


    if (d==0) {
        cout<<"\nSunday"<<endl;

    } else if (d==1) {
        cout<<"Monday"<<endl;

    } else if (d==2) {
        cout<<"Tuesday"<<endl;

    } else if (d==3) {
        cout<<"Wednesday"<<endl;

    } else if (d==4) {
        cout<<"Thursday"<<endl;

    } else if (d==5) {
        cout<<"Friday"<<endl;
        
    } else {
        cout<<"Saturday"<<endl;
    }


    return 0;
}