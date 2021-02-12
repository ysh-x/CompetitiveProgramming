// String reverse

#include<iostream>
#include<vector>


using namespace std;


int main() {
     string A = " fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq ";
     vector <char> temp;
     vector <string> final;

     string Final;

     if(A.length() == 1)
          Final = A;

     for(int i = 0; i < A.length(); i++) {
          if(A.at(i) == ' ' || i == A.length()-1) {
               if(A.at(i)== ' ')
               {

               }
                    if(i == A.length() - 1) {
                         temp.push_back(A.at(i));
                         string a(temp.begin(), temp.end());
                         final.push_back(a);
                         temp.clear();
                    }

                    string a(temp.begin(), temp.end());
                    final.push_back(a);
                    temp.clear();       
          }

          else {
               temp.push_back(A.at(i));
          }
     }

     for(int i = final.size()-1; i >= 0; i--)  {

          if(i == (final.size() - 1)) {
               cout << i << endl;
               cout << "case 1" << endl;
               Final =  final.at(i);
          }

           else {
                cout << i << endl;
                cout << "Case 2" << endl;
                Final = Final + " " + final.at(i);
           }
     }
     Final.erase(Final.begin(),Final.begin()+1);
     cout << Final << endl;
          

}