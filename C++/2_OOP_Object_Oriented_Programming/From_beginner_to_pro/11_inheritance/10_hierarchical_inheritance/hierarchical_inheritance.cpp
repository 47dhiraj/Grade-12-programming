
#include<iostream>

using namespace std;
#define PI 3.1427
class A
{
protected:
    int l,b,h,r;
public:
    void getlbh()
    {
        cout<<"Enter length:";
        cin>>l;
        cout<<"Enter breadth:";
        cin>>b;
        cout<<"Enter Height:";
        cin>>h;
    }
    void getlb()
    {
        cout<<"Enter length:";
        cin>>l;
        cout<<"Enter breadth:";
        cin>>b;
    }
    void getradii()
    {
        cout<<"Enter radius:";
        cin>>r;
    }
};

class volume: public A
{
    int v1;
public:
    void display()
    {
        v1=l*b*h;
         cout<<"Volume="<<v1<<endl;
    }

};
class Area:public A
{
public:
    void display1()
    {
        cout<<"Area="<<l*b<<endl;
    }
};
class circle: public A
{
public:
    void display2()
    {
        cout<<"Area of circle="<<PI*r*r<<endl;
    }
};
int main()
{
    volume v;
    Area a;
    circle c;

    v.getlbh();
    v.display();
    a.getlb();
    a.display1();
    c.getradii();
    c.display2();
    return 0;

}
