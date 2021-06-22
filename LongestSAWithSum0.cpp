#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<algorithm>

using namespace std;

pair <int,int>  longestSubArray(vector <int> &A) {
     unordered_map <int, int> m1;
     int start = A.size() - 1;
     int end = 0;

     int pf = 0;
     int maximum = -1;

     m1[0] = {-1};

     for(int i = 0; i < A.size(); i++ ) {
          pf += A[i];

          if(m1.find(pf) != m1.end()) {
               if(start > i) {
                    
               }
          }
     }

}

int main() {

     vector <int> final;
     vector<int> A = {0, 22, 7, 21, -11, -6, -7, -16, -2};
     pair <int,int> ans = longestSubArray(A);

     for(int i = ans.first; i <= ans.second; i++) {
          final.push_back(A[i]);
     }

     cout << "The elements are : ";
     for(auto a: A) {
          cout << a << " ";
     }
     return 0;
}