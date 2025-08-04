#include<iostream>
using namespace std;


// Parameterized constructor having default values in them, is know as constructor with default argument
// A constructor with default arguments is a constructor that provides default values for one or more of its parameters.


class add
{
    int n1, n2, n3;
    
	public:
		
	    add(int a=0, int b=0)		// constructor with default argument
	    {
	        n1 = a;
	        n2 = b;
	        
	        n3 = 0;
	    }
	    
	    void sum()
	    {
	        n3 = n1 + n2;
	
	    }
	    
	    void display()
	    {
	        cout << "sum is:" << n3 << endl;
	
	    }

};


int main()
{
    add o1;					// creating o1 object without any initial values
    
    add o2(5);				// creating o2 object without intial value for a
    
    add o3(5,6);			// creating o3 object without intial value for both a & b
    
    
    o1.sum();
    o2.sum();
    o3.sum();
    
    o1.display();
    o2.display();
    o3.display();
    
    
    return 0;

}
