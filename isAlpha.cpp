// Problem Description

//     You are given a function
//     isalpha() consisting of a character array A.

//     Return 1 if all the characters of the character array are alphabetical(a - z and A - Z),
//     else return 0.

    int Solution::solve(vector<char> & A)
{
     int count = 0;
     for (auto i : A)
     {
          if (!isalpha(i))
          {
               count++;
          }
     }

     if (count == 0)
     {
          return 1;
     }

     return 0;
}
