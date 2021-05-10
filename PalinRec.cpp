#include <iostream>

using namespace std;

bool palindrome(string &s, int st,int end) {
    
    //This base confn checks if the start and end is not crossing each other (True base cond)
    if(st >= end)
    return true;
    
    //This is to check equality of charecters (False base cond)
    if(s[st] != s[end])
    return false;
    
    else { // Keep reccuring until st becomes > end or it equality fails
    return palindrome(s,st+1,end-1);
    }
}
int main() {

     string A = "naman";
    cout <<  palindrome(A,0,A.length()-1);
}
