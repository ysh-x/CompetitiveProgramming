//Implementation of Binary Search

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int BSearch(vector<int> a, int k) {
     //Init of Search Space
     int end = a.size(); 
     int start  = 0;
     int index = -1;

    cout << endl <<  "ANALYSIS" << endl;
     while(start <= end) { // Continues until start crosses end
          int mid = (end + start) / 2; // Mid must be declared inside the while since it's value keeps changing
          cout <<"START\t" <<start << " END\t" << end << " MID\t" << mid << " A[MID]\t" << a.at(mid) << endl;
          if(a.at(mid) == k) {
               return mid; // returns mid if the element is found
          }
          else if (a.at(mid) < k) {
               start = mid + 1; // ignores the left part since we know the k value is greater than the left half
          }
          else if(a.at(mid) > k){ // ignored the right part since we know that the k value is lesser than the right half
               end = mid - 1;
          }
     }
     return -1;
}

int main() {
     vector<int> sample;
     sample = {1, 2, 3, 4, 5, 45,54,67,89,8887};
     int k1 = 1;
     int k2 = 8875;

     int r1 = BSearch(sample, k1);
     int r2 = BSearch(sample, k2);

     if (r1 != -1) {
          cout << " Element found at index : " << r1 << endl;
     }
     else
     {
          cout << " Element not found" << endl;
          }
     cout << endl;

     if (r2!= -1)
     {
          cout << " Element found at index : " << r2 << endl;
     }
     else
     {
          cout << " Element not found" << endl;
     }
}