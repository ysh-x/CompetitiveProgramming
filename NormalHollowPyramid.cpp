// Print the following Pattern

// ******
// *   *
// *  *
// * *
// **
// *

#include<iostream>

using namespace std;



void hollowPyramid(int rows) {

     for(int i = 1; i <= rows; i++) {
          for(int j = 0; j < i; j++) {
               if(i== rows  || j == 0 || j == (i-1))
                // Printing the inverted 'L' shape using i = rows
                // and J = 0, Then for the slanting, when J hits the last element ie(i-1)
                //the symbol is printed
                    cout << "*";
               else
                   cout <<" ";
          }
          cout << endl;
     }
    
}

int main() {
     hollowPyramid(6);
}