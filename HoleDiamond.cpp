#include <iostream>
#include <vector>

using namespace std;

void numbericPyramid(int A)
{
 

     for (int i = A-1; i > 0; i--)
     {
          for(int j = 1; j <=i ; j++) {
                cout << j;
          }
          for(int k = 2; k< i; k++) {
          cout << "0";
           }

          for (int l = i; l > 0; l--)
           {
               cout << l;
           }
          cout << endl;
     }
}

int main() {
     numbericPyramid(4);
}