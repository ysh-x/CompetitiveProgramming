/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int rows = 4;
    int columns = 4;
    int A[4][4] = {{01,02,03,04},{05,06,07,8},{9,10,11,12},{13,14,15,16}};
    
    cout << "Traversal by Rows \n";
    for(int i = 0; i < rows; i++ ) {
        for(int j = 0; j < columns; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Traversal by Columns \n";
      for(int i = 0; i < columns; i++ ) {
        for(int j = 0; j <  rows; j++) {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
