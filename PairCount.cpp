
// Pair Count
// Problem Description

// You are given an integer array A and an integer B.

// You are required to return the count of pairs having sum equal to B.

NOTE: pair (i,j) and (j,i) are same.
int Solution::solve(vector<int> &A, int B) {
    int count = 0;
    for(int i = 0; i < A.size(); i++) {
        for(int j = 0; j < A.size(); j++) {
            if(A[i] + A[j] == B && i != j) {
                count++;
            }
        }
    }
    return count / 2;
}
