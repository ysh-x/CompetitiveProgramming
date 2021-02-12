// Remove All Occurrences
// Problem Description

// You are given a character string A and an integer ASCII code B.

// You have to find and remove all the occurrences of the character having ASCII code equal to B and return the resultant string.

string find(string main, int ele)
{

     for (int i = 0; i <= main.length(); i++)
     {
          if (main[i] == (char)ele)
          {
               main.erase(main.begin() + i);
          }
     }
     return main;
}

string Solution::solve(string A, int B)
{

     return find(A, B);
}
