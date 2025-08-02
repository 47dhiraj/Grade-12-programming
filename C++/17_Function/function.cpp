#include<iostream>
using namespace std;


// Declaring Function/Function prototype(is Optional) naagere pani huncha, direct function definition lekhe huncha, but, function declare gareko chaina vani, function call garna vanda mathi function defitioin lekhnae parcha
// int sum(int, int);                      // declaring sum function
// void g();                               // declaring g function


// sum function definition
int sum(int a, int b)                       // function parameter ma data type pani lekhnai parcha (eg: int, float, bool e.t.c)
{
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a+b;
    return c;
}


// greeting function definition
void greeting()                             // greeting() function ko return type chai void ho (i.e void vannale, no return type,, kei kura pani return hudaina yo greeting function batw)
{
    cout<<"\nHallo, Guten Morgen !"<<endl;
}


// main() function is the entry point for the execution of the program
int main() {                            // main() function executes at first than other functions by c++ compiler

    int num1, num2;

    cout<<"Enter first number : "<<endl;
    cin>>num1;

    cout<<"Enter second number : "<<endl;
    cin>>num2;

    greeting();                                                         // calling greeting() function

    cout<<"\nThe sum of inputed numbers is :"<<sum(num1, num2)<<endl;   // calling sum() function by passing arguments(i.e num1 & num2)


    return 0;
}


