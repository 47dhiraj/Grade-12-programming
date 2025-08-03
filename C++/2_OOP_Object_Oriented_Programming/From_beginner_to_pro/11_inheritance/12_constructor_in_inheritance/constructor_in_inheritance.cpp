#include<iostream>
using namespace std;
class alpha
{
    protected:
    int a;
    public:
    alpha(int x)
    {
        a=x;

    }
    void show()
    {
        cout<<"a="<<a<<endl;

    }
};
class beta
{
protected:
    int b;
public:
    beta(int y)
    {
        b=y;

    }
    void show()
    {
        cout<<"b="<<b<<endl;

    }
};
class gamma : public alpha, public beta
{
protected:
    int c;
public:
    gamma(int a, int b, int z):alpha(a), beta(b)

    {
        c=z;

    }
    void show()
    {
        cout<<"c="<<c<<endl;

    }
};
int main()
{
    gamma g(2,3,4);
    g.alpha::show();
    g.beta::show();
    g.gamma::show();
    return 0;
}
