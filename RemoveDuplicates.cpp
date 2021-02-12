// Remove Duplicate Characters
// Problem Description

// You are given a character string A.

// You have to remove all the repeated or duplicate characters from the string and return thr resultant string.

string Solution::solve(string A)
{

     for (int i = 0; i < A.length(); i++)
     {
          for (int j = 0; j <= A.length(); j++)
          {
               if (A[i] == A[j] && i < j)
               {
                    A.erase(A.begin() + j);
                    j--;
               }
          }
     }
     return A;
}
