//Number Palindrome
#include<iostream>

using namespace std;

int reverse (int n) {
    int rev = 0;
    int dig;
    
    while(n > 0) {
        dig = n % 10;
        rev = rev * 10 + dig;
        n = n / 10;
    }
    return rev;
        
}

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    int number, temp;
    
    cin >> number;
    if(reverse(number) == number) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}