// Check number of set bits
#include <iostream>

using namespace std;
int numSetBitsOne(int A)
{
     int count = 0;

     for (int i = 0; i <= 30; i++)
     {
          if ((A & (1 << i))) // Left shifting 1 so that it can check each and every digit
          {
               count++; //
          }
     }
     return count;
}

int numSetBitsTwo(int A) {
     int count = 0;
     for (int i = 0; i <= 30; i++)
     {
          if ((A & 1))
          {
               count++;
          }
          A = A >> 1; // Right shifting the number to reduce and find the bits
     }
     return count;
}
int main()
{
     int A = 127;
    
     cout << "Number of Set Bits : " << numSetBitsOne(A) << endl;
     cout << "Number of Set Bits : " << numSetBitsTwo(A) << endl;

     return 0;
}