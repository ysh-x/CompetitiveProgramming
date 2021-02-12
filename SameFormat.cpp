// Same Format String
// Given two strings A and B. Check if B contains same characters as that of given string A and in the same order.


string getString(char x) 
{
    string s(1, x); 
  
    return s; 
} 
int Solution::solve(const string A, const string B) {
    
    string a1,b1;
    
    if(A.length()==1 && B.length() == 1) 
            return 0;
            
     for (int i = 1; i < A.length(); i++) 
        if (A[i] != A[i - 1]) { 
            a1 += getString(A[i]); 
        } 
        
          for (int i = 1; i < B.length(); i++) 
        if (B[i] != B[i - 1]) { 
            b1 += getString(B[i]); 
        } 

         if (a1 == b1) 
        return 1; 
  
    return 0; 
} 

