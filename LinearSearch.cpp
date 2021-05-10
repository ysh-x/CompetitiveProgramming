//Default Linear Search Algorithm

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int LSearch(vector<int> a,int k) {
     int size = a.size();
     
     for(int i = 0; i < a.size(); i++) {
          if(a.at(i) == k) {
               return i;
          }
     }
     return -1;
}

int main() {
     vector <int> sample;
     sample  = {1,2,3,4,5,664,333,56,2334,45};
     int k1 = 45;
     int k2 = 54;

     if(LSearch(sample,k1) != - 1) {
          cout << " Element found at " << LSearch(sample,k1);
     }
     else {
          cout << " Element not found";
     }
     cout << endl;

     if (LSearch(sample, k2) != -1)
     {
          cout << " Element found at " << LSearch(sample, k1);
     }
     else
     {
          cout << " Element not found";
     }
}