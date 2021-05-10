//In-built sort function

#include<bits/stdc++.h>

using namespace std;

int main() {
     vector <int> v;
     v = {1,4,5,6,2,5};
     sort(v.begin(),v.end());
     for(auto i : v) {
          cout << i << " ";
     }

}