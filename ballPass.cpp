// There is a football event going on in your city. In this event, you are given A passes and players having ids between 1 and 106.

// Initially some player with a given id had the ball in his possession. You have to make a program to display the id of the player who possessed the ball after exactly A passes.

// There are two kinds of passes:

// 1) ID

// 2) 0

// For the first kind of pass, the player in possession of the ball passes the ball "forward" to player with id = ID.

// For the second kind of a pass, the player in possession of the ball passes the ball back to the player who had forwarded the ball to him.

// In the second kind of pass "0" just means Back Pass.

// Return the ID of the player who currently posseses the ball.

const int SIZE = 400;
#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

int ballPass(int A, int B, vector<int> C) {
     stack <int> ans; // Stack for saving the id 

     int i = 0;
     int count = 0;
     ans.push(B); // Have the curent player in the stack

    for(int i = 0; i < C.size(); i++) {
         if(C[i] == 0) { // If the id is zero, the present id is popped from the stack, since the ball is passes back
              ans.pop();
         }
         else {
              ans.push(C[i]); // else the it is passed to the next player
         }
         if(i == A-1) {
              return ans.top(); // if the count has occured, the top element is returned
         }
         cout  << i << " : " << ans.top() << endl;
    }
    return -1;
}
int main()
{
     vector <int> C = {2,1,1,1,1,1,100};
     int A = 4;
     int B = 5;
     cout << ballPass(A,B,C);
     //Stack Driver operations
     
}