#include<iostream>
using namespace std;


int main() 
{

    // Example: Showing break statement
    
    // It, instantly exits the entire loop (for, while, do-while, or switch-case) and moves control to the statement right after/below the loop.
    
    
    for (int i = 1; i < 10; i++)
    {
        if(i == 5) 
		{
            break;              // breaks; statement exits from the if and also the outer loop.
        }

        cout << i << endl;
    }



	cout << endl;
	

	
    // Example : Showing continue statement
    
    // IT, immediately skips the current iteration of the loop and jumps to the next iteration.
	// (i.e meaning it does not exit the loop but bypasses only the rest of the loop body of the current iteration.)
    
    
    for (int i = 1; i < 10; i++)
    {
        if(i == 5) 
		{
            continue;               // continue to next step of loop, but breaks the current step
        }

        cout << i << endl;
    }

    
    
    return 0;
}

