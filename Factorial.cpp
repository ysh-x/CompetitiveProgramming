//Factorial of 4 = 4 * 3 * 2 * 1 = 24

#include<iostream>

    using namespace std;


void factorial(int size) {
        int factorial = 1;
    for(int i = 1; i<=size; i++) {
        factorial = factorial * i;
    }
    cout << factorial;
    
}


int main() {
     factorial(5);
}