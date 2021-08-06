/*
Row & Column Sums
Problem Description

You are given a matrix A, 
you have to return a vector containing sum of each row elements 
followed by each column elements of the matrix .

NOTE: In the resultant vector of integers there will be rows+columns 
elements where ans[i] is the sum of ith row elements and ans[rows+j] 
is the sum of jth column
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> RowColSum(vector <vector<int>> A) {
     int sum = 0;
     vector <int> ans;

     for(int i = 0; i < A.size(); i++) {
          for(int j = 0; j < A[i].size(); j++) {
                sum = sum + A[i][j];
          }
          ans.push_back(sum);
          sum = 0;
     }

     for (int i = 0; i < A[0].size(); i++) // Row 
     {
          for (int j = 0; j < A.size(); j++) // Column
          {
               sum = sum + A[j][i]; // If I swap I,J It will print column-wise
          }
          ans.push_back(sum);
          sum = 0;
     }

     return ans;
}
int main() {
     vector <vector <int> > A;
     vector<int> ans;

     A.push_back({1,2});
     A.push_back({4,5});
     A.push_back({8,9});

     ans = RowColSum(A);

     for(auto a : ans) {
          cout << a << endl;
     }
return 0;
}