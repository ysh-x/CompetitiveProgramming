//Write a program to print the multiplication table of the number entered by the user, N.

#include<iostream>

    using namespace std;


void multiplicationTable(int number) {

     for (int i = 1; i <= 10; i++)
     {
          cout << number << " * " << i << " = " << number * i << endl;
     }
}


int main() {
     multiplicationTable(5);


}