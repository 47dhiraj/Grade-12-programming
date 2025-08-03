#include <iostream>
using namespace std;


/* While loop in C++ */

// SYNTAX of while loop:

// while(condition)
// {

//     ... statements; ...

//     increment / decrement;

// }


int main()
{

    // Note : while loop only get executed only if the the condition is true
    // Note: It initially checks the condition before executing statements inside while loop

	int myNumbers[5] = {10, 20, 30, 40, 50};
    
    
    //  Example 1: Static way of looping any data structure like an array using do while

	int i = 0;
	
	while(i < 5)
	{
		cout << "Element at index " << i << " = " << myNumbers[i] << endl;
		
		i++;
	}

	
	cout << endl;
	
	
	// Example 2: Dynamic way of looping any ds like an array using while loop
	
	i = 0;
	
	int size = sizeof(myNumbers) / sizeof(myNumbers[0]);  // Calculate element count dynamically
	
	while(i < size)
	{
		cout << "Element at index " << i << " = " << myNumbers[i] << endl;
		
		i++;
	}
	

    return 0;
}

