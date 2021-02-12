//Upper to Lower
string Solution::solve(string A) {
    
    string s;
    string up;
    
    for(int i = 0; i < A.size(); i++) {
        string a(1,A[i] - 32);
        up.append(a);
    }
    return up;
}

//LowerTo Upper
string Solution::solve(string A)
{
    string s;
    string up;

    for (int i = 0; i < A.size(); i++)
    {
        string a(1, A[i] + 32);
        up.append(a);
    }
    return up;
}
