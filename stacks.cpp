const int SIZE = 400;
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int stackArr[SIZE];
int top = -1;

class Stack {
     public:
     void push(int x) {
          if(top == SIZE-1) {
               cout << "STATUS     : stack Full!" << endl;
          }
          else {
               top++;
               stackArr[top] = x;
               cout << "STATUS     : " << x <<" pushed onto the stack " << endl;
          }
     }

     void pop() {
          if(top == -1) {
               cout << "STATUS     : stack Empty!" << endl;
          }
          else {
               top--;
               cout  << "STATUS     : top element popped onto the stack " << endl;
          }
     }
     void display() {
          if (top == -1)
          {
               cout << "STATUS     : stack Empty!" << endl;
          }
          else
          {
               
               cout << "STATUS     : "<< stackArr[top] << " is the element in the stack " << endl;
          }
     }
     int size() {
          return top+1;
     }
};
int main() {

     //Stack Driver operations
     Stack s;
     s.push(14);
     s.display();
     s.push(45);
     s.pop();
     s.push(67);
     s.pop();
     s.display();
     cout << "SIZE : " << s.size();

     return 0;
}