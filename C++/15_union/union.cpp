#include <iostream>
using namespace std;

// Note : concept of union is used, for memory sharing for union member/variables in c++ programing

// union looks lai struct, but, unlike struct, it works by sharing memory for it's member/variables.

// Union ko theme/concept vaneko, ek choti ma auta union member/variable lai use garne, so that, memory sharing concept can be done

// Declaring union, naming in money
union money             // since variable ko max memory occupied chai 4 bytes cha, so yo money union le pani 4 bytes memory allocation garcha(i.e memory sharing concept for all union member/variable)
{
    int rice;           // int le 4 bytes lincha
    char car;           // char le 1 byte lincha
    float pounds;       // float le pani 4 butes lincha
};


int main() {

    
    union money m1;             // creating struct, i.e m1

    m1.rice = 47;
    m1.car = 'c';               // car ma value hale pachi mathi ko rice value override huncha

    cout<<m1.car<<endl;

    cout<<m1.rice<<endl;        // since rice value is being overriden, so yo line le wrong value output garcha

    return 0;
}

