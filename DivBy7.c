#include<stdio.h>

int main() {
     int megha; //Home of N int is (female)
     int yogesh;

     scanf("%d", &megha);
     scanf("%d", &yogesh);
     //%d gets a value from user, You have to store in the required address, otherwise it will be lost

     printf("N is %d\n", megha);
     printf("N1 is %d\n", yogesh);

     if (megha % 7 == 0 & yogesh%7 == 0)
     {
          printf("N & N1 are divisible by 7\n");
     }
     else if(megha % 7 == 0 & yogesh % 7 != 0)
          printf("N is divisible by 7 & N1 is not divisible\n");

     else if (megha % 7 != 0 & yogesh % 7 == 0)
          printf("N is not divisible by 7 & N1 is divisible\n");
     else
          printf("N is not divisible by 7 & N1 is also not divisible\n");
}    
