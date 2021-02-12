#include <iostream>
#include <vector>

using namespace std;

void numbericPyramid(int rows)
{
     vector < int> temp;
     vector<vector<int>> ans;

     for (int i = 1; i <= rows; i++)
     {
          for (int k = rows - 1; k >= i; k--)
          {
               cout << "0";
          }
          for (int j = i; j >= 1; j--)
          {
               cout << j;
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
     numbericPyramid(4);
}