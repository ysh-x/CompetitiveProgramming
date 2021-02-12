//Square root using newton's ralphson's method
#include<iostream>

using namespace std;


float sqrt(int number) {
     //Formula x1 = x0 - f(x0) / f'(x0)
     //where x0 changes
     float approx0 = number;
     float approx1 = number - ((approx0 * approx0 - number ) / (2 * approx0));
     float approx2 = approx1 - ((approx1 * approx1 - number) / (2 * approx1));
     float approx3 = approx2 - ((approx2 * approx2 - number) / (2 * approx2));
     float approx4 = approx3 - ((approx3 * approx3 - number) / (2 * approx3));
     float approx5 = approx4 - ((approx4 * approx4 - number) / (2 * approx4));
     float approx6 = approx5 - ((approx5 * approx5 - number) / (2 * approx5));

     return approx6;
     
     
}

int main() {

     int number;
     cin >> number;
     cout << sqrt(number);
}