// Same Format String
//     Given two strings A and B.Check if B contains same characters as that of given string A and in the same order.

#include<iostream>

    using namespace std;

int main() {

     string A = "HIRE";
     string B = "HIRE";


      string newa;

     if (B.length() < A.length()) {
          cout << false;
     }

     else {
     newa = newa + B.at(0);

     for (int i = 1; i < B.length(); i++)
     {

          if (B.at(i) != B.at(i - 1)) {
               newa = newa + B.at(i);
          }
     }

     }
     if (newa == A)
     {
          cout << true;
     }

     else {
          cout << false;
     }

     
}