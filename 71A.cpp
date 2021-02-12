//By ysh.x, contest : Codeforces Beta Round #65(Div.2), problem : (A)Way Too Long Words, Accepted, #, Copy
#include<iostream>
#include <string>

 using namespace std;

int main()
{

     string words[200];
     int no;

     cin >> no;
     for (int i = 0; i < no; i++)
     {
          cin >> words[i];
          int len = words[i].length();
          if (len > 0 && len > 10)
               cout << words[i].at(0) << words[i].length() - 2 << words[i].at(len - 1) << endl;
          else
               cout << words[i] << endl;
     }
}