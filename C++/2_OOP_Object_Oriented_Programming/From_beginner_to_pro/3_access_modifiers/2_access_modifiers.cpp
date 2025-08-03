#include<iostream>
using namespace std;
class access_specifiers
{
private:
    int a,b;
    void getsum()
    {
        cout<<"Enter the two number to get sum"<<endl;
        cin>>a>>b;
    }
    void display()
    {
        cout<<"Sum="<<a+b<<endl;
    }
public:
    int l,B,result;
    void callsum();

protected:
    int c,d;
    void getdiff()
    {
        cout<<"Enter two number to get difference"<<endl;
        cin>>c>>d;

    }
    void print()
    {
        cout<<"diff="<<c-d;

    }

};
void access_specifiers::callsum()
{
    getsum();
     display();
}
class A: public access_specifiers
{
    public:
    void Abc()
    {

    getdiff();

    print();
    }

};


int main()
{
    access_specifiers o1;
    A obj;
    o1.callsum();
    cout<<"Enter length and breadth to get area"<<endl;
    cin>>o1.l>>o1.B;
    cout<<"Area="<<o1.l*o1.B<<endl;
    obj.Abc();

    return 0;
}
