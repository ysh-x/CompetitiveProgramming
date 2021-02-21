// Teams
// Given a string A, A is made up of 0's and 1's. Break A into substrings such that , all broken substrings have equal number of 1's and 0's.

// Find and return maximum number of substrings in which A can be broken.

int Solution::solve(string A) {
    int noOfZeros = 0;
    int noOfOnes = 0;
    int subStr = 0;
    
    for(int i = 0; i <= A.length(); i++) {
        if(A[i] == '0') {
            noOfZeros++;
        }
        else if(A[i] == '1') {
            noOfOnes++;
        }
        if(noOfZeros == noOfOnes && noOfZeros != 0) {
            subStr++;
            noOfZeros = 0;
            noOfOnes = 0;
        }
    }
    return subStr;
}
