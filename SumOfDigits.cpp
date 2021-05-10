// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int sum(int n)
{
     int sum = 0;
     int dig;
     while (n > 0)
     {
          dig = n % 10;
          sum = sum + dig;
          n = n / 10;
     }
     return sum;
}
// Using Recursion

int sumOfDig(int n)
{
     if (n <= 0)
     {
          return 0;
     }
     return n % 10 + sumOfDig(n / 10);
}
int main()
{
     // Write C++ code here
     //std::cout << sum(511);
     std::cout << sumOfDig(12345);

     return 0;
}