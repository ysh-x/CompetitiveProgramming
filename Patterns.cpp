//print the pattern  for n = 5: 0-0-0-0-0
#include<iostream>

using namespace std;

void pattern(int n) {
    if(n == 1) {
        cout << "O";
        return;
    }
    if(n == 0) {
        return;
    }
    else
    cout << "O-";
    return pattern(n-1);
}

int main()
{
     // Write C++ code here
     pattern(5);
     return 0;
}