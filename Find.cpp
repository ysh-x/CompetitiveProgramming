// Given two string A and B consisting of lowercase letters.

//     You need to find the last index of string A such that the character at that index in present in the string B.

//     If there is not any such index,
//     return -1.

//            NOTE : Consider string as 0 -
//            indexed.

#include<iostream>
#include<vector>

           using namespace std;


int findIndex(string A, char B) {

     int pos = -1;
     for(int i = 0; i < A.length(); i++) {
          if(A.at(i) == B) {
               pos = i;
          }
     }
     return pos;
}
int Solution(string A, string B) {
    
    int flag = -1;
    int pos;
    vector <int> posVect;

    for(int i = 0; i < B.length(); i++) {
         pos = findIndex(A,B[i]);
         posVect.push_back(pos);
    }

    sort(posVect.begin(),posVect.end());

   return posVect.at(posVect.size() - 1);
    
}


int main() {
     string A = "aaaaaaa";
     string B = "b";
     cout << Solution(A,B);
     return 0;
}