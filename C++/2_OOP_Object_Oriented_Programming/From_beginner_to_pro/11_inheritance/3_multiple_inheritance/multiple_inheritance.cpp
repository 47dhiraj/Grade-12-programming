#include<iostream>
using namespace std;
class first
{
protected:
    char fname[25];
public:
    void getfname()
    {
        cout<<"Enter your first name:";
        cin>>fname;
    }
    void dispfname()
    {
        cout<<fname<<"\t";
    }

};
 class mid
 {
     protected:
     char midname[25];
     public:
     void getmidname()
     {
         cout<<"Enter your mid name if you don't have your middle name hit dash(-):";
         cin>>midname;
     }
     void dispmidname()
     {
         cout<<midname<<"\t";
     }
 };
 class last: public first, public mid
 {
 protected:
    char lastname[25];
 public:
    void getlastname()
    {
        cout<<"Enter your last name:";
        cin>>lastname;
    }
    void displastname()
    {
        cout<<lastname;
    }
 };
 int main()
 {
     last l;
     l.getfname();
     l.getmidname();
     l.getlastname();
     cout<<"Your full name is:";

     l.dispfname();
     l.dispmidname();
     l.displastname();
     return 0;
 }
