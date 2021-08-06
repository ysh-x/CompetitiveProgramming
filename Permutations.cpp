//Print all the permutations ranging from start to end in a pair
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permutationPair(int start, int end) {
     for(int i = start; i < end; i++) {
          for(int j = i; j < end; j++) {
               cout <<  i << "\t" << j << endl;
          }
     }
}

int main()
{
     permutationPair(0,5);
     return 0;
}