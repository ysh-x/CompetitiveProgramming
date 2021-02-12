
// Problem Description

//     You are given two character strings A and B.

//     You have to find the first occurrence of string B in string A,
//     as a substring, and return the starting position of first occurrence.

//                     A substring is a contiguous sequence of characters within a string.For e.g "at" is a substring in "catalogue".

 int find(string main, string sub)
{

     int x = main.length();
     int y = sub.length();
     for(int i = 0; i <= (x - y); i++) {
        string temp = main.substr(i,sub.length());
        if(temp == sub) {
            return i+1;
        }
    }
    return -1;
}
int Solution::solve(string A, string B) {
    
    return find(A,B);
    
}
