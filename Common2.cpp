#include<iostream>
#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;

vector <int> commonElements (vector <int> A, vector <int> B) {
     

     vector <int> ans;
     
     unordered_map <int,int> m1;

     for(int i = 0; i < A.size(); i++) {
          if(m1.find(A[i]) == m1.end()) {
               vector <int> temp;
               m1[A[i]] = 1;
          }
          else {
               m1[A[i]]++;
          }
     }

     for(int i = 0; i < B.size(); i++) {
          if(m1.find(B[i]) != m1.end()) {
               m1[B[i]]--;
               ans.push_back(B[i]);

               if(m1[B[i]] == 0) {
                    m1.erase(B[i]);
               }
          }
     }
     return ans;

}
int main()
{
     vector<int> a = {1, 2, 2, 1, 1, 2, 3};
     vector<int> b = {2, 3, 1, 2, 1, 2, 54};

     vector<int> ans = commonElements(a, b);

     cout << " The common elements are : ";
     for (auto q : ans)
     {
          cout << q << " ";
     }
     cout << endl;
     return 0;
     return 0;
}