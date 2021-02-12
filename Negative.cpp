//Write a program to print all negative numbers from input array A of size N where you have to take integer N and further N elements as input from user.

#include<iostream>

    using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}