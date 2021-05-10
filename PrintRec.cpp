#include <iostream>

using namespace std;

void printForward(int n)
{
     if (n <= 0)
          return;
     else
     {
          printForward(n - 1);
          cout << n << " ";
     }
}

void printBackward(int n)
{
     if (n <= 0)
          return;
     else
     {
          cout << n << " ";
          printBackward(n - 1);
     }
}
int main()
{
     int n;
     n = 10;
     printForward(n);
     cout << endl;
     printBackward(n);
     cout << endl;
     return 0;
}