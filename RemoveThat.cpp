#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n, del;
    cin >>n;
    
    int temp[n-1];
    
    int arr[n];
     for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> del;
    del -=1;
    
     for(int i = 0; i < del; i++) {
            temp[i] = arr[i];
        }
    
    int j = del;
    for(int i = del+1; i < n; i++) {
            temp[j] = arr[i];
            j++;
    }    
    
    for(int i = 0; i < n-1; i++) {
            cout << temp[i] << " ";
    }
    return 0;
}
#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n, del;
    cin >>n;
    
    int temp[n-1];
    
    int arr[n];
     for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> del;
    del -=1;
    
     for(int i = 0; i < del; i++) {
            temp[i] = arr[i];
        }
    
    int j = del;
    for(int i = del+1; i < n; i++) {
            temp[j] = arr[i];
            j++;
    }    
    
    for(int i = 0; i < n-1; i++) {
            cout << temp[i] << " ";
    }
    return 0;
}