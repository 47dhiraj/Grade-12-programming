#include<iostream>
using namespace std;
class add
{
    int n1, n2, n3;
public:
    add(int a=0, int b=0)
    {
        n1=a;
        n2=b;
        n3=0;

    }
    void sum()
    {
        n3=n1+n2;

    }
    void display()
    {
        cout<<"sum is:"<<n3<<endl;

    }

};
int main()
{
    add o1;
    add o2(5);
    add o3(5,6);
    o1.sum();
    o2.sum();
    o3.sum();
    o1.display();
    o2.display();
    o3.display();
    return 0;

}
