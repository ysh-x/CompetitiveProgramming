//Given 1 and 2, and 3 Find the nth number
//1,2,3,11,12,13,21,22,23...

#include<iostream>
#include<bits/stdc++.h>
#include<queue>

using namespace std;
vector <int> NthNumber(int A)
{
     int ATemp = A;
     string temp;
     queue<string> ans;
     queue <string> rtn;
     vector <int> rtnVec;


     string temp1 = "";
     string temp2 = "";

     ans.push("1");
     ans.push("2");
     ans.push("3");

     rtn.push("1");
     rtn.push("2");
     rtn.push("3");

     if (A % 3 != 0)
     {
          A = A + 2;
     }
     int i = 3;
     while (i <= A)
     {
          i++;
          temp = ans.front();
          temp1 = temp + "1";

          ans.push(temp1);
          rtn.push(temp1);
          if (i == ATemp)
          {
               break;
          }
          i++;
          temp2 = temp + "2";
          ans.push(temp2);
          rtn.push(temp2);

          if (i == ATemp)
          {
               break;
          }

          i++;
          temp2 = temp + "3";
          ans.push(temp2);
          rtn.push(temp2);
          if (i == ATemp)
          {
               break;
          }
          ans.pop();
     }
     


     int z = 0;
     while(z < ATemp){
          int temp = stoi(rtn.front());
          rtn.pop();
          rtnVec.push_back(temp);
          z++;
     }

     return rtnVec;

}
int main()
{
     vector <int> ans;
     ans = NthNumber(11);

     for(auto a: ans) {
          cout << a << " ";
     }
     cout << endl;
     return 0;
}