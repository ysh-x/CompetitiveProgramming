// Insert that
//     Problem Description

//         Write a program to input N numbers array from user and insert an element Y in it at specified position X.

#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
    using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int length;
    int index;
    int ele;
    
    cin >> length;
    
    int arr[length + 2];
    int arr1[length + 2];
    
    for(int i = 0; i < length; i++) {
        cin >> ele;
        arr[i] = ele;
    }
    
    ele = 0;
    cin >> index >> ele;

    int j = 0;
    index--;
    
   for(int i = 0; i < index; i++) {
       arr1[j] = arr[i];
       j++;
   }
    arr1[index] = ele;
    j++;
    
    for(int i = index; i < length; i++) {
        arr1[j] = arr[i]; 
        j++;
    }
    for(int i = 0; i < length+1; i++) {
       cout << arr1[i] << " ";
    }
    return 0;
}