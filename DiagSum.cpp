// Main Diagonal Sum
//     Problem Description

//         You are given a N X N integer matrix.You have to find the sum of all the main diagonal elements of A.

//     Main diagonal of a matrix A is a collection of elements A[i, j] such that i = j.int Solution::solve(const vector<vector<int>> &A)

     int sum = 0;
     for(int i = 0; i <A.size(); i++) {
        for(int j = 0; j < A.size(); j++) {
            if(i == j) {
                sum = sum + A[i][j];
            }
        }
     }
     return sum;
}
