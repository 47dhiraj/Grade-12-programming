#include<iostream>
using namespace std;


// one class named person
// person class only hold name of a person
class person
{
	
    string name;
    
	public:
		
	    void getname()
	    {
	        cout << "Enter your name:";
	        
	        getline(cin,name);
	
	    }
	    
	    void dispname()
	    {
	        cout << endl << "*******PERSONAL INFO*******" << endl;
	
	        cout << endl << "Name: " << name;
	    }
    
};




// Another class named address
// address calss only hold detail address of person like (country, street, house_no etc.)
class address
{
	
    string country;
    string street;
    int house_no;
    
    person p;						// this line actually create a new person object/instance (i.e p)
    
	public:
		
	    void getaddress()
	    {
			p.getname();
			
			cout << "Enter your country name:";
			getline(cin, country);
			
			cout << "Enter your street name:";
			getline(cin, street);
			
			cout << "Enter your House number:";
			cin >> house_no;
	    }
	    
	    
	    void display()
	    {
	    	p.dispname();
	        cout << endl << "Country: " << country << endl << "Street: " << street << endl << "House no.: " << house_no << endl;
	    }

};




int main()
{
	
	// creating a address object (i.e a)
    address a;
    
    a.getaddress();
    
    a.display();
    
    
    return 0;

}

