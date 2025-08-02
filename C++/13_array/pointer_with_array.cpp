#include<iostream>
using namespace std;


int main() {

    int marks[] = {45, 46, 47, 48}; 
    // pointer concept with array in c++

    // Note : array ko memory address just  array_name le dincha e.g: marks

    int *p = marks;             // p pointer ma marks array ko memory address store/hold garayeko

    cout<<p<<endl;              // p le memory address di rako cha
    cout<<*(p)<<endl;           // * use garyo vani first memory ko value dincha
    cout<<*(++p)<<endl;         // memory address 1 le increment garera, tesko value dincha

    return 0;
}