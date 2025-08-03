#include<iostream>
using namespace std;
class your_age
{
    int age, age1,result;
public:
    void birth_year()
    {
        cout<<"Enter your birth year:";
        cin>>age;
    }
    void present_year()
    {
        cout<<"Enter present year:";
        cin>>age1;

    }
    void display(your_age, your_age);
};
void your_age::display(your_age a1, your_age a2)
{
    cout<<"You are around "<<a2.age1-a1.age<<" years old";
}
int main()
{
    your_age o1,o2,o3;
    o1.birth_year();
    o2.present_year();
    o3.display(o1,o2);
    return 0;


}
