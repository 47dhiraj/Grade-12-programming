#include<iostream>
#include<math.h>
using namespace std;



class bank
{
    float p,t,r,n,T;
    
	public:
		
	    bank(int a, int b, float c, int d)			// parametrized constructor
	    {
	        p=a;
	        t=b;
	        r=c;
	        n=d;
	    }
	    
	    void cal()
	    {
	        T= p * pow((1+r/n), (n*t));
	        
	        cout << "Total amount after monthly compounding interest is:" << T;
	    }

};


int main()
{

	bank b1(5000, 10, 0.05, 12);
	
	b1.cal();

}
