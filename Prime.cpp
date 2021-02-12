#include <iostream>

using namespace std;


int isPrime(int n)
{
    for (int i = 2; i <= n/2; i++) 
     {
          if(n % i == 0) {
               cout << i << endl;
               return 1;
          }     
     }
     return 0;
}

void oddSequences(int n) {
     int i = 1;
     while(i <= n) {
          cout << i << endl;
          if(i%2!=0) {
               i+=2;
               continue;
          }
          i++;

     }
}
int main()
{
     // if(isPrime(18)== 0) {
     //      cout << "The number is a Prime number ";
     // }
     // else 
     //      cout << "The number is a Composite number";

     oddSequences(5);
}