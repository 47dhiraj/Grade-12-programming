#include <iostream>
#include <string>				// for string data type and getline()
using namespace std;



int main() 
{
	
	int age;
    string name;

	
    cout << "Enter your age: ";
    cin >> age;
    
    
    // U must clear the input buffer before using getline, if cin is earlier used
    cin.ignore();  							// ignore the leftover '\n' after earlier cin (i.e cin >> age)
    
    cout << "Enter your full name: ";
    getline(cin, name);  					// it takes whole input also with spaces (works with multiple words)
    // cin >> name;  						// reads input until first space (works only with a single word)

    cout << "\n Your Age: " << age;
    cout << "\n Your Name: " << name << endl;


    return 0;
}

