
#include<iostream>
using namespace std;
class A
{
protected:
    int a;
public:
    void seta()
    {
        a=5;
    }

};
class B: public A
{
protected:
    int b;
public:
    void setb()
    {
        b=10;
    }
};
class C: public B
{
protected:
    int c;
public:
    void setc()
    {
        c=15;
    }
};

class D
{
protected:
    int d;
public:
    void setd()
    {
        d=20;
    }
};
class E: public C, public D
{
    protected:
    int tot;
public:
    void total()
    {
        tot=a+b+c+d;
        cout<<"Total="<<tot;

    }

};
int main()
{
    E e;
    e.seta();
    e.setb();
    e.setc();
    e.setd();
    e.total();
    return 0;
}
