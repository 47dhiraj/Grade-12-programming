#include<iostream>
using namespace std;


// This example gives any programmer the detail understanding of how all kind of access modifers works in c++.




// we create access_specifiers class that demonstrates how all types of access modifiers(private,protecdted and public) works in c++.

class access_specifiers
{


	private:			
		// PRIVATE: private members are accessible only inside this class (even derived class can't access directly)
		// These private members are most secure member of a class.
	
	    int a, b;
	
	    void getSum()
	    {
	        cout << "\n[PRIVATE] Enter two numbers to get their sum: ";
	        cin >> a >> b;
	    }
	
	    void displaySum()
	    {
	        cout << "\n[PRIVATE] Sum = " << a + b << endl;
	    }



	protected:
	    // PROTECTED: protected members also inaccessible from it's own object outside class, but accessible in derived/child classes
	    
	    int c, d;
	
	    void getDiff()
	    {
	        cout << "\n[PROTECTED] Enter two numbers to get difference: ";
	        cin >> c >> d;
	    }
	
	    void displayDiff()
	    {
	        cout << "\n[PROTECTED] Difference = " << c - d << endl;
	    }


	public:
	    // PUBLIC: public members are accessible everywhere (inside/outside class)
	    
	    int l, B;
		
		
		void callPrivateSum();
		

//	    void callPrivateSum()
//	    {
//	        getSum();        			// can access getSum() because callPrivateSum() is the member of class
//	        displaySum();    			// can access dispalySum() because callPrivateSum() is the member of class
//	    }
	
	
	    void area()
	    {
	        cout << "\n[PUBLIC] Enter length and breadth to get area: ";
	        cin >> l >> B;
	        
	        cout << "[PUBLIC] Area = " << l * B << endl;
	    }
};


// we can define callPrivateSum() public function/member outside the class.
// And, can still use the private members like getSum() and displaySum()
void access_specifiers::callPrivateSum()
{
	getSum();        					// can access getSum() because callPrivateSum() is the member of class
	
	displaySum();    					// can access dispalySum() because callPrivateSum() is the member of class
}







// creating a derived/child class (i.e A)
class A : public access_specifiers
{
	
	public:
		
	    void accessProtected()
	    {
	        // we can access protected members of base class inside derived/child class
	        getDiff();       
	        
	        displayDiff();  
	    }
	
		
	    // void testAccess() {
	    //     getSum();				// ERROR: cannot access private member(i.e getSum() inside derived/child class)
	    // }
	    
};




// Main entry point of the program
int main()
{
	
    // creating a base class(access_specifiers) object (i.e baseObj)
    access_specifiers baseObj;


    // accessing public methods that internally calls private methods ( like getSum() and displaySum() )
    
    baseObj.callPrivateSum();  			// it works because you're calling public method
    
    baseObj.area();            			// it works public method


    // You can't do this:
    // baseObj.getSum();       			// ERROR: cannot directly call private member outside class even using it's own object
    // baseObj.getDiff();      			// ERROR: cannot directly call protected member outside class even using it's own using object



    cout << "\n-----------------------------\n";


    // creating a derived/child class object (i.e childObj)
    A childObj;

    // Calling public method in derived class that accesses protected members
    childObj.accessProtected();   		// it works becuase protected members accessible inside child/derived class


    // You can't do this
    // childObj.getDiff();        		// ERROR: can't directly access protected member using derive/child class object, becuase it is still protected in derived.
    // childObj.getSum();         		// ERROR: can't directly access private member using derive/child class object, becuase it is still private in derived.



    return 0;
}

