#include<stdio.h>


int main() {
     int i,j,count = 0;

     int n;
     int array[20];


     scanf("%d",&n);
     
     for(int i = 0; i <n; i++) {
          scanf("%d",&array[i]);
     }

     for(i =1; i < n; i++) {
          count = 0;

          for(j = i; j < n; j++) {
               if(array[j] > array[i]) {
                    count++;
               }
          }

          if(count == 0) 
          {
               printf("%d ",array[i]);
          }
     }
     return 0;
}