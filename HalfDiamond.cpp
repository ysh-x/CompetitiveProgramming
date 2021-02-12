//  *
//  **
//  ***
//  **
//  *
#include<iostream>

using namespace std;

int main()  {
    int size;
    cin >> size;
    
    for(int i = 0; i <size; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = size-2; i >=0; i--) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}