#include<stdio.h>

int main() {
     int numberOne; //Home of N int is (female)
     int numberTwo;
     int numberThree;
     
     printf("N1: \n");
     scanf("%d", &numberOne);
   
   if(numberOne % 2 == 0) {
        printf("%d is divisible by 2\n",numberOne);
   } 
   if(numberOne % 3 == 0) {
        printf("%d is divisible by 3\n",numberOne);
   }
   if (numberOne % 4  == 0)
   {
        printf("%d is divisible by 4\n", numberOne);
   }
   if (numberOne % 5 == 0)
   {
        printf("%d is divisible by 5\n", numberOne);
   }
   if (numberOne % 6 == 0)
   {
        printf("%d is divisible by 6\n", numberOne);
   }
   if (numberOne % 7 == 0)
   {
        printf("%d is divisible by 7\n", numberOne);
   }
   if (numberOne % 8 == 0)
   {
        printf("%d is divisible by 8\n", numberOne);
   }
   if (numberOne % 9 == 0)
   {
        printf("%d is divisible by 9\n", numberOne);
   }
   if (numberOne % 10 == 0)
   {
        printf("%d is divisible by 10\n", numberOne);
   }


   // DRY concept -> Don't Repeat yourself 
}


