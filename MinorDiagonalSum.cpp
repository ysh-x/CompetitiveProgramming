// Minor Diagonal Sum
// Problem Description

// You are given a N X N integer matrix. You have to find the sum of all the minor diagonal elements of A.

// Minor diagonal of a M X M matrix A is a collection of elements A[i, j] such that i + j = M + 1 (where i, j are 1-based).



int Solution::solve(const vector<vector<int> > &A) {
    
     int sum = 0;
     for(int i = 0; i <A.size(); i++) {
        for(int j = 0; j < A.size(); j++) {
            if(((i+1) + (j+1)) == A.size() + 1) {
                sum = sum + A[i][j];
            }
        }
     }
     return sum;
}
