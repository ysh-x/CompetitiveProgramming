// Bank Account
//         Problem Description

//             You are given a Bank account having N amount and you are asked to perfrom ADD(credit) and
//     SUBTRACT(debit) operations.

//     After each operation print the amount left in the Bank account.If the debit amount is greater than current balance print "Insufficient Funds"(without quotes) and
//     the operation is skipped.

#include <iostream>

    using namespace std;

void credit(long long int &balance, long long int amount)
{
     balance = balance + amount;
     cout << balance << endl;
}

void debit(long long int &balance, long long int amount)
{
     if (amount > balance)
     {
          cout << "Insufficient Funds" << endl;
     }
     else
     {
          balance = balance - amount;
          cout << balance << endl;
     }
}
int main()
{
     // YOUR CODE GOES HERE
     // Please take input and print output to standard input/output (stdin/stdout)
     // E.g. 'cin' for input & 'cout' for output

     long long int balance;
     long long int transactions;
     long long int x;
     long long int amt;

     cin >> balance;
     cin >> transactions;

     for (int i = 0; i < transactions; i++)
     {
          cin >> x;
          cin >> amt;

          if (x == 1)
          {
               credit(balance, amt);
          }
          else if (x == 2)
          {
               debit(balance, amt);
          }
     }
     return 0;
}