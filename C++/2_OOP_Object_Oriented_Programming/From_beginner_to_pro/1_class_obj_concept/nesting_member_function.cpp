#include <iostream>
using namespace std;


// concept of nesting member function --> i.e function vitra function use garna sakincha


class binary                            // binary vanni auta class create gareko
{
	
    private:                            // private access modifiers
    
        string s;                       // s vanni string variable
        void chk_bin(void);             // chk_bin() function declaration


    public:                             // public access modifiers
    
        void read(void);                // read() function declaration
        void ones_compliment(void);     // ones_compliment() function declaration
        void display(void);             // display() function declaration
        
};


// read() function defintion
void binary::read(void)                 // Syntax for defining function, outside of class ==> type ClassName::functionname()
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
}


// chk_bin() function defintion
void binary::chk_bin(void)              // Syntax for defining function, outside of class ==> type ClassName::functionname()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}


// ones_compliment() function defintion
void binary::ones_compliment(void)      // Syntax for defining function, outside of class ==> type ClassName::functionname()
{
	
    // yo talako chk_bin() function call gareko concept lai nai, nesting of member function concept vanincha
    chk_bin();                          // chk_bin() vanni private function lai call gareko, without using any object i.e obj. garera call garna parena


    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}


// display() function defintion
void binary::display(void)              // Syntax for defining function, outside of class ==> type ClassName::functionname()
{
	
    cout << "Displaying your binary number" << endl;
    
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    
    cout << endl;
}




int main()                              // c++ main execution function (i.e entry point of program)
{
	
    binary b;                           // creating b object of binary class

    b.read();                           // calling read() function for b obj
    // b.chk_bin();                     // private methods lai class bahira batw directly access garna mildaina

    b.display();                        // calling display() function for b obj
    b.ones_compliment();                // calling ones_compliment() function for b obj
    b.display();                        // calling display() function for b obj


    return 0;
}
