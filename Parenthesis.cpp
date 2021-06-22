const int SIZE = 400;
#include<iostream>
#include<bits/stdc++.h>
#include<stack>

using namespace std;

stack<char> check;
int top = 0;
bool parenCheck(string A) {
     for (int i = 0; i < A.size(); i++) {

         if(A[i] == '{' || A[i] =='[' || A[i] =='(') {
               check.push(A[i]);
               top++;
          }

          if(!check.empty()) {
               if(A[i] == '}' && check.top() == '{') {
                    check.pop();
               }
               else if (A[i] == ']' && check.top() == '[')
               {
                    check.pop();
               }
               else if (A[i] == ')' && check.top() == '(')
               {
                    check.pop();
               }
          }
     }

     if(check.empty() && top != 0) {
          return 1;
     }
     return 0;
}
int main() {

     //Stack Driver operations
     
     string A = "(()) {";
     if(parenCheck(A)) {
          cout << "Proper Clousure";
     }
     else {
          cout << "Improper Closure";
     }
     return 0;
}