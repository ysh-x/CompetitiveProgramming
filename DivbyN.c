#include<stdio.h>
#include<time.h>

int main() {

     int numberOne; //Home of N int is (female)
     int numberTwo;
     int numberThree;
     int number; // To represent numbers from 2 - 10
     
     printf("N1: \n");
     scanf("%d", &numberOne);

     //Syntax = init; condition; increment / decrement ()
     //Initially it was O(n)
     //We reduced it to O(n/2)

     //O(N) > O(N/2)
     // We have achieved a better algorithm

     for(number = 2; number <= numberOne/2; number++) {
          printf("TEST CASE %d\t",number);
          if(numberOne % number == 0 ) {
               printf("%d IS divisble by %d\n",numberOne,number);
          }
          else {
               printf("%d is NOT divisble by %d\n", numberOne, number);
          }
     }
    
  }
