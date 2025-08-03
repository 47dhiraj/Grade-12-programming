#include<iostream>
#define PI 3.1428
using namespace std;
class circle
{
protected:
    float r;
public:
    void getradii()
    {
        cout<<"Enter the radius of a circle:";
        cin>>r;
    }
    void calarea()
    {
        cout<<"Area of circle is:"<<PI*r*r<<endl;
    }


};
class circum: public circle
{
    public:
    void calcircum()
    {
        cout<<"Circumference of circle is:"<<(2*PI*r)<<endl;
        //cout<<r;

    }
};

int main()
{
    //circle c;
    //c.getradii();
    //c.calarea();

    circum c1;
    c1.getradii();
    c1.calarea();

    c1.calcircum();

    return 0;
}





