// Trim From Ends
//     Problem Description

//         You are given a character string A.You to trim(remove) both leading and trailing asterisk characters('*') in the string and return the resultant string.

string Solution::solve(string A)
{
     if (A[0] == '*')
     {
          int i = 0;
          int count = 1;
          while (A[i + 1] == '*')
          {
               count++;
               i++;
          }
          A.erase(0, count);
     }
    
     if(A[A.length()-1] == '*') {
        int i = A.length()-1;
        int count = 1;
        while (A[i-1] == '*') {
            count++;
            i--;
        }
        int len = A.length() - count;
        A.erase(len,count);
    }
    return A;
}
