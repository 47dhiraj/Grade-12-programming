#include<iostream>
using namespace std;
class test1;
class test2
{
    int d;
public:
    void setvalue(int y);
    friend void add (test1, test2);

};
class test1
{
    int d;
public:
    void setvalue(int x);
    friend void add(test1, test2);

};

void test1::setvalue(int x)
{
    d=x;
}
void test2::setvalue(int y)
{
    d=y;
}
void add(test1 t1, test2 t2)
{
    cout<<"sum is"<<t1.d+t2.d;

}
int main()
{
    test1 t1;
    test2 t2;
    t1.setvalue(8);
    t2.setvalue(9);
    add(t1, t2);
    return 0;
}
