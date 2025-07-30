// creating variables of different data types in c++

#include <iostream>
#include <string>				// must include string header file to use string variable in program
#include <iomanip>  			// Required for setprecision()

using namespace std;


int main()
{
	
	// for integer value
	int age = 28;
	
	// for long integers
    long long postalcode = 44605;
	
	// for very long integer - for very large integers
    long long mobile = 9779811111111;
	
	// for float or decimal value (can hold upto 6 precision digits(digits after . or decimal symbol))
	float height = 5.8888f;
	
	// for double value (can hold upto 15 precision digits)
	double weight = 70.0000125;		
	
	// for boolean value
	bool isTeacher = true;
	
	// should use single quote '' for char data type variable i.e for single character/alphabet
	char gender = 'M'; 	
	
	// should use double quote "" for string data type variable
    string name = "Dhiraj";
    
    string job = "Teacher";
    
    
    
	// To display all personal information/detail
	
    cout << "Name        : " << name << endl;
    cout << "Age         : " << age << endl;
    
    cout << fixed << setprecision(2);
    cout << "Height (ft) : " << height << endl;
    // printf("Height (ft) : %.2f\n", height);
    
    cout << fixed << setprecision(6);
    cout << "Weight (kg) : " << weight << endl;
    // printf("Weight (kg) : %.2f\n", weight);
    
    cout << "Gender       : " << gender << endl;
    cout << "Teacher  : " << boolalpha << isTeacher << endl;
    cout << "Job/Occupation : " << job << endl;
    cout << "Mobile : " << mobile << endl;
    cout << "Postal code : " << postalcode << endl;
    
    
    cin.get();
    
    return 0;

}
