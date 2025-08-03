#include <iostream>
using namespace std;


// Note :static variable are created so that, the value of that static variable can be shared among all the objects of the Class


class Employee
{
    // by default, member haru private huncha,, so id and count are private
    int id;
    static int count;                   // count chai static member of Employee class
                                        // generally, static variable(eg: count) is not object variable, it's a class variable(i.e sabai object ko lagi count ko value common huncha)
                                        
    public:                             // public access modifier
        void setData(void)
        {
            cout << "Enter the id : " << endl;
            cin >> id;

            count++;
        }


        void getData(void)
        {
            cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
        }


        static void getCount(void)              // getCount() is static function of Employee class
        {
            // cout<<id; // throws an error
            cout << "The value of count is : " << count << endl;
        }

};


int Employee::count;                // static member lai class bahira yesari initialize/define garincha, (i.e by default integer static variable ko value 0 huncha)


int main()
{
    Employee agent, hitman;         // creting multiple objects at once

    agent.setData();
    agent.getData();
    Employee::getCount();           // static function can be accessed without creating an object(i.e direct classname & scope resolutiion operator batw access garna skaincha)

    hitman.setData();
    hitman.getData();
    Employee::getCount();           // static function can be accessed without creating an object(i.e direct classname & scope resolutiion operator batw access garna skaincha)


    return 0;
}
