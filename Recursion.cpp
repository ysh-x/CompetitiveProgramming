#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int n) {
     if(n == 0) 
          return;
     cout << n << " ";
     print(n-1);
}

int sum(int n)
{
     if (n == 0)
          return 0;

     return n + sum(n - 1);
}
int main() {
     cout << " Series of 10: ";
     print(10);
     cout << endl;
     cout << " Sum of 10:     "<< sum(10);
return 0;
}