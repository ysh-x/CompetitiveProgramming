#include <iostream>
#include <vector>

using namespace std;

void numbericPyramid(int rows)
{
     int count = 1;

     for (int i = 1; i <= rows; i++)
     {
          for (int k = rows - 1; k >= i; k--)
          {
               cout << "0";
          }
          for (int j = i; j >= 1; j--)
          {
               cout << count;
               count ++;
          }
          for (int j = 2; j <= i; j++)
          {
               cout << j;
          }
          for(int l = rows; l >i; l--) {
               cout << "0";
          }
          cout << endl;
     }
}

int main() {
     numbericPyramid(3);
}