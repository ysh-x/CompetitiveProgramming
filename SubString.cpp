#include<iostream>

using namespace std;

int main() {

string sub;
string A = "rishabh";
      int B = 1, C = 4;
     if (B == C)
          sub = A.at(0);
     else
          sub = A.substr(B, (C - 1));

cout << sub << endl;
}