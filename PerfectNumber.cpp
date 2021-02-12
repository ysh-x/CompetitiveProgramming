// Is It Perfect?
// Problem Description

// You are given N positive integers.

// For each given integer A, you have to tell whether it is a perfect number or not.

// Perfect number is a positive integer which is equal to the sum of its proper positive divisors.


#include<iostream>

using namespace std;

bool isFactor(int n,int i) {
    
    if(n%i==0) {
        return true;
    }
    return false;
}
int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    int no;
    int number;
    int sum = 0;
    
    cin >> no;
    
    for(int i = 0; i < no; i++) {
        
        cin >> number;
        for(int j = 1; j < number; j++) {
            if(isFactor(number,j)) {
                sum = sum + j;
            }
        }
        
         if(sum == number) {
                cout << "YES" << endl;
                sum = 0;
            } 
            else {
                cout << "NO" << endl;
                sum = 0;
            }
    }
    return 0;
}