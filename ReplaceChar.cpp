// Replace Character
//     Problem Description

//         You are given a character string A and two integer ASCII codes B and C.

//     You have to find and replace all the occurrences of the character having ASCII code equal to B with character having ASCII code equal to C and return the resultant string.

string Solution::solve(string A, int B, int C)
{
     for (int i = 0; i < A.length(); i++)
     {
          if (A[i] == (char)B)
          {
               A[i] = (char)C;
          }
     }
     return A;
}
