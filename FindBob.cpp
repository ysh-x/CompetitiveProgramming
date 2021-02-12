// Count Occurrences
//     Problem Description

//         Find number of occurrences of bob in the string A consisting of lowercase english alphabets.

#include<iostream>

    using namespace std;

int Solution(string A)
{

     int count = 0;
     int pos;

     pos = A.find("bob");
     if (pos != string::npos)

          while (pos != string::npos)
          {
               count++;
               cout << pos;
          pos = A.find("bob", pos + 1);
     }

     return count;
}

int main() {
     string A = "bobob";
     cout << Solution(A);

}