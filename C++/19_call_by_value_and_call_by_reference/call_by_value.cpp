#include <iostream>
using namespace std;


// function for swapping two numbers
void swap(int a, int b) {

    int temp = a;     
    a = b;              
    b = temp;       

    // cout<<"after swapping in swap(), value of a : "<<a<< " and value of b : "<<b<<endl;
}


int main() {

    int x =4, y=5;

    // cout<<"The initial value of x is : "<<x<<" and the intial value of y is : "<<y<<endl;

    // Note: call by value garda, jun function call gareko ho tyo function vitra matra value ma changes/modify vako huncha, but function bahira variable ko value ma kei changes/modify vako hudaina

    swap(x, y);                         // calling swap() by value  i.e call by value vai rako cha

    cout<<"Value of x is after swap call : "<<x<<" value of y after swap call : "<<y<<endl;




    return 0;
}