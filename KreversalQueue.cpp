/*Reversing Elements Of Queue
    Problem Description

        Given an array of integers A and an integer B.We need to reverse the order of the first B elements of the array,
    leaving the other elements in the same relative order.

    NOTE : You are required to first insert elements into an auxiliary queue then perform Reversal of first B elements.*/
#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include <stack>

           using namespace std;

vector <int> KReverse(vector <int> &A, int B) {
     queue <int> ans;
     stack <int> temp;
     int i = 0;
     vector <int> answ;

     for(int i = 0; i < A.size(); i++) {
          ans.push(A.at(i));
     }

    
     i = 0;
     while (i < B) {
          //cout << "ELEMENTS REVERSED : " << ans.front() << endl;
          temp.push(ans.front());
          ans.pop();
          i++;
     }

     i = 0;
     while(!temp.empty()) {
          ans.push(temp.top());
          temp.pop();
          i++;
     }

     i = 0;
     while (i < A.size()- B) {
          int tempo = ans.front();
          //cout << "TEMPO : " << tempo << endl;
          ans.push(tempo);
          ans.pop();
          i++;
     }
     while(!ans.empty()) {
          answ.push_back(ans.front());
          ans.pop();
     }
     return answ;
}
int main()
{

     vector<int> A = {43, 35, 25, 5, 34, 5, 8, 7};
    
     int B = 6;

     vector <int> c = KReverse(A,B);

     for(auto a : c) {
          cout << a << " ";
     }
     cout << endl;
     return 0;
}