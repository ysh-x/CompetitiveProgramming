// Given an array of integers A, find and return whether the given array contains a non-empty subarray with a sum equal to 0.

// If the given array contains a sub-array with sum zero return 1 else return 0.
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

int subArrayZero(vector <int> A) {
     unordered_set <long long int> pfs; // A set to store prefix sum
     long long int pf = 0; // prefix sum

     for(int i = 0; i < A.size(); i++ ) {
          pf += A[i];
          pfs.insert(pf);

          if(pf == 0) { // if pf is 0, then obviously the array has sum = 0
               return true;
          }
     }

     if(pfs.size() != A.size()) { // if duplicate pf exists, we can say that a part of an array does not contribute to the array. 
          return true; // Thus return true
     }

     return false; // else false
}

int main() {
     vector <int> A = {1,-1,11,2};
     cout << subArrayZero(A);
     return 0;
}