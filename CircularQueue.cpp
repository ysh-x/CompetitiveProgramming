//Circular Queue Implementation

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class CQueue {

     private:

     int queue[4];
     int f = 0;
     int r = -1;
     int s = 0;
     int n = sizeof(queue) / sizeof(queue[0]);

     public:

     void push(int x) {
          if(s >= n) {
               cout << "Queue Full" << endl;
          }
          else
          {
               s++;
               r++;
               r = r % n;
               queue[r] = x;
               cout << "Element Pushed" << endl;
          }
     }

     void pop() {
          if(s == 0) {
               cout << " Queue Empty" << endl;
          }
          else {
               f++;
               s--;
               f = f % n;
               cout << "Element Popped" << endl;
          }
     }

     int size() {
          return s;
     }

     int front() {
          if (s == 0)
          {
               cout << " Queue Empty" << endl;
               return 0;
          }
          else
          {
               return queue[f % n];
          }
     }

     int rear()
     {
          if (s == 0)
          {
               cout << " Queue Empty" << endl;
               return 0;
          }
          else
          {
               return queue[r % n];
          }
     }

};
int main()
{
     CQueue Q;
     Q.push(1);
     Q.push(2);
     Q.push(3);
     Q.push(4);
     Q.pop();
     Q.push(5);
  
     cout << Q.front() << endl;
     cout << Q.rear() << endl;
     Q.pop();
     cout << Q.front() << endl;
     cout << Q.rear() << endl;
     Q.push(45);
     cout << Q.front() << endl;
     cout << Q.rear() << endl;
     Q.push(46);
}