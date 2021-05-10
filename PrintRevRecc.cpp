// Print reverse string
// Problem Description

// Write a recursive function that, given a string S, prints the characters of S in reverse order.
#include<iostream>

using namespace std;

void printRev(string str, int len) {
    if(len == -1)
        return;
    else
        cout << str[len];
        printRev(str,len-1);
}  

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    string original;
    cin >>original;
    int len = original.length();
    printRev(original,len-1);
    
    return 0;
}