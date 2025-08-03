#include<iostream>
using namespace std;

class Marks
{
public:
   int maths;
   int science;

   //constructor
   Marks() {
      cout << "Inside Constructor"<<endl;
      cout << "C++ Object created"<<endl<<endl;
   }

   //Destructor
   ~Marks() {
      cout << "Inside Destructor"<<endl;
      cout << "C++ Object destructed"<<endl<<endl;
   }
};

int main( )
{
   {
   Marks m1;
   } // scope finished automatically destructor was called


   cout<<"Hello World !!" <<endl;
   cout<<"Hello World !!" <<endl;
   cout<<"Hello World !!" <<endl;
   cout<<"Hello World !!" <<endl;

   return 0;
}
