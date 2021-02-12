#include <iostream>

using namespace std;

void stringPyramid (string name) {
     
     for(int i = 0; i <= name.size() -1 ; i++) {
          for(int j = 0; j<=i; j++) {
               cout << (name.at(j)) << " ";
          }
          cout << endl;
     }
}
void stringReversePyramid(string name) {
     for (int i = name.size() -1; i >=0; i--)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << (name.at(j)) << " ";
          }
          cout << endl;
     }
}

void diamond(string name) {

     for (int i = 0; i <= name.size() - 1; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << (name.at(j)) << " ";
          }
          cout << endl;
     }
     for (int i = name.size() - 2; i >= 0; i--)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << (name.at(j)) << " ";
          }
          cout << endl;
     }
}

int main() {

     string name = "YOGESHWAR GANESH";
//     stringPyramid(name);
//     cout << endl;
//      stringReversePyramid(name);
//      cout << endl;
     diamond(name);
}