#include<iostream>
#include<math.h>
#include<algorithm>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;

long long int Gcd(long long int a, long long int b)
{
     if (a == 0)
          return b;
     if (b == 0)
          return a;

     if (a == b)
          return a;

     if (a > b)
          return Gcd(a - b, b);
     return Gcd(a, b - a);
}

int AthMagic(int A, int B, int C) {

     long long int start = min(B,C); // Starting from the minimum since that is the first occurance in the magical number
     long long int end = (long long int)((A * min(B,C))); // Maximum it can go only till A times of the minimum number since atleast once the max number will appear
     long long int gcd = Gcd(B,C);
     long long int ans = 0;

     while(start <= end) {
          long long int mid = (start + end) / 2;
          cout << start << " " << end << " " << mid << " " << gcd << endl;
          long long int count =  (long long int)((mid / B + mid / C - ((mid * gcd) / (B * C))));
          cout << "count  " << count << endl;
          if(count == A) { // If the needed count is arrived, we store the number in ans and search for the first occurance of the number 
               ans = mid;
               end = mid - 1;
          }
          else if(count < A) { // If the count is less then we can ignore the left half
               start = mid + 1;
          }
          else {
               end = mid - 1; // If the count is more, we will move to the left, ignoring the right
          }
     }

     return ans;

}
int main()
{

     cout << AthMagic(33488383, 565, 29473) << endl;
     return 0;
}