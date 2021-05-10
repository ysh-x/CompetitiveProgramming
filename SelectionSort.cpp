#include<bits/stdc++.h>

using namespace std;

void selSortAsc(vector <int> &a) { // Call by reference
     int n = a.size(); // Finding size for the array
     int minIndex = -1; 
     int i;
     for(i = 0; i < n; i++) { // Traversing the array
          int min = INT_MAX;
          for(int j = i; j <n; j++) { // Traversing from i to n 
               if(a[j] < min) {

                    min = a.at(j); // Swapping min
                    minIndex = j; // fixing minIndex as j
               }
          }
          swap(a.at(i),a.at(minIndex)); // Swapping the positional element with the minimum element
     }
}

void selSortDesc(vector<int> &a)
{                      // Call by reference
     int n = a.size(); // Finding size for the array
     int maxIndex = -1;
     int i;
     for (i = 0; i < n; i++)
     { // Traversing the array
          int max = INT_MIN; // Assigning min value of array
          for (int j = i; j < n; j++)
          { // Traversing from i to n
               if (a[j] > max)
               {

                    max = a.at(j); // Swapping max 
                    maxIndex = j;  // fixing maxIndex as j
               }
          }
          swap(a.at(i), a.at(maxIndex)); // Swapping the positional element with the max element
     }
}

int main() {
     vector <int> a;
     a =  {5,4,3,1,2,12,66,1,9,74,54,22,11,55,33,58,111,101,99};
     selSortAsc(a);
     cout << "Array Elements in Ascending Sort "<< endl;
     for (auto i : a)
     {
          cout << i << " " ;
     }
     cout << endl;

     selSortDesc(a);
     cout << "Array Elements in Descending Sort " << endl;
     for (auto i : a)
     {
          cout << i << " ";
     }
     cout << endl;
}