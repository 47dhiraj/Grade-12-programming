// Type Conversion (Type Casting)
// It means, conversion of one data type to another data type.


#include<iostream> 
#include <typeinfo>                   		// for checking type(data type) of any variable
using namespace std;



int main() 
{
    // conversion of built in data types (eg: int, float, double etc)

    
    // Implicit Type Conversion (automatically handles by the compiler)
    
    // In implicit type conversion, Lower-ranked types are automatically converted/promoted to higher-ranked types while doing calculation/operations.
    
	// For eg:  Char --> Int --> Long --> Float --> Double --> Long Double
    
	// For a successfull implicit type conversion, data type on left side of = should be greater than the data type on right side.
   	
   	
	// Example 1: Integer to Float (Implicitly converting integer to float)
	
	int a = 47;
	float b = 47.50;
	
	float num = a + b;              // a is implicitly converted to float & only after that added to float b.
	
    cout << "\nThe value of num is " << num << endl << endl;
    
	// // For checking data type of variable
	cout << "\nType of a: " << typeid(a).name() << endl;
	cout << "\nType of b: " << typeid(b).name() << endl;
	cout << "\nType of num: " << typeid(num).name() << endl;


    // Example 2: Character to Integer (Implicitly converting char to int(i.e ASCII value))
    
	char ch1 = 'A';   				// ASCII of A is 65
	char ch2 = 'Z';
	int num1 = ch1;
	int num2 = ch2;
	cout << num1 << endl << num2 << endl << endl;
	
	char ch3 = 'a';
	char ch4 = 'z';
	int num3 = ch3;
	int num4 = ch4;
	cout << num3 << endl << num4 << endl << endl;     				




	// Manual(Custom) Type Casting
	
	// Used to convert highh ranked data type to low ranked data type
	
	// Example 1: Float to Integer
	
	float c = 69.50;
	
	int d = int(c);
	// int d = (int)c;
	
	// // For checking data type of variable
	cout << "\nType of c: " << typeid(c).name() << endl;
	cout << "\nType of d: " << typeid(d).name() << endl;



    return 0;
}

