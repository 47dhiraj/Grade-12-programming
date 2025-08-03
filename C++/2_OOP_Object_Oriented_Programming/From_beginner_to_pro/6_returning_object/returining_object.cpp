#include<iostream>
using namespace std;
class weight
{
    int kg,g;
public:
    void getw();
    void disp();
    weight total(weight, weight);

};

void weight::getw()
{
     cout<<"Enter weight in kg and gram"<<endl;
     cin>>kg>>g;
     cout<<endl;



}
void weight:: disp()
{
    cout<<"Total weight="<<kg<<"kg and"<<g<<"gram"<<endl;

}
weight weight:: total(weight w1, weight w2)
{
    weight w;
    w.g=w1.g+w2.g;
    w.kg=w.g/1000;
    w.g=w.g%1000;
    w.kg=w.kg+w1.kg+w2.kg;
    return w;
}
int main()
{
    weight w1,w2,w3;

    w1.getw();
    w2.getw();
    w3=w3.total(w1, w2);
    w3.disp();
    return 0 ;



}

