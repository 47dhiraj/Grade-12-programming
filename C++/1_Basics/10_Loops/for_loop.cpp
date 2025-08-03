#include <iostream>

#include <iterator>  						// For using size() function

using namespace std;

// For loop in C++

// SYNTAX of for loop

//		for (initialization; condition; increment) 
//		{
//    		....... statements ......
//		}


int main()
{

    int myNumbers[5] = {10, 20, 30, 40, 50};

	
	
	
	// Example 1: Static way of looping data structure like an array (if already known array size to loop)
    for (int i = 0; i < 5; i++) 
	{
        cout << "Element at index " << i << " = " << myNumbers[i] << endl;
    }
	
	
	cout << endl;
	
	
	
	
	// Example 2: Dynamic way of looping data structure like an array
	
	// Good dynamic way to find size(length) of an array
	int size = sizeof(myNumbers) / sizeof(myNumbers[0]);

	for (int i = 0; i < size; i++) 
	{
	    cout << "Element at index " << i << " = " << myNumbers[i] << endl;
	}


	cout << endl;



    return 0;
}

