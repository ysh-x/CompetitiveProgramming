#include<iostream>
#include<bits/stdc++.h>
using namespace std;



bool specialNumber(int n) {
     if (n == 1)
     {
          cout << true << endl;
          return 1;
     }

     for (int i = 2; i < n; i++)
     {
          int j = 1;
          while (j < n)
          {
               if (pow(i, j) == n)
               {
                    return 1;
               }
               j++;
          }
     }
     return 0;
}
int main() {
     int n;
     cin >> n;
     if(specialNumber(n)) {
          cout << true << endl;
     }
     else {
          cout << false << endl;
     }  
}