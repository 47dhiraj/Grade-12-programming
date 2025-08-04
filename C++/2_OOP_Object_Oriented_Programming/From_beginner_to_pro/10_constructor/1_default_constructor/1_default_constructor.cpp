#include<iostream>
using namespace std;


// A constructor is a special member function in a class that automatically gets called when an object of that class is created.
// A constructor is used to initialize the data member (variables) of the class.
// Note: A constructor must have same name as of class name.


// About Default Constructor in c++

class count
{
	
    static int a;				// static variable is created so that value of that variable is shared across all the created objects of that class.
    
	public:
		
	    count ()				// count() is a default constructor(which have no parameter).
	    {
	    	a++;				// static variable 'a' is incremented every time object is created.
	    }
	    
	    void display()		
	    {
	         cout << "\nYou have created " << a << " objects." << endl;
	    }
	    
};


int count::a;					// static member also must be defined outside the class


// main() is entry point of the program execution
int main()
{
	
    count c1, c2, c3;			// 3 objects created (i.e c1, c2, c3)

    c1.display();

}
