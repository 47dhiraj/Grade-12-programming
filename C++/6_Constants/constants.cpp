#include<iostream>
using namespace std;


int main()
{
    // const keyword is used to declare constant variable

    // once value assigned to a constant variable, u cannot re-assign value to a variable
    const float pi = 3.14159;			// const int pi = 3.14;

	// Trying to re-assign new value to variable a, but it throws error
	// pi = 3.15;                  


    cout << "Value of pi: " << pi << endl;
    
    
    return 0;
}

