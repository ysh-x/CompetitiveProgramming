/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool overflow(long long int a, long long int b)
{
     long long int result = a * b;
     if (result < INT_MAX)
          return false;
     else
          return true;
}
int rev(int x)
{
     int dig;
     int rev = 0;

     while (x > 0)
     {

          dig = x % 10;
          if (overflow(rev, 10))
          {
               return 0;
          }
          rev = rev * 10 + dig;
          x = x / 10;
     }
     return rev;
}

int reverse(int x)
{
     int dig;
     int revs = 0;

     if (overflow(x, -1))
     {
          return 0;
     }
     if (x < 0)
     {
          x = x * -1;
          revs = rev(x);
          return revs * -1;
     }
     else
     {
          return rev(x);
     }
}

     int main()
     {
          cout << reverse(1534236469) << endl;
          cout << reverse(123) << endl;
          cout << reverse(-123123) << endl;
     }