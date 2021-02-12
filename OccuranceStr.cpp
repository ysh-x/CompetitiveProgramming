int find(string s,int b) {
    for(int i = 0; i <= s.length(); i++) {
        if(s[i] == (char)b) {
            return i;
           }
        }
        return -1;
}
int Solution::solve(const string A, const int B) {
    return find(A,B);
}
