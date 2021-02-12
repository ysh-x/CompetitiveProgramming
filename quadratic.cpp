#include<iostream>

using namespace std;


string quadratic (int A, int B, int C) {
     int d = B * B - 4 * A * C;

     if (A == 0)
     {
          return "Not quadratic";
     }
     else if (d > 0)
     {
          return "Real roots";
     }
     else if (d < 0)
     {
          return "Imaginary roots";
     }
     else if (d == 0)
     {
          return "Equal roots";
     }
     else
     {
          return "Invalid";
     }
}

int main () {

     string s =  quadratic(0,84,2);
     cout << s;
   
}