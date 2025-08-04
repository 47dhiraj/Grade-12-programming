#include<iostream>
using namespace std;


// Constructor Overloading means having multiple constructors in the same class, with the same name (class name), but with different parameter lists (number, type, or order of parameters).


class overloaded
{
    int a,b;
    
	public:
		
	    overloaded()				// Default constructor (No parameters)
	    {
	        cout << "I am default constructor.I have no value" << endl << endl;
	    }
	    
	    overloaded(int x)			// Single parameter(int) constructor
	    {
	        a=x;
	        cout << "I am one parameterized constructor." << endl << "I have value:" << a << endl << endl;
	    }
	    
	    overloaded(int x, int y)	// Two parameters(int, int)
	    {
	        a=x;
	        b=y;
	        
	        cout << "I am two parameterized constructor." << endl << "I have value:" << a << " & " << b << endl;
	    }
};



int main()
{
	
	// Having same constructor with different signatures/parameters
    overloaded();
    
    overloaded(5);
    
    overloaded(5,6);
    
    
    return 0;
}
