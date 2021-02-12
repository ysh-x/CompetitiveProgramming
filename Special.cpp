#include<iostream>
#include<math.h>

using namespace std;


bool special (int n) {
    int x = 0;

    while(x < n) {
        for(int i = 0 ; i*i < n; i++) {
            if(pow(x,i) == n) {
                return true;
                break;
            }
        }
        x++;
    }
        return false;
}
int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n;
    cin >> n;
    
    if (special(n)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    
    return 0;
}