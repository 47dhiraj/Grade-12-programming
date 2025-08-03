#include <iostream>
using namespace std;



// Global variables ared declared above/outside main()
int a = 5;
int b = 10;


int main() 
{
	
    // Accessing global variable
    cout << "\nGlobal value of a: " << a << endl;
    cout << "Global value of b: " << b << endl;
    
    cout << "\nSum of global variables: " << a + b << endl;
    
    
    // Modifying global variable
    a = a + 50;
	b = b - 5; 
    
    
    cout << "\nUpdated value of a: " << a << endl;
    cout << "Updated value of b: " << b << endl;
    

    return 0;
}
