//Are matrices equal
int Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    
    int count = 0;
    
    for(int i = 0; i <A.size(); i++) {
        for(int j = 0; j < A[0].size(); j++) {
             if(A[i][j] != B[i][j]) {
                 count++;
             }
        }
    }
    if(count == 0) {
        return 1;
    }
    return 0;
}
