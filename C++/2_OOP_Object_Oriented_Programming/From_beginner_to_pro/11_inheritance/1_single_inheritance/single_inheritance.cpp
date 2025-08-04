#include<iostream>
//#define PI 3.1428				// Not good approach: telling compiler every time you see PI replace value with 3.1428

using namespace std;

const float PI = 3.1428;		// making PI a constant variable


// This below program shows how single inheritance is done.

class circle
{
	protected:
	    float r;
	    
	public:
	    void getradii()
	    {
	        cout << "Enter the radius of a circle: ";
	        cin >> r;
	    }
		

		void calcarea()
		{
			cout << "\nArea of circle is: " << PI * r * r << endl;
		}
};


// circum class is a derived/child class which inherits from a base class (i.e circle)
class circum: public circle
{
    public:
	    void calcircum()
	    {
	        cout << "\nCircumference of circle is: " << (2 * PI * r) << endl;
	        
	        // cout << r;
	    }
};





int main()
{
	
    circum c;			// creating object of circum derived/child class (i.e c)
    
    c.getradii();
    
    c.calcarea();
    
    c.calcircum();
    

    return 0;
}





