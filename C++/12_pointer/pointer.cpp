#include<iostream>
using namespace std;


int main() {
    // Note : Pointer is a variable that stores/holds the memory address of another variable/object.

    int a=3;

    int *b;                     // Syntax: datatype *var_name;  // yo b chai auta pointer ho

    b = &a;                     //  &variable i.e &a vannale, a ko memory address   // b storing/holding the memory address of a

    // & ==> (gives memory address) (i.e address of operator)
    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of b is : "<<b<<endl;

    // * ==> gives value(i.e dereference operator)
    cout<<"The value at address b is : "<<*b<<endl;


    // // Pointer to pointer(complex cha )
    // int **c = &b;
    // cout<<"The address of b is : "<<c<<endl; 
    // cout<<"The value at address c is : "<<*c<<endl; 
    // cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
}
