//Toggle between Upper and lower
string Solution::solve(string A) {
    string toggle;
    for(int i = 0; i < A.size(); i++) {
        if(A[i]>='a' && A[i]<='z'){
            string fin(1,A[i] - 32);
            toggle.append(fin);
        }
        else {
            string fin(1,A[i] + 32);
            toggle.append(fin);

        }
    }
    return toggle;
}
