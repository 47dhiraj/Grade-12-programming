#include<iostream>
using namespace std;



class test
{
    int num1, num2;
    
    public:
    	friend class first;				// since, first class is declared as friend of test class
    									// (which means, first class can access private members of test class)
};



class first
{
    int res;
    
    public:
    	void sum();
};




void first:: sum()
{
	
    test t;								// creating test object/instance (i.e t) inside sum function of first class
    									// (yesari arko class ko object banauna tw paincha, yesko lagi friendship banai rakhna pardaina)
    
    
    cout << "\n Enter 1st number: ";
    cin >> t.num1;					// yesari, arko class ko private member/maal (i.e num1) lai aafno class ko function ma use garna chai friendship hunai parcha, ani ball milcha.
    
    
    cout << "\n Enter 2nd number: ";
    cin >> t.num2;					// yesari, arko class ko private member/maal (i.e num2) lai aafno class ko function ma use garna chai friendship hunai parcha, ani ball milcha.
    
    
    res = t.num1 + t.num2;
    
    
    cout<<"\n Sum is: " << res << endl;
}



int main()
{
	// creating object of first class (i.e f)
    first f;
    
    f.sum();
    
    return 0;

}
