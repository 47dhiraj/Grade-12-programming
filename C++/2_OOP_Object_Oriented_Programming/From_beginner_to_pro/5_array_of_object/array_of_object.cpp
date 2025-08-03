#include<iostream>
using namespace std;
class A
{
    char name[25];
public:
    void getname()
    {
        cout<<"Enter your name:"<<endl;
        cin>>name;
    }
    void dispname()
    {

        cout<<name<<endl;
    }

};

int main()
{
    A obj[5];
    for(int i=0; i<5; i++)
    {
        obj[i].getname();
    }
    cout<<"Names are:"<<endl;
    for(int i=0; i<5; i++)
    {
      obj[i].dispname();
    }
    return 0;
}
