#include<iostream>
using namespace std;

class person
{
    string name;
public:
    void getname()
    {
        cout<<"Enter name:";
        getline(cin,name);

    }
    void dispname()
    {
        cout<<endl<<"*******PERSONAL INFO*******"<<endl;

        cout<<endl<<"Name:"<<name;
    }
};

class address
{
    string country;
    string street;
    int house_no;
    person p;
public:
    void getaddress()
    {
         p.getname();
         cout<<"Enter your country name:";
         getline(cin, country);
         cout<<"Enter your street name:";
         getline(cin, street);
         cout<<"Enter your House number:";
         cin>>house_no;
    }
    void display()
    {
       p.dispname();
        cout<<endl<<"Country:"<<country<<endl<<"Street:"<<street<<endl<<"House no.:"<<house_no<<endl;
    }

};
int main()
{
    address a;
    a.getaddress();
    a.display();
    return 0;

}

