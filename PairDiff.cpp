// Pairs with Given Difference
// Problem Description

// Given an one-dimensional integer array A of size N and an integer B.

// Count all distinct pairs with difference equal to B.

// Here a pair is defined as an integer pair (x, y), where x and y are both numbers in the array and their absolute difference is B.

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

int countPairDiff(vector<int> &A, int B) {

     int count = 0;
     unordered_map < int,pair <int,int > > s1;
     sort(A.begin(),A.end());
     int n = A.size();
     int p1 = 0;
     int p2 = 1;

     while(p1 < n && p2 < n ) {
          if(A[p1] - A[p2] == B && p1 != p2 ) {
               s1[p1] = make_pair(A[p1],A[p2]);
               p2++;
          }
          else if (A[p1] - A[p2] > B) {
               p1++;
          }
          else if(A[p1] - A[p2] < B) {
               p2++;
          }
     }

     return s1.size();


    



   
}
     
     int main()
{
     vector<int> A = {8, 12, 16, 4, 0, 20};
     cout << countPairDiff(A,4);
     return 0;
}