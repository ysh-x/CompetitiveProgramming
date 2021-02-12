// StrPalindrome

#include<iostream>
#include<bits/stdc++.h>

    using namespace std;


bool palindrome(string A) {
    string B = A;
    reverse(A.begin(),A.end());
    if(A == B) {
        return 1;
    }
    return 0;
}
int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    int test;
    cin >> test;
    
    for(int i = 0; i < test; i++) {
        string temp;
        cin >> temp;
        cout << palindrome(temp) << endl;
    }
    return 0;
}