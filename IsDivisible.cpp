#include<iostream>


using namespace std;

long int sumOfNumbers (long long int number) {
     int dig;
     int sum = 0;
     while(number > 0) {
          dig = number % 10;
          sum = sum + dig;
          number = number / 10;
     }
     return sum;

}

bool divisibleBy2 (long long int number) {
     int last = number % 10;
     if(last % 2 == 0) 
          return 1;
     else
     {
          return 0;
     }
     
}
bool divisibleBy5(long long int number)
{
     int last = number % 10;
     if (last == 0 || last == 5)
          return 1;
     else
     {
          return 0;
     }
}


bool divisibleBy3(long long int number ) {
     long int sum = sumOfNumbers(number);
     if(sum % 3 == 0) {
          return 1;
     }
     else
     {
          return 0;
     }
     
}
bool divisibleBy9(long long int number)
{
     long int sum = sumOfNumbers(number);
     if (sum % 9 == 0)
     {
          return 1;
     }
     else
     {
          return 0;
     }
}
int main() {

     cout << "Divisiblity Check" << endl;

     long long int number;

     cout << "Number: " ;
     cin >> number;

     cout << " RESULTS: " << endl;
     if (divisibleBy2(number))
     {
          cout << number << " is Divisible by 2" << endl;
     }
     else
     {

          cout << number << " is not Divisible by 2" << endl;
     }

     if(divisibleBy3(number)) {
          cout <<  number << " is Divisible by 3" << endl;
     }
     else
     {
       
          cout << number << " is not Divisible by 3" << endl;
     }

     if(divisibleBy3(number) && divisibleBy2(number))
     {
          cout << number << " is Divisible by 6" << endl;
     }
     else
     {
          cout << number << " is not Divisible by 6" << endl;
     }
     
     if (divisibleBy5(number))
     {
          cout << number << " is Divisible by 5" << endl;
     }
     else
     {

          cout << number << " is not Divisible by 5" << endl;
     }

     if (divisibleBy9(number))
     {
          cout << number << " is Divisible by 9" << endl;
     }
     else
     {

          cout << number << " is not Divisible by 9" << endl;
     }
     if (divisibleBy5(number) && divisibleBy2(number))
     {
          cout << number << " is Divisible by 10" << endl;
     }
     else
     {
          cout << number << " is not Divisible by 10" << endl;
     }
}