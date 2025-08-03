#include<iostream>
using namespace std;


int main()
{

    int age;
    
    cout << "Enter your age : " << endl;
    cin >> age;


    // Selection Control Statement
    
    // if-else statement

    if((age < 18) && (age > 0)){
    	
        cout << "You are not eligible to caste to vote" << endl;
        
    }
    else if(age == 18){
    	
        cout << "Congratulation for your first vote casting." << endl;
        
    }
    else if(age < 1){
    	
        cout << "Your age is invalid." << endl;
        
    }
    else{
    	
        cout << "You are eligible to caste vote." << endl;
    }


    return 0;
}

