#include <iostream>
using namespace std;

#include <iterator> // required for std::size

int main() {

    // An array in C++ is a collection of items stored at contiguous memory locations and elements can be accessed randomly using indices of an array.
    // Array are used to store similar type of elements as in the data type must be the same for all elements.
    // Indexing can be done in array to obtain array element/value.
    
    // One way of declarig an array
    int marks[4] = {23, 45, 56, 89};         // Both declaring & initializing an array i.e initialize gareko bela ma array size nadiye pani huncha

    // Another way of declaring an array
    int mathMarks[4];                       // Only declaring an array, so yesto bela array size dinai parcha

    // Inserting element/value in array
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    // cout<<"These are math marks : "<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    // You can modify/update/change the value of an array
    marks[2] = 57;

    // cout<<"These are math marks : "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    
    // way of finding the size/length of any array
    int length = sizeof(marks)/sizeof(marks[0]);


    // // Looping an array using for loop
    // for (int i = 0; i < length; i++) {
    //     cout<<"The value of marks["<<i<<"] is "<<marks[i]<<endl;
    // }


    // // Looping an array using while loop
    // int i = 0;

    // while(i < length) {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }



    // // Looping an array using do-while loops
    // int i = 0;

    // do {
    //     cout<<marks[i]<<endl;
    //     i++;
    // } while(i < length);




    


    return 0;
}
