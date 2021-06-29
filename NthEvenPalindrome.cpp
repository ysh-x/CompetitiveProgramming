#include<iostream>
#include<bits/stdc++.h>
#include<queue>

using namespace std;

int NthEvenPanlindrome(int A) {

     //queue to save the sequence of strings
     //temp1 and temp2 store 11 and 22 sequence of string
     // temp saves the current element
     queue <string> ans;
     string temp;
     string temp1 = "";
     string temp2 = "";

     int i = 2; // i is 2 since we are pushing 11 and 22 outside
     
     ans.push("11");
     ans.push("22");

     int yogesh = A; // yogesh is the copy of A

     if (A % 2 != 0)
     {
          A++; // To make sure A is a even number
     }

     // corner cases
     if(A == 1) return 11; 
     if(A == 2) return 22;

     while(i <= A) {
          i++; // increment for the first time
          temp = ans.front(); // The front element
          temp1 = temp.substr(0, temp.size() / 2) + "11" + temp.substr(temp.size()/2,temp.size()/2);  // string is first half + '11' + last half
          ans.push(temp1); // pushing '11' element 

          if(i == yogesh) { // if it is odd occurance, return the element
               return stoi(ans.back());
          }
          i++;
          temp2 = temp.substr(0, temp.size() / 2) + "22" + temp.substr(temp.size() / 2, temp.size() / 2); // string is first half + '22' + last half

          ans.push(temp2);

          ans.pop(); // popping out the front element
          if(i == yogesh)
          { // if it is even occurance, return the element
               return stoi(ans.back());
          }
     }

   return 0;
}
int main()
{
     cout << NthEvenPanlindrome(9) << endl;
     return 0;
}