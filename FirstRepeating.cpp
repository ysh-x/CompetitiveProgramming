// First Repeating element
// Problem Description

// Given an integer array A of size N, find the first repeating element in it.

// We need to find the element that occurs more than once and whose index of first occurrence is smallest.

// If there is no repeating element, return -1.

#include<iostream>
#include<bits/stdc++.h>
#include <unordered_map>
#include <algorithm>


using namespace std;


int firstRepeat (vector <int> A) {
     unordered_map <int, vector <int> > m1; // Converting the array into a map with key as the element and index as value
     int minimum = A.size() + 1;

     for(int i = 0; i < A.size(); i++) {
          if(m1.find(A[i]) == m1.end()) {
               vector <int> temp;
               temp.push_back(i);
               m1[A[i]] = temp;
          }
          else {
               m1[A[i]].push_back(i);
          }
     }

     for(auto i = m1.begin(); i != m1.end(); i++) {
          pair <int, vector <int> > ans = *i;
          if(ans.second.size() > 1) { // There exist a duplicate if the size of index is grater than one
               minimum = min(minimum,ans.second[0]); // if the index is minimum, replace it in min 
          }
     }
     if(minimum != A.size() + 1) { // If there exist a duplicate
          return A[minimum]; // return value
     }

     return -1; // else return -1

}
int main()
{
     vector<int> A = { 10,
                       5,
                       4,
                       3,
                       6 };

     cout << firstRepeat(A);
     return 0;
}