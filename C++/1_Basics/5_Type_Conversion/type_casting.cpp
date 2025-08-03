// Type Conversion (Type Casting)
// It means, conversion of one data type to another data type.


#include<iostream> 
#include <typeinfo>                   		// for checking type(data type) of any variable
using namespace std;



int main() 
{
	
    // conversion of built in data types (eg: int, float, double etc)

    
    
    
    // Implicit Type Conversion (automatically handles by the compiler)
    
    // In implicit type conversion, only Lower-ranked types are automatically converted/promoted to higher-ranked types while doing calculation/operations and vice-versa is not possible.
    
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
	cout << "\nType of num after adding both int & float type: " << typeid(num).name() << endl;
	
	
	// 
	float x = 99.95;
	int y = 100;
	
	cout << "\nType after adding both float & int type: " << typeid(x + y).name() << endl;
	
	
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

	
	// So basically got to learn that, implicit type conversion is automatically handle by the compiler itself, not by a programmer.
	




	// Explicit/Manual/Custom Type Casting (High ranked to low ranked & also low ranked to high)
	
	// Generally, used to convert high ranked data type to low ranked data type.
	// And, also can be used to convert low ranked data type to high ranked data type.
	
	// In explicit/custom type conversion, a programmer is able to handle which type to convert to what.
	
	
	// Example 1: Float to Integer (High ranked to low ranked)
	// Here, u are going to lose precision values or digits after decimal.
	
	float c = 69.50;
	
	int d = int(c);
	// int d = (int)c;
	
	cout << "\nValue of c: " << c << endl;
	cout << "\nValue of d: " << d << endl;
	
	// // For checking data type of variable
	cout << "\nType of c: " << typeid(c).name() << endl;
	cout << "\nType of d: " << typeid(d).name() << endl << endl;
	

	
	
	// Example 2: Integer to Float (Low ranked to high ranked)
	// Here, u are not going to lose precision values or digits after decimal.
	
	int e = 96.99;
	
	float f = float(e);
	// float f = (float)e;

	cout << "\n\nValue of e: " << e << endl;
	cout << "\nValue of f: " << f << endl;
	
	
	// // For checking data type of variable
	cout << "\nType of e: " << typeid(e).name() << endl;
	cout << "\nType of f: " << typeid(f).name() << endl;



    return 0;
}

