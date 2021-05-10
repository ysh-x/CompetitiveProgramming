//Given an integer array A of N integers, find the pair of integers in the array which have minimum XOR value.Report the minimum XOR value.
BF : int Solution::findMinXor(vector<int> &A)
{
     int min = (A[0] ^ A[1]);
     for (int i = 0; i < A.size(); i++)
     {
          for (int j = 0; j < A.size(); j++)
          {
               if (i != j && (A[i] ^ A[j]) < min)
               {
                    min = (A[i] ^ A[j]);
               }
          }
     }
     return min;
}

GOO : int Solution::findMinXor(vector<int> &A)
{
     sort(A.begin(), A.end()); //if you sort the numbers and take the XOR of the consecutive numbers and take the minimum, it will work
     int min = (A[0] ^ A[1]);
     for (int i = 0; i < A.size() - 1; i++)
     {
          if ((A[i] ^ A[i + 1]) < min)
          {
               min = A[i] ^ A[i + 1];
          }
     }
     return min;
}
