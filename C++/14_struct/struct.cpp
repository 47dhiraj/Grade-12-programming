#include<iostream>
using namespace std;


// Structures are a way to group several related variables into one place.
// Each variable in the structure is known as a member of the structure.

// Note: Structures are also called structs.
// Unlike array, a structure can contain many different data types (int, string, bool, etc.)


// Declaring a structure, naming it employee
typedef struct employee     // Total memory allocated/occupied by this employee struct is using 9 bytes memory (i.e ekkai choti sabai struct member/variable lai use garna paucha, i.e no memory sharing concept)
{
    // structure ma different data types ko variable/member garauna paucha
    int eId;                // int le 4 byte occupy garcha memory ma
    char favChar;           // char le 1 byte occupy garcha memory ma
    float salary;           // float le 4 byte occupy garcha memory ma

} ep;                       // yo line ko ep vannale, employee structure lai auta label diyeko ho


int main()
{
    // various ways of creating a structure

    // one way
    ep dhiraj;                      // dhiraj vanni structure create gareko

    // alternative way
    // struct employee dhiraj;      // yo line le pani, dhiraj vanni structure create garcha

    // Intializing struct member 
    dhiraj.eId = 1;
    dhiraj.favChar = 'a';
    dhiraj.salary = 100000;

    // printing values 
    cout<<"The value is "<<dhiraj.eId<<endl; 
    cout<<"The value is "<<dhiraj.favChar<<endl; 
    cout<<"The value is "<<dhiraj.salary<<endl; 

    return 0;

}
