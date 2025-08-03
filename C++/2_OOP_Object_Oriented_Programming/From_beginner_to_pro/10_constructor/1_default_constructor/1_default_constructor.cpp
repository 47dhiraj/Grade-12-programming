#include<iostream>
using namespace std;
class count
{
    static int a;
public:
    count ()
    {


        a++;

    }
    void display()
    {
         cout<<"You have created "<<a<<" objects";
    }
};
int count::a;
int main()
{
    count c1, c2,c3;
    c1.display();
}
