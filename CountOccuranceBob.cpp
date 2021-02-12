// Count Occurrences
//     Problem Description

//         Find number of occurrences of bob in the string A consisting of lowercase english alphabets.

int Solution::solve(string A)
{
     string B = "bob";
     int count = 0;

     for (int i = 0; i <= (A.length() - B.length()); i++)
     {
          if (A.substr(i, B.length()) == B)
          {
               count++;
          }
     }
     return count;
}
