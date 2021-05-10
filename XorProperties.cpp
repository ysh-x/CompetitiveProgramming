#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int duplicate(vector<int> a) {
     //All the element in array has a duplicate, Except one element. Find the element
     //x ^ x = 0, This can eradicate all the elements except 
     int xorDup = 0;
     for(auto i : a) {
          xorDup = (xorDup ^ i);
     }
     return xorDup;
}

int missingNumber(vector <int> a) {
     // In an array, all the elements are there except one missing element. find it
     // take xor on (index, element) which will cancel out
     // Let a = 1 2 3 5 Then 1 xor 1 2 xor 2 3 xor 3  will be remaining
     //since the loop only goes till n - 1 we take that outside 4 xor 5 xor 5 will leave us with 4 

     int xorDup = 0;
     for(int i = 0; i < a.size()-1; i++) {
          xorDup = (xorDup ^ i+1); // xor with index
          xorDup = (xorDup ^ a.at(i)); // xor with value
     }
     return xorDup ^ a.size();
}
int main() {
     vector <int> sample;
     vector<int> sample2;

     sample = {1,1,2,2,2,3,3,4,4}; // Duplicate exist in pair, so 2 is also a duplicate
     sample2 = {1,2,3,4,5,7,8,6,10}; // One element is missing (ie: 6)

     cout << "Duplicate is    : " << duplicate(sample);
     cout << "Missing Number is    : " << missingNumber(sample2);

     return 0;
}