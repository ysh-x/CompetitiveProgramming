#include<iostream>

using namespace std;

int main()
 {

      char string[30];

      cin >> string;

     cout << "Given String: " << string << endl;

     cout <<"Modified String: ";
     for(int i = 0; i <strlen(string); i++) {


          if ((string[i] >= 65 && string[i] <= 90 )|| (string[i] >= 97 && string[i] <= 122)) {
           cout << string[i];
          }

          else {
               cout << " ";
          }
         
     }
     cout << endl;
 }