#include<iostream>
using namespace std;


int main()
{

    int age, ageGroup;
    
    cout << "Enter you age : ";
    cin >> age;

	
	// Mapping specific age to ageGroup(certain age range), so that we can use this in switch-case 
	
    if (age < 13) {
    	
        ageGroup = 1;   			// Kid
        
    } else if (age >= 13 && age < 20) {
    	
        ageGroup = 2;   			// Teen
        
    } else if (age >= 20 && age < 59) {
    	
        ageGroup = 3;   			// Adult
        
    } else {
    	
        ageGroup = 4;   			// Senior
    }
    


    // Switch-case 

    switch (ageGroup) {
    	
        case 1:
        	
            cout << "\nYou're a Kid." << endl;
            
            break;
            
        case 2:
        	
            cout << "\nYou seems a Teen." << endl;
            
            break;
            
        case 3:
        	
            cout << "\nYou're a grownup human." << endl;
            
            break;
            
        case 4:
        	
            cout << "\nYou seems respectful senior citizen." << endl;
            
            break;
            
        default:
        	
            cout << "\nInvalid age, bro." << endl;
    }



    return 0;
}
