#include <iostream>
using namespace std;


// yeti bela we are using pointers (i.e pointers variable le arko variable ko memory lai store/hold garcha)
void swapPointer(int* a, int* b)                // pointers use gareko (i.e * a & * b, i.e memory address nai swap gareko)
{
    int temp = *a;         
    *a = *b;             
    *b = temp;         
}


// yeti bela we are using reference variable (i.e &  le memory reference dincha)
void swapReferenceVar(int &a, int &b)           // &a vannale, x ko memory address lai point gareko cha and &b vannale y ko memory address lai point gareko cha
{
    int temp = a;    
    a = b;          
    b = temp;            
}



int main() {

    int x=4, y=5;

    // cout<<"The initial value of x is : "<<x<<" and the intial value of y is : "<<y<<endl;


    // Example 1 of call by reference 
    // swapPointer(&x, &y);                    // call by reference gareko (i.e &x and &y vannale, memory ko address lai nai as argument pass gareko)

    
    // Example 2 of call by reference
    swapReferenceVar(x, y);                 // call by reference variable, i.e x & y ko value nai as argument pass gareko


    cout<<"Value of x is after swap by reference call : "<<x<<" value of y after swap by reference call : "<<y<<endl;


    return 0;
}