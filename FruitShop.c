#include<stdio.h>

int main() {

     //Shop's Stock

     int appleStock = 4;
     int pearStock = 6;
     int orangeStock = 12;
     int bananaStock = 19;
     int customerCash;
     int choice; // Contain numbers from 1 - 4
     int quantity;
     int amount;
     int change;    

     printf("\nFruit Stock");
     printf("\n1.Apple\t\t%d\n2.Pear\t\t%d\n3.Orange\t%d\n4.Banana\t%d \nSelect From ( 1 - 4): \n",appleStock,pearStock,orangeStock,bananaStock);
     scanf("%d",&choice);

     printf("\nEnter the Quantity: ");
     scanf("%d",&quantity); //User Quantity 


     if(choice == 1) {
               if(appleStock - quantity >= 0) {
               printf("Stock is Available\n");
               appleStock = appleStock - quantity;
               
                }

                else   {
                     printf("Stock is Not Available\n");
                     exit(0);
                }
     }

     else if (choice == 2) {
               if (pearStock - quantity >= 0) {
                    printf("Stock is Available\n");
                    pearStock = pearStock - quantity;
               }

               else {
                    printf("Stock is Not Available\n");
                    exit(0);
               }
     }

     else if(choice == 3) {
               if(orangeStock - quantity >= 0) {
                     printf("Stock is Available\n");
                    orangeStock = orangeStock - quantity;
                }

                else   {
                 printf("Stock is Not Available\n");
                 exit(0);
                }
     }

     else if (choice == 4) {
               if (bananaStock - quantity >= 0)  {
                    printf("Stock is Available\n");
                    bananaStock = bananaStock - quantity;
               }

               else {
                    printf("Stock is Not Available\n");
                    exit(0);
               }
     }

     amount = quantity * 50;
     printf("\n\nAmount: %d",amount);

     printf("\nCash handed: ");
     scanf("%d",&customerCash);

     if(customerCash == amount) {
          printf("No change required to be given");
     }
     else if(customerCash > amount) {
          change = customerCash - amount;
          printf("Change about to be handed: %d Rs",change);
     }
     else if(customerCash < amount) {
          change = amount - customerCash;
          printf("Low cash! Customer needs to give : %d Rs", change);
     }

     printf("\n\tUpdated Fruit Stock");
     printf("  \n1.Apple\t\t%d \n2.Pear\t\t%d \n3.Orange\t%d \n4.Banana\t%d\n", appleStock, pearStock, orangeStock, bananaStock);
}