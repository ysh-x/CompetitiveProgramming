#include<iostream>

using namespace std;

void fizzbuzz (int n) {
     if(n % 3 == 0 && n % 5 == 0) {
          cout << " Fizz Buzz " << endl;
     }
     else if(n % 3 == 0) {
          cout << " Fizz " << endl;
     }
     else if(n % 5 == 0) {
          cout << " Buzz " << endl;
     }
     else {
          cout << n << endl;
     }
}
int main()
{
     fizzbuzz(1);
     fizzbuzz(2);
     fizzbuzz(3);
     fizzbuzz(4);
     fizzbuzz(5);
     fizzbuzz(6);
     fizzbuzz(7);
     fizzbuzz(8);
     fizzbuzz(9);
     fizzbuzz(10);
     fizzbuzz(11);
     fizzbuzz(12);
     fizzbuzz(13);
     fizzbuzz(14);
     fizzbuzz(15);
}