#include<iostream>
using namespace std;
  
int main()
{
    // Two-Dimensional array
    // 2d array looks like matrix

    // an array with 3 rows and 2 columns.
    int x[3][2] = {{0,1},
                    {2,3},
                    {4,5}};
  
    // output each array element's value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element at x["<<i<<"]["<<j<<"] : ";
            cout << x[i][j]<<endl;
        }
    }
  



    // // Dynamic memory allocation for 2D array
    // int** y = new int*[3];                      // y chai pointer ho

    // for(int i = 0; i < 3; i++) {

    //     y[i] = new int[4];

    //     for(int j = 0; j < 4; j++){
    //         cin >> y[i][j];
    //     }

    // }




    return 0;
}