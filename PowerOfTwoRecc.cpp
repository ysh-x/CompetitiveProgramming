#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool pow2(int n)
{
     if (n == 0)
          return true;
     if (n == 1)
          return false;
     return pow2(n / 2);

}
bool isPowerOfTwo(int n)
{
     if (n == 0)
          return false;
     if (n == 1)
          return true;
     else
     {
          return pow2(n);
     }
}
int main()
{
     for(int i = 0; i < 20; i++) {
          cout << i << " : " << isPowerOfTwo(i) << endl;
     }
}