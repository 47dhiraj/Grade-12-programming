#include<iostream>
#include<iomanip>           // iomanip header file is required for setw manipulator 
using namespace std;


// Manipulators are helper functions from the <iomanip> or <iostream> libraries that change the format of input/output (usually with cout or cin) without modifying the actual data.


int main() 
{
	
	// variable declaration
    int a = 3, b = 78, c = 1233;
    
    
    // without using any Manipulators
    
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;
    
    
    
    
    // Use of Manipulators
    
    
    // setw() manipulator
    
    // Use of setw() manipulator for right justication of the value in console/output screen.

	cout << "The value of a with setw is: " << setw(4) << a << endl;
	cout << "The value of b with setw is: " << setw(4) <<b << endl;
	cout << "The value of c with setw is: " << setw(4) << c << endl;

	
	
	// setfill() manipulator
	// It fill empty space with ----
	
	cout << setfill('-');  
	cout << setw(10) << "Roll_no" << setw(10) << "Name of Student" << endl;
    cout << setw(10) << 1 << setw(10) << "Dipen" << endl;
    cout << setw(10) << 2 << setw(10) << "Dhiraj" << endl;
    
    
    
    // fixed and setprecision() manipulator
    
    // fixed shows decimals in fixed-point notation
    // setprecision(2) only gives value with 2 digits after decimal
    
	double price = 123.456789;

    cout << fixed << setprecision(2);
    
    cout << "\nPrice: $" << price << endl;
	
	
	
	return 0;
}

