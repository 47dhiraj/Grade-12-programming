#include <iostream>
using namespace std;


// inline function call garda, yo inline function definition code memory ma copy vayera baseko huncha, so execution time chado huncha... 
// less function definition vako code lai matra inline garauna parcha
// yedi large function defition vako code inline vayo vani, memory dherai occupy garcha


inline int product(int a, int b) {      // yo product() lai auta inline function banako
    return a*b;
}


// int increment() {
//     static int counter = 0;             // jati choti function call gare pani, static variable is initialized only once
//     counter = counter + 1;              // next time increment() function is run, the value of counter will be retained

//     cout<<counter<<endl;
// }


int main() {

    int a, b;
    cout<<"Enter the value of a and b :"<<endl;
    cin>>a>>b;                          // a & b ekkai choti 2 ta number input halne vaneko

    cout<<"The product of a and b is : "<<product(a,b)<<endl;


    // // function vitra ko static variable ko behaviour bujna ko lagi, increment function lai 2 choti call gareko
    // increment();
    // increment();


    return 0;
}