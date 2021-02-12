//Code Forces 4A watermelon

#include<iostream>

using namespace std;

int main() {
    
    int parts;
    
    cin >> parts;
    
    if(parts > 2 && parts % 2 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}