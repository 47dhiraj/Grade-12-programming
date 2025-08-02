#include <iostream>
using namespace std;

/* For each loop */

// SYNTAX of for-each loop

// for (type variableName : arrayName) {

//    ... statements ...

// }


int main()
{

    int myNumbers[5] = {10, 20, 30, 40, 50};


	// This is considered best loop to loop a data structure in c++
	
	
    // Example: Dynamic way to loop array using for_each loop
    
    for (int i : myNumbers) 
	{
		cout << "Array elements are " << i  << endl;	// i itself contains array elements (i.e not array index position) 
    }
	
	

    return 0;
}
