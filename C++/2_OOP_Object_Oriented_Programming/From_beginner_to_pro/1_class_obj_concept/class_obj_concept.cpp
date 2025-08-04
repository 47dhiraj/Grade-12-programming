#include<iostream>
using namespace std;

/*
    Syntax for creating a class

    class ClassName 
    {
        // attributes & methods(functions)
    }

*/


class Employee                                      // creating a class named Employee
{
	
    private:                                        // private access modifiers 
        int a, b, c;                                // private attributes/properties banayeko   // private attributes are not accesible outside from class


    public:											// public access modifiers   
	                                       
        int d, e;                                   // public attributes & methods banayeko // publice methods are easily accessible outside of class


        void setData(int a1, int b1, int c1);       // setData() function declaration gareko, definition code pani lekhna milcha


        // getData() function definition, inside a class
        void getData() {                            
        
            cout<<"The value of a is "<<a<<endl;    // private attribute lai class vitra ko kunai method batw access garna sakincha
            cout<<"The value of b is "<<b<<endl;    // private attribute lai class vitra ko kunai method batw access garna sakincha
            cout<<"The value of c is "<<c<<endl;    // private attribute lai class vitra ko kunai method batw access garna sakincha

            cout<<"The value of d is "<<d<<endl;    // public attribute can be accessed both from outside class & also from inside class from any method
            cout<<"The value of e is "<<e<<endl;    // public attribute can be accessed both from outside class & also from inside class from any method
        }


};



// setData() function definition, outside of a class
void Employee :: setData(int a1, int b1, int c1)        // Syntax of defining function outside of any class ==>  type Class :: functionname()
{
    a = a1;
    b = b1;
    c = c1;
}




int main() {                                            // c++ ko main() excution function (i.e entry point of a program)

    Employee agent;                                     // creating an agent object of Employee class

    // agent.a = 134;                                   --> This will throw error because a is private & private attribute cannot be accesed outside of the class
    
    agent.d = 34;                                       // setting value of d for agent object
    agent.e = 89;                                       // setting value of e for agent object

    agent.setData(1,2,4);                               // calling setData() function by agent object
    
    agent.getData();                                    // calling getData() function by agent object


    return 0;
}
