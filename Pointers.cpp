#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct bogie {
     int people;
     bogie* next;
};
int main()
{
     bogie* engine = new bogie;
     bogie* middle = new bogie;
     bogie *tail = new bogie;

     engine->people = 2;
     engine->next = middle;

     middle->people = 59;
     middle->next = tail;

     tail->people = 60;
     tail->next = NULL;

     bogie* TTR = engine;

     while(TTR != NULL) {
          cout << TTR->people << " ";
          TTR = TTR->next;
     }
     return 0;

}