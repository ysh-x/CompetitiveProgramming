// Check consecutivity of an array
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> A;
    A = {11,13,12,15,14};
    
    sort(A.begin(),A.end()); // Sorting array elements
    int check = 0; // Having a check pointer
    
    for(int i = 0; i < A.size()-1; i++) { // Loops from 0th to n - 2th element
        if(A[i]+1 != A[i+1]) { // Checks if element + 1 equals next element
            cout << check << endl;
            check++; // Increments Check if it is not
        }
    }
    if(check == 0) { // If check is same as default, all elements are cons
        cout << "Consecutive" ;
    }
    else {
        cout << "Non Consecutive";
    }
    return 0;
}