// tolower()
// Problem Description

// You are given a function to_lower() consisting of a character array A.

// Convert each charater of A into lowercase character if it exists. If the lowercase of a character does not exist, it remains unmodified.
// The uppercase letters from A to Z is converted to lowercase letters from a to z respectively.

// Return the lowercase version of the given character array.

vector<char> Solution::to_lower(vector<char> &A) {
    
    vector <char> ans;
    for(auto a : A) {
        if(isupper(a))
            ans.push_back(tolower(a));
        else
            ans.push_back(a);
        
    }
    return ans;
}
