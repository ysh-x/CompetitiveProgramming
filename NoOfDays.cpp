// Number of days ? Problem Description

//                      Given a month number,
//     A and an year, B, return the number of days in that month(take leap years into account).

//                              Problem Constraints 1 <= A <= 12

//                              1 <= B <= 109

//                                        Input Format First argument is an integer A denoting the month number.

//                                        Second argument is an intege B denoting the year.

//                                        Output Format Return an integer denoting the count of days in the given month.

//                                        Example Input Input 1
//                :

//                A = 2 B = 2020 Input 2 :

//     A = 10 B = 1999

//                Example Output Output 1 :

//                29 Output 2 :

//                31

//                Example Explanation Explanation 1 :

//                2020 is a leap year and
//                month is February.So number of days are 29. Explanation 2 :

//     There are 31 days in month of october.
    
bool leapYear(int A)
{
     if ((A % 400 == 0) || (A % 100 != 0 && A % 4 == 0))
     {
          return 1;
     }
     else
     {
          return 0;
     }
}

int Solution::solve(int A, int B)
{

     if (leapYear(B) && A == 2)
     {
          return 29;
     }
     else if (!leapYear(B) && A == 2)
     {
          return 28;
     }
     else if (A == 1 || A == 3 || A == 5 || A == 7 || A == 8 || A == 10 || A == 12)
     {
          return 31;
     }
     else
     {
          return 30;
     }
}
