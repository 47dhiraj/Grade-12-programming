#include<iostream>
using namespace std;
class Test
{
    int l,b;
    public:
    void getdata();
    void display()
    {

        cout<<"Area="<<l*b;
    }

};

void Test:: getdata()
{
    cout<<"Enter the length and breadth";
    cin>>l>>b;

}
int main()
{
    Test o1;
     o1.getdata();
     o1.display();

    return 0;

}
