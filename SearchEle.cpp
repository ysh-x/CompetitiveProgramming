#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool lsearch(vector<int> vec, int ele,int size) {
    for(int i = 0; i < size; i++) {
        if(ele == vec[i]) {
            return true;
        }
    }
    return false;
}
int main(){
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int test;
    int size;
    int y;
    vector <int> elements;
    
    cin >> test;
    
    for(int i = 0; i < test; i++) {
        elements.clear();
        cin >> size;
        
        for(int j = 0; j < size; j++) {
            int x;
            cin >> x;
            elements.push_back(x);
        }
        
        cin >> y;
            if(lsearch(elements,y,size)) {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }
    }
    return 0;
}