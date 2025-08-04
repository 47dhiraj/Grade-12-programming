#include<iostream>
using namespace std;



class rectangle
{
    // Private members cannot be accessed directly outside class or cannot access directly from main()
    
    int length, breadth, area;				// private members: length, breadth, area

	public:
	    // Public methods — accessible from outside the class
	
	    void setData(int a, int b);
	
	    int calculate();
	
	    void display(int);
};



// setting value of private members (i.e length and breadth)
void rectangle::setData(int a, int b)
{
    length = a;
    breadth = b;
}


// calculating area using private members (i.e length and breadth)
int rectangle::calculate()
{
    area = length * breadth;
    
    return area; 					// area returned to main()
}


// Displaying the calcualted area
void rectangle::display(int d)
{
    area = d;
    
    cout << "calcualted area = " << area;
}



// main entry or exit point of the program
int main()
{
    int calculated_area;

    rectangle obj;         				// Create object of rectangle class

    obj.setData(5, 6);     				// Setting value of private members length=5, breadth=6 via public method

    calculated_area = obj.cal();      	// Calculate area and store in `calculated_area` 

    obj.display(calculated_area);     	// Displaying the calculate area
    

    return 0;
}

