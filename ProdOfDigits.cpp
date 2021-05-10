// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int prod(int n ) {
    int sum = 1;
    int dig;
    while(n > 0) {
        dig = n %10;
        sum = sum * dig;
        n = n / 10;
    }
    return sum;
}
int prodOfDig(int n) {
    if(n <= 0) {
        return 1;
    }
     return n%10 * prodOfDig(n/10);
}
int main() {
    // Write C++ code here
    std::cout << "Product Using Iterative : " <<prod(5112) << endl;
    std::cout << "Product Using Recursion : " <<prodOfDig(123456) << endl;

    return 0;
}