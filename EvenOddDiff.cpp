// Even Odd Elements
//     Problem Description

//         You are given
//         T(number of test cases) integer arrays.For each array A,
//     you have to find the value of absolute difference between the counts of even and odd elements in the array.
#include<bits/stdc++.h>
    using namespace std;

int main(){
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
  
    int test;
    int count;
    int ele;
    int even = 0,odd = 0;
    vector <int> num;
    
    cin >> test;
    for(int i = 0; i < test; i++) {
        cin >> count;
        num.clear();
        even = 0; odd = 0;
        for(int j = 0; j < count; j++) {
            cin >> ele;
            num.push_back(ele);
        }
        
        for(int k = 0; k < count; k++) {
            if(num[k]%2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        cout << abs(even - odd) << endl;

    }
    return 0;
}