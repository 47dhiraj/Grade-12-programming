// Various ways of finding the length of an array in c++

#include <iostream>
using namespace std;

int main() {

   int arr[5] = {4, 1, 8, 2, 9};

    // finding the size/length of an array using sizeof() method
   int length = sizeof(arr) /sizeof(arr[0]);        // sizeof(array) le total memory size occupied by array dincha & sizeof(array[0]) le memory occupied by first element dincha

   cout << "\n The length of the array is : " << length;

   return 0;
}
