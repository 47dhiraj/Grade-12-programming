#include<iostream>
using namespace std;


// Here, we only have the basic concept of private and public members
// only the concept of private and public access modifiers


class Test
{
	
    int l, b;					// here l, b is private members of Test class
    
    public:
	    void getdata();			// getdata() is public member
	    
	    void display()			// display() is public memeber
	    {
	
	        cout << "Area = " << l * b;
	    }

};



void Test:: getdata()
{
    cout << "Enter the length and breadth: ";
    
    cin >> l >> b;				// here, l, b private members of Test class can only be accessed inside the public member(function) of that Test class.
}



int main()
{
	
	Test o1;
	
	o1.getdata();
	
	o1.display();

	return 0;

}
