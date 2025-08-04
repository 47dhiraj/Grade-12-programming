#include<iostream>
using namespace std;


// This below program shows how multiple inheritance is done in c++.
// Multiple Inheritance occurs when a class inherits from more than one base class.

class first
{
	protected:
		char fname[20];
	    
	public:
	    void getfname()
	    {
	        cout << "\nEnter your first name: ";
	        
	        cin >> fname;
	    }
	    
	    void dispfname()
	    {
	    	cout << fname << " ";
	    }

};



 class mid
 {
    protected:
    	char midname[15];
     
    public:
		void getmidname()
		{
			cout << "\nEnter your mid name if you don't have your middle name hit dash(-): ";
			
			cin >> midname;
		}
		
		void dispmidname()
		{
			if(string(midname) == "-")
			{
				cout << " ";
			}
			else
			{
				cout << midname << " ";
			}
				
		}
 };
 
 
 
 // class named last is inheriting from multiple classes (i.e first and mid).
 class last: public first, public mid
 {
	protected:
		char lastname[20];
		
	public:
		void getlastname()
		{
			cout << "\nEnter your last name: ";
			
			cin >> lastname;
		}
		
		void displastname()
		{
			cout << lastname << "\t" << endl;
		}
 };
 
 
 
 int main()
 {
 	
	last l;
	
	l.getfname();
	l.getmidname();
	l.getlastname();
	
	cout<<"\nYour full name is: ";
	
	l.dispfname();
	l.dispmidname();
	l.displastname();
	
	
	return 0;
 }
