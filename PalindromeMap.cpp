// Check Palindrome !Problem Description

//     Given a string A consisting of lowercase characters.

//     Check if characters of the given string can be rearranged to form a palindrome.

//     Return 1 if it is possible to rearrange the characters of the string A such that it becomes a palindrome else return 0.
#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>

    using namespace std;

int palindrome(string A) {

     unordered_map <char, int> strMap;
     int count = 0;

     for(int i = 0; i < A.size(); i++) {
          if(strMap.find(A[i]) != strMap.end()) {
               strMap[A[i]]++;
          }
          else {
               strMap[A[i]] = 1;
          }
     }

     for(auto it = strMap.begin(); it != strMap.end(); it++) {
          pair<char,int> ans = *it;
          if(ans.second % 2 != 0) {
               count++;
          }
     }

     if(count == 0 || count == 1) {
           return 1;
     }

     return 0;
}
int main()
{
     cout << palindrome("inttnikjmjbemrberk");
     return 0;
}