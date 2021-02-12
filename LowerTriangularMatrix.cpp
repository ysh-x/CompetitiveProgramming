// Lower Triangular Matrix
//         Problem Description

//             You are given a N X N integer matrix A.You have to tell whether it is a lower triangular matrix or
//     not .

//         A square matrix is called lower triangular if all the entries above the main diagonal are zero.For any matrix P if elements P[i, j] = 0(where j > i(1 - based)).
        
        int Solution::solve(const vector<vector<int>> &A)
{
     int count = 0;
     for (int i = 0; i < A.size(); i++)
     {
          for (int j = 0; j < A[i].size(); j++)
          {
               if (i < j)
               {
                    if (A[i][j] != 0)
                    {
                         count++;
                    }
               }
          }
     }
     if (count == 0)
     {
          return 1;
     }
     return 0;
}
