#include<iostream>
using namespace std;
class A;
class B
{
    int b;
    public:
    void setvalue(int x);
    void display();
    friend void swap(A&, B&);
};
class A
{
    int a;
public:
    void setvalue (int y);
    void display();
    friend void swap (A&, B&);

};
void A::setvalue(int y)
{
    a=y;
}
void B::setvalue(int x)
{
    b=x;
}
void A::display()
{
    cout<<"a="<<a<<"\t";
}
void B::display()
{
    cout<<"b="<<b;
}
void swap(A&A1, B&B1)
{
    int temp;
    temp=A1.a;
    A1.a=B1.b;
    B1.b=temp;
}
int main()
{
    A a1;
    B b1;
    a1.setvalue(6);
    b1. setvalue(8);
    cout<<"Before swap"<<endl;
    a1.display();
    b1.display();
    swap(a1,b1);
    cout<<endl<<"After swap"<<endl;
    a1.display();
    b1. display();
    return 0;
}
