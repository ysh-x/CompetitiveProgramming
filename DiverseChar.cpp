// Diverse Characters
// Problem Description

// You are given a character string A having length N.

// The string consists of 2 types of characters:

// Alphabets : ['a'-'z', 'A'-'Z']
// Digits: ['0'-'9']
// You have to tell the count of characters of the maximum occuring character type.


int Solution::solve(const string A) {
    int countAlpha = 0;
    int countDigit = 0;
    
    for(int i = 0; i <= A.size(); i++) {
        if(isalpha(A[i])) {
            countAlpha++;
        }
        else if(isdigit(A[i])) {
            countDigit++;
        }
    }
    if(countAlpha > countDigit) {
        return countAlpha;
    }
    else {
        return countDigit;
    }
}

