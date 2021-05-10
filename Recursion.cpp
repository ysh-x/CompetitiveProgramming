#include <iostream>
using namespace std;

//recursion of sum of n natural numbers
int sum(int n)
{
     if (n == 0)
     {
          return 0;
     }
     else
          return (sum(n - 1) + n);
}
//recursion of factorial

int fact(int n)
{
     if (n == 0)
          return 1;
     else
          return ((fact(n - 1) * n));
}
//recursion of fibonacci
int fib(int n)
{
     if (n == 0)
          return 0;

     if (n == 1)
          return 1;

     else
          return (fib(n - 1) + fib(n - 2));
}

void print(int n)
{
     if (n == 0)
          return;

     print(n - 1);
     cout << n << endl;
}
int main()
{
     // Write C++ code here
     std::cout << fact(5) << "  " << sum(5) << "  " << fib(5) << std::endl;
     print(120);
     return 0;
}