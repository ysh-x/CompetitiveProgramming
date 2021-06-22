// Shaggy has an array A consisting of N elements.We call a pair of distinct indices in that array as a special pair if elements at that index in the array are equal.

//     Shaggy wants you to find a special pair such that distance between that pair is minimum.Distance between two indices is defined as |
//     i - j |.If there is no special pair in the array then return -1.
#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>

           using namespace std;

int shaggy(vector <int> A) {

     if(A.size() == 1) {
          return 0;
     }
     int minimum = A.size() + 1;
     unordered_map <int, vector <int> > pairMap; // Create a hashmap of index elements and the pair indices

     for(int i = 0; i < A.size(); i++) {
          if(pairMap.find(A[i])== pairMap.end()) {
               vector<int> temp;
               temp.push_back(i);
               pairMap[A[i]] = temp; // Ininitally the second value is -1. If a pair not found, the next loop ignores it          }
          }
               else {
                    pairMap[A[i]].push_back(i);
          }
               
     }

     for(auto i = pairMap.begin(); i != pairMap.end(); i++) {
                pair < int, vector <int> > ans = *i; // Stores in iterator
                if(ans.second.size() > 1) { // if the element has a pair
                     for(int i = 1; i < ans.second.size(); i++) {
                           int temp = abs(ans.second[i] - ans.second[i-1]); // Check difference between cons - Numbers
                          minimum = min(temp,minimum); // Replace with minimum, if it is minimum
                    }
                }
     }    
               if(minimum != A.size() + 1) { // if there is a pair
                    return minimum;
               }
     return -1;
}


int main()
{
     vector <int> A = { 7, 1, 3, 4,5,4, 1, 7,4 };
     cout << shaggy(A);
     return 0;
}