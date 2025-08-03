#include<iostream>
using namespace std;
class A
{
protected:
    int a;
public:
    void read()
    {
        cout<<"Enter 1st number:";
        cin>>a;
    }
};
class B
{
protected:
    int b;
public:
    void read()
    {
        cout<<"Enter second number:";
        cin>>b;
    }
};

class c: public A, public B
{
    int mul;
public:
    void multiply()
    {
      mul=a*b;
    cout<<a<<"*"<<b<<" = "<<mul;
    }
    void read()
    {
        A::read();  //overriding member function to solve ambiguity problem.
        B::read();
    }
};
int main()
{
    c obj;
    obj.read();
    obj.multiply();
    return 0;
}

