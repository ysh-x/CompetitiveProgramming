#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int taskScheduling(vector <int> &a, vector <int> &b) {

     queue <int> ans;
     int cc = 0;
     int bI = 0;

     for(auto i : a) {
          ans.push(i);
     }

     while(!ans.empty()) {
          while(ans.front() != b[bI]) {
               cc++;
               int temp = ans.front();
               ans.push(temp);
               ans.pop();
          }
          cc++;
          ans.pop();
          bI++;
     }
     return cc;
}
int main()
{
     // vector<int> a = { 2, 3, 1, 5, 4 };
     // vector<int> b = { 1, 3, 5, 4, 2};

     vector<int> a = {1};
     vector<int> b = {1};

     cout << taskScheduling(a,b);
}