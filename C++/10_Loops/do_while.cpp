#include <iostream>
using namespace std;

/* do While loop in C++*/

// SYNTAX:

// do
// {

//     ... statements; ...

//     increment / decrement;

// }while(condition);


int main()
{
	
    // Note : while using do while loop, first iteration/round is also executed even though the condition is false.

    int myNumbers[5] = {10, 20, 30, 40, 50};
    
    
    
    //  Example 1: Static way of looping any data structure like an array using do while
    
	int i = 0; 				// Initialize any loop counter (for eg: i=0)
    
    do {
    	
        cout << "Element at index " << i << " = " << myNumbers[i] << endl;
        
        i++;
        
    } while (i < 5);  		// Condition to continue loop until last element
    
    
    
    
    
    cout << endl;
    
    
    
    
    // Example 2: Dynamic way of looping with the help of do while
    
    i = 0;
    
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]);  // Calculate element count dynamically
    
    do {
    	
        cout << "Element at index " << i << " = " << myNumbers[i] << endl;
        
        i++;
        
    } while (i < size);
    


    return 0;
}

