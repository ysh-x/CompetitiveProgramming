#include<iostream>

using namespace std;


void rightTriangle(int n) {
     // Top Down pyramid
     for(int i = 1; i <= n; i++) {
          for (int j = 1; j <=i; j++) {
               cout <<" * ";
          }
          cout << endl;
     }
}
void reverseRightTriangle(int n)
{
     // Bottom up pyramid
     for (int i = n; i >= 1; i--)
     {
          for (int j = 1; j <= i; j++)
          {
               cout << " * ";
          }
          cout << endl;
     }
}
void triangle(int n) {
     for(int i = 1; i <=n; i++) {
          for(int j = 1; j <=n-i; j++ ) { // Bottom up for spaces
               cout << "   ";
          }
          for(int k = 1; k <=2 * i - 1; k++) { // 2i - 1 for odd
               cout << " * ";
          }
          cout << endl;
     }
}

int main() {
     rightTriangle(5);
      reverseRightTriangle(4);
     triangle(5);
}