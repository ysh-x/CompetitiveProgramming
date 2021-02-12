#include<iostream>

using namespace std;
//prints the following patterns 

// *        *
// **       *
// * *      *
// *  *     *
// *   *    *
// *    *   *
// *     *  *
// *      * *
// *       **

// *        *
// *        *
//  *      * 
//   *    *  
//    *  *   
//     **    
//     **    
//    *  *   
//   *    *  
//  *      * 
// *        *
// *        *

// **********
//   *    *  
//    *  *   
//     **    
//     **    
//    *  *   
//   *    *  
//  *      * 
// **********

void patternN (int size) {
     for(int i = 1; i <=size; i++) {
          for(int j = 1; j <=size; j++) {
               if(i == j || j == size || j ==1 ) 
               {
                    cout << "*";
               }
               else
               {
                    cout << " ";
               }
               
              
          }
          cout << endl;
     }
}
void patternX(int size) {
     for (int i = 0; i < size; i++)
     {
          for (int j = 0; j < size; j++)
          {
               if (i == j || (i+j) == (size-1))
               {
                    cout << "*";
               }
               else
               {
                    cout << " ";
               }
          }
          cout << endl;
     }
}

void sandClock(int size) {
     cout << endl << "TIME IS TICKING " << endl << endl;
          for (int i = 0; i < size; i++)
          {
               for (int j = 0; j < size; j++)
               {
                    if (i ==0 || i == size-1 || i == j || (i + j) == (size - 1))
                    {
                         cout << "*";
                    }
                    else
                    {
                         cout << " ";
                    }
               }
               cout << endl;
          }
}

void patternY(int size) {
     if(size%2!=0) 
          size++;
     
}

int main() {
          // patternN(10);
          // patternX(10);
           sandClock(10);
}