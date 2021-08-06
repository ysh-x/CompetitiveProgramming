#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseify(vector<char> &s, int first, int last)
{
     if (first == last)
          return;
     else if (first > last)
          return;

     swap(s[first], s[last]);
     return reverseify(s, first + 1, last - 1);
}


int main()
{
     vector<char> s = {'h','e','l','l','o'};
     reverseify(s,0,4);
     for(auto a: s) {
          cout << a;
     }
     cout << endl;
     return 0;
}