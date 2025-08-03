#include<iostream>
using namespace std;
class rectangle
{
    int length, breadth, area;
public:
    void getdata(int,int);
    int cal();
    void display(int );

};
void rectangle::getdata(int a, int b)
{
    length=a;
    breadth=b;
}
int rectangle::cal()
{
    area=length*breadth;
    return area;

}
void rectangle::display(int d)
{   area=d;
    cout<<"Area="<<area;
}
int main()
{
    int hold;
    rectangle obj;
    obj.getdata(5,6);
    hold=obj.cal();
    obj.display(hold);
    //cout<<"Area="<<obj.display();
    return 0;
}

