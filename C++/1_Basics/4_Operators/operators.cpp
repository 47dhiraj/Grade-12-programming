#include<iostream>
using namespace std;


int main() 

{
	// integer variable declaration
    int a=4, b=7;


    cout<<"\n Various types of Operators in C++ : "<<endl;


    // Arithmetic operators (like addition, subtraction, division, multipication, Modulus(i.e % for remainder))
    cout<<"\nArithmetic Operators : "<<endl;
    
    cout<<"The value of a + b: "<< a + b <<endl;
    cout<<"The value of a - b: "<< a - b <<endl;
    cout<<"The value of a * b: "<< a * b <<endl;
    cout<<"The value of a / b: "<< b / a <<endl;
    cout<<"The value of a % b: "<< b % a <<endl;
    
    
    
    // Types of Increment and Decrement
    
    // Pre increment and pre decrement (first increases or decreases the value of variable by 1 and then only uses it in further lines of code)
    cout << "The value of a after ++a: " << ++a <<endl; 
    cout << "The value of a after --a: " << --a <<endl;

	// Post increment and post decrement (first uses it in current line and then only increases or decreases the value of variable by 1)
	cout << "The value of a after a++ is "<< a++ << endl;    
    cout << "The value of a after a-- is "<< a-- << endl;
    
    

	// Assignment Operators (To assign values to a variable)
	
	int c = 6, d = 9;
	
	char g = 'M';
	string name = "John Doe";
	
	cout << "\nGender: " << g << endl;
	cout << "Identity: " << name << endl;



	// Comparison operators(boolean operators) is used to compare values of two variable(==  OR !=  OR >  OR >=  OR  < OR  <=)
	// gives result in boolean form (either 0 or 1)
	
	cout << "\nComparison Operators : " << endl;
	
	cout << "Is c == d (c equlas to do): " << (c == d) << endl;
	cout << "IS c != d (c not equals to d): " << (c != d) << endl;
	cout << "Is c > d (c greater than d): " << (c > d) << endl;
	cout << "Is c < d (c less than d): " << (c < d) << endl; 
	cout << "Is c >= d (c greater or equals to d): " << (c >= d) << endl;
	cout << "Is c <= d (c less or equals to do): " << (c <= d) << endl;



    // Logical operators is used to apply logical operation(&&  OR  ||)
    cout << "\nLogical Operators : " << endl;
    
    cout << "The value of this logical and operator ((a==b) && (a<b)) is: " << ((c == d) && (c < d)) << endl; 
    cout << "The value of this logical or operator ((a==b) || (a<b)) is: " << ((c == d) || (c < d)) << endl; 
    cout << "The value of this logical not operator (!(a==b)) is: " << (!(c == d)) << endl; 



    return 0;
}

