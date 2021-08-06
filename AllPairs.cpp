/*
All Pairs
Problem Description

You are given an integer vector A.

You are required to generate all possible pairs and return it using a vector.

Element at position (2 * n - 1) and (2 * n) in resultant answer vector are the nth pair from the original array. The pairs should be lexicographically sorted on the basis of their index in original array.

For E.g: pair(i,j) will be before pair(k,l) if (i < k) or ((i==k) and (j < l)). Also, keep i <= j and k <= l while compairing.

NOTE: pair (i,j) and (j,i) are same.
*/
vector<int> Solution::solve(vector<int> &A)
{
     vector<int> ans;

     for (int i = 0; i < A.size(); i++)
     {
          for (int j = i; j < A.size(); j++)
          {
               if (i != j)
               {
                    ans.push_back(A[i]);
                    ans.push_back(A[j]);
               }
          }
     }
     return ans;
}
