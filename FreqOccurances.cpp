// Problem Description

//     You are given a character string A and an ASCII code integer B.

//     You have to find and return the indices of all the occurrences of character having ASCII code = B,
//                                                                                              in string A.

vector<int> find(string s, int b)
{
     vector<int> ans;
     ans.clear();

     for (int i = 0; i <= s.length(); i++)
     {
          if (s[i] == (char)b)
          {
               ans.push_back(i);
          }
     }
     return ans;
}

vector<int> Solution::solve(string A, int B)
{
     return find(A, B);
}
