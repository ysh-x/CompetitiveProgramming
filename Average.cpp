#include<iostream>
#include<math.h>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int total = 0;

    int x;
    cin >>  x;    
    int i = 0;
    while(x>=0 && x<=100) {
        total = total + x;
        i++;
        cin >> x;
    }
    cout << floor(total/i);
    return 0;
}