//1.A Theatre Square Problem (CF)

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {
    
    double length,breadth,side;
    
    cin >> length;
    cin >> breadth;
    cin >> side;

    cout << (long long)ceil(length/side) * (long long)ceil(breadth/side);

}