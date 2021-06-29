//Queue Implementation

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class queues {

     private:
     int queue[100];
     int r = -1;
     int f = 0;

     public:
     void push(int x) {
          if(r >= 99) {
               cout << "Queue Full" << endl;
          }
          else {
               r++;
               queue[r] = x;
               cout << "Element Pushed" << endl;
          }
     }

     void pop() {
          if(f > r) {
               cout << "Queue Empty" << endl;
          }
          else {
               f++;
               cout << "Element Popped" << endl;
          }
     }
     int size() {
          return r - f + 1;
     }

     int front() {
          if(f > r) {
               cout << "Queue Empty" << endl;
               return 0;
          }
          else {
          return queue[f];
          }
     }

     int rear() {
          if (f > r)
          {
               cout << "Queue Empty" << endl;
               return 0;
          }
          else
          {
               return queue[r];
          }
     }
};

int main()
{
     queues Q;
     Q.push(11);
     Q.push(12);
     Q.push(13);
     cout << Q.rear() << endl;
     cout << Q.front() << endl;
     Q.pop();
     cout << Q.rear() << endl;
     cout << Q.front() << endl;

     return 0;
}