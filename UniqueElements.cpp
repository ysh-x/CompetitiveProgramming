// Uniquely Existing Elements
//     Problem Description

//         You are given an integer
//         T(Number of test cases)
//             .For each test case,
//     You are given an integer array A.

//     You have to find all the values that are uniquely present in the array i.e,
//     values having number of occurrences = 1.
#include<iostream>
#include<vector>
#include <bits/stdc++.h>

    using namespace std;

bool findOccurance (vector <int> a,int ele, int index) {
    int count = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == ele && i != index) {
            count++;
        }
    }
    if(count == 0) {
        return 1;
    }
    return 0;
}


int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    int test;
    vector <int> a;
    vector <int> ans;
    
    int ele;
    
    cin >> test;

    ans.clear();
    ans.push_back(0);
    
    for(int i = 0; i < test; i++) {
        
        a.clear();
        ans.clear();
        int length;
        cin >> length;

        for(int j = 0; j < length; j++) {
            cin >> ele;
            a.push_back(ele);
        }
        
        for(int k = 0; k < length; k++) {
            if(findOccurance(a,a[k],k)) {
                ans.push_back(a[k]);
            }   
        }
        
        sort(ans.begin(),ans.end());
        
        for(auto f : ans) {
            cout << f << " ";
        }
        cout << endl;
        
    }
    return 0;
#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

bool findOccurance (vector <int> a,int ele, int index) {
    int count = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == ele && i != index) {
            count++;
        }
    }
    if(count == 0) {
        return 1;
    }
    return 0;
}


int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    int test;
    vector <int> a;
    vector <int> ans;
    
    int ele;
    
    cin >> test;

    ans.clear();
    ans.push_back(0);
    
    for(int i = 0; i < test; i++) {
        
        a.clear();
        ans.clear();
        int length;
        cin >> length;

        for(int j = 0; j < length; j++) {
            cin >> ele;
            a.push_back(ele);
        }
        
        for(int k = 0; k < length; k++) {
            if(findOccurance(a,a[k],k)) {
                ans.push_back(a[k]);
            }   
        }
        
        sort(ans.begin(),ans.end());
        
        for(auto f : ans) {
            cout << f << " ";
        }
        cout << endl;
        
    }
    return 0;
}