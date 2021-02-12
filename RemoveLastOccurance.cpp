// Remove Last Occurrence
//     Problem Description

//         You are given a character string A and an integer ASCII code B.

//     You have to find and remove the last occurrence(rightmost) of the character having ASCII code equal to B and return the resultant string.

    string Solution::solve(string A, int B)
{
     for (int i = A.length(); i >= 0; i--)
     {
          if (A[i] == (char)B)
          {
               A.erase(i, 1);
               break;
          }
     }
     return A;
}
