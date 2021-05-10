#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int firstOccurance(vector<int> a,int k) {
     int start = 0;
     int index = -1;
     int end = a.size()-1;

     while(start <= end)
     { // Continues until start crosses end
          int mid = (start + end) / 2; // Mid must be declared inside the while since it's value keeps changing
          cout << "MID: " << mid << "\t\n";
          if(a.at(mid) == k) {
               end = mid - 1; // Ignores the right as we need first occurance.
               index =  mid; // Index value is updated as mid and continues to search for a better start position
          }
          else if(a.at(mid) < k) {
               start = mid + 1; // ignores the left part since we know the k value is greater than the left half
          }
          else if(a.at(mid) > k) { // ignores the left part since we know the k value is greater than the left half
                       end = mid - 1;
          }
     }
     return index; // By default index is -1. returns it if nothing is found.
}

int lastOccurance(vector<int> a, int k)
{
     int start = 0;
     int index = -1;
     int end = a.size()-1;

     while (start <= end)
     {                                 // Continues until start crosses end
          int mid = (start + end) / 2; // Mid must be declared inside the while since it's value keeps changing

          if (a.at(mid) == k) {
               index = mid;   // Index value is updated as mid and continues to search for a better start position
               start = mid + 1; // Ignores the left as we need last occurance.
          }
          else if (a.at(mid) < k)
          {
               start = mid + 1; // ignores the left part since we know the k value is greater than the left half
          }
          else if (a.at(mid) > k)
          { // ignores the left part since we know the k value is greater than the left half
               end = mid - 1;
          }
     }
     return index; // By default index is -1. returns it if nothing is found.
}

int main()
{
     vector<int> sample,sample1;
     sample = {1, 2, 3, 4, 5,8,8,8,8,67, 89, 8887};
     sample1 = {1};
      int k1 = 1;

     cout << firstOccurance(sample,k1) << endl;
     cout << lastOccurance(sample, k1) << endl;

     cout << firstOccurance(sample1, k1) << endl;
     cout << lastOccurance(sample1, k1) << endl;
     return 0;
}