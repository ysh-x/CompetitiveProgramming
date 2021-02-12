#include <iostream>

using namespace std;

void fullPyramid(int rows)
{
     for (int i = 1; i <= rows; i++)
     {
          for (int k = rows - 1; k >= i; k--)
          {
               cout << " ";
          }
          for (int j = 1; j <= i; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }
}
void invertedFullPyramid(int rows)
{
     for (int i = rows; i >0; i--)
     {
          for (int k = rows - 1; k >= i; k--)
          {
               cout << " ";
          }
          for (int j = 1; j <= i; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }
}

void solidDiamond(int rows) {
     for (int i = 1; i <= rows; i++)
     {
          for (int k = rows - 1; k >= i; k--)
          {
               cout << " ";
          }
          for (int j = 1; j <= i; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }

     for (int i = rows; i > 0; i--)
     {
          for (int k = rows - 1; k >= i; k--)
          {
               cout << " ";
          }
          for (int j = 1; j <= i; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }
}
int main()
{
     // YOUR CODE GOES HERE
     // Please take input and print output to standard input/output (stdin/stdout)
     // E.g. 'cin' for input & 'cout' for output
     int size;
     cin >> size;
     //fullPyramid(size);
     //invertedFullPyramid(size);
     solidDiamond(size);
     return 0;
}