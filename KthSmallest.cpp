// kTh Smallest Element using selection sort
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int kthSmall(vector<int> &a, int no)
{                      // Call by reference
     int n = a.size(); // Finding size for the array
     int minIndex = -1;
     int i;
     int ans;
     for (i = 0; i < no; i++)
     { // Traversing the array
          int min = INT_MAX;
          for (int j = i; j < n; j++)
          { // Traversing from i to no (k)
               if (a[j] < min)
               {

                    min = a.at(j); // Swapping min
                    minIndex = j;  // fixing minIndex as j
               }
          }
          cout << "MIN @ " << i << " - " << min << endl; // Printing Minimum at all positions
          swap(a.at(i), a.at(minIndex)); // Swapping the positional element with the minimum element
     }
     return a.at(no - 1); // returning kth min element
}

int main()
{
     vector <int> A;
     A = {1, 2, 3, 4, 5, 6};
     int k = 3;
     int kth = kthSmall(A,k);
     cout << "Kth Smallest Element is : " << kth;
}