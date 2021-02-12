// Binary to Decimal
// Problem Description

// You are given a number A in binary format (Base = 2). You have to print the number in decimal format (Base = 10).

#include<iostream>
#include<math.h>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    long long int binary;
    cin >> binary;
    int digit;
    int ans = 0;
    
    int count = 0;
    
    long long int temp = binary;
    
    while(temp > 0) {
        digit = temp % 10;
        if(digit == 1) {
                ans += pow(2,count);
        }
        
        temp /= 10;
        count++;
    }
    cout << ans << endl;
    return 0;
}