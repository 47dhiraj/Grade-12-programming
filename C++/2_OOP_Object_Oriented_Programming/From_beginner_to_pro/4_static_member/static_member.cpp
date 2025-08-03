#include<iostream>
using namespace std;
class A
{
    static int a;
public:
   static void getdata();
    static void display();
};
int A::a;
void A :: getdata()
{
   a++;

}
void A::display()
{

    cout<<a;
}
int main()
{

    A::getdata();
    A::display();
    A::getdata();
    A::display();
    A::getdata();
    A::display();


    return 0;

}
