#include<iostream>
using namespace std;
class test
{
    int num1, num2;
    public:
    friend class first;
};
class first
{
    int res;
    public:
    void sum();
};

void first:: sum()
{
    test t;
    cout<<"\n Enter 1st number";
    cin>>t.num1;
    cout<<"Enter 2nd number";
    cin>>t.num2;
    res=t.num1+t.num2;
    cout<<"\n Sum is"<<res;
}
int main()
{
    first f;
    f.sum();
    return 0;

}
