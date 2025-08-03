#include<iostream>
using namespace std;

class overloaded
{
    int a,b;
public:
    overloaded()
    {
        cout<<"I am default constructor.I have no value"<<endl<<endl;
    }
    overloaded(int x)
    {
        a=x;
        cout<<"I am one parameterized constructor."<<endl<<"I have value:"<<a<<endl<<endl;
    }
    overloaded(int x, int y)
    {
        a=x;
        b=y;
        cout<<"I am two parameterized constructor."<<endl<<"I have value:"<<a<<" & "<<b<<endl;
    }
};
int main()
{
    overloaded();
    overloaded(5);
    overloaded(5,6);
    return 0;
}
