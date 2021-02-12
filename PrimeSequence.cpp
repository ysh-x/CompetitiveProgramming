// You are given an integer N you need to print all the Prime Numbers between 1 and N.
// Prime numbers are numbers that have only 2 factors: 1 and themselves. For example, the first 5 prime numbers are 2, 3, 5, 7, and 11.
#include<iostream>

    using namespace std;




bool isPrime(int n)
{
     int flag = 0;

     for (int i = 2; i <= n / 2; i++)
     {
          if (n % i == 0)
               flag = 1;
     }
     return flag;
}

void primeSequence(int n)
{
     for (int i = 2; i <= n; i++)
     {
          if (isPrime(i) == 0)
          {
               cout << i << endl;
          }
     }
}

int main() {
     primeSequence(100);
}