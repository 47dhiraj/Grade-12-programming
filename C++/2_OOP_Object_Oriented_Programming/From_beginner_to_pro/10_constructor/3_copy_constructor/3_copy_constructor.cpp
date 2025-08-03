#include<iostream>
using namespace std;
class copys
{
    int a,b;
public:
    copys()
    {}
    copys (int x, int y)
    {
        a=x;
        b=y;
    }
    copys(const copys& obj1)
    {
        a=obj1.a;
        b=obj1.b;
    }
    void display()
    {
        cout<<"Value is:"<<a<<"\t"<<b<<endl;

    }
};
int main()
{
    copys c1(10, 20);
    copys c2 (c1);
    copys c3=c1;  //same as c3(c1);
    c1.display();
    c2.display();
    c3.display();
    return 0;

}

