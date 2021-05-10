int Solution::singleNumber(const vector<int> &A) {
    int x = 0; // Fix xor as 0 
    for(int i = 0; i < A.size(); i++) {
        x = (x ^ A[i]); // x ^ x = 0, using this property all the duplicates will cancel out leaving the non - duplicate answer stored in xor
    }
    return (x); // return xor value
}
