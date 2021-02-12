//Assume you have a dog in home, The dog goes and buys newspaper every weekdays, But sleeps every weekends
//Given a range of day from 1 - 100, You need to print dog schedule
//Assuming day one starts on Sunday

//Answer
//The dog takes a break every sat & Sun 
//if sun is the last day, sat is the 7th day (if day count is divisble by 6 or 7)

#include<stdio.h>

int main() {
     
     int endDay; //21
     int iteration;
     int weekiter; 
     int weeks;
     int days;
     int count;


     printf("Number of Days: ");
     scanf("%d",&endDay);

     weeks = endDay/7;
     days = endDay  - weeks*7;

     count = 1;

     printf("\n\nDogg's Schedule\n\n");
     printf("Total Duration: %d Weeks, %d Days\n",weeks,days);

     for(iteration = 1; iteration <= weeks; iteration++) { // Week Loop
          printf("Week - %d\n",iteration);

          for(weekiter= 1; weekiter <=7; weekiter++) {
                    if (weekiter % 6 == 0 || weekiter % 7 == 0) { //Days Loop
                         printf("Day %d\tWeek End:\tIt's Doggy's Day - off!\n",count);
                         count++;
                    }
                    else {
                         printf("Day %d\tWeekday:\tGo! Buy a news paper\n",count);
                         count++;
                    }
          }
          printf("\n");
     }
     //Leftover Days;

     for(iteration = 1; iteration <=days; iteration++) {
          printf("Week - %d\n", weeks+1);
          if (weekiter % 6 == 0 || weekiter % 7 == 0)
          { //Week Loop
               printf("Day %d\tWeek End:\tIt's Doggy's Day - off!\n",count);
               count++;
          }
          else
          {
               printf("Day %d\tWeekday:\tGo! Buy a news paper\n",count);
               count++;
          }
     }
}

