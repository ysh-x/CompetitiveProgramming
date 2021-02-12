//2D matrix addition

vector<vector<int> > Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    int count = 0;
    int sum = 0;
    vector<vector <int>> ans;
    vector<int> temp;
    
    for(int i = 0; i <A.size(); i++) {
        temp.clear();
        for(int j = 0; j < A[0].size(); j++) {
             sum = A[i][j] + B[i][j];
             temp.push_back(sum);
        }
        ans.push_back(temp);
    }
    return ans;
}

