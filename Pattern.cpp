#include<iostream>

using namespace std;

int main() {
     char alpha = 65;
          for(int i = 0; i <=6; i++) {
               for(int j=0; j <=i; j++) {
                    cout << alpha << " ";
               }
               cout << "\n";
               alpha = alpha + 1;
          }
}