//Given 1 and 2, and 3 Find the nth number
//1,2,3,11,12,13,21,22,23...

#include<iostream>
#include<bits/stdc++.h>
#include<queue>

using namespace std;

string NthNumber(int A) {
     int ATemp = A;
     string temp;
     queue <string> ans;
     string temp1 = "";
     string temp2 = "";


     ans.push("1");
     ans.push("2");

     if(A == 1) { return "1";}
     if(A == 2) {return "2";}
     if(A == 3) {return "3";}
     if (A % 3 != 0)
     {
          A = A+2;
     }
     int i = 3;
     while(i <= A) {
          i++;
          temp = ans.front();
          temp1 = temp + "1";
          ans.push(temp1);
          if(i == ATemp) {
               return ans.back();
          }
          i++;
          temp2 = temp + "2";
          ans.push(temp2);
          if(i == ATemp) {
               return ans.back();
          }

          i++;
          temp2 = temp + "3";
          ans.push(temp2);
          if (i == ATemp)
          {
               return ans.back();
          }
          ans.pop();
     }
     return "NULL";

}
int main()
{
     for(int i = 0; i < 20; i++) {
     cout << i << " | " << NthNumber(i) << endl;
     }
     return 0;
}