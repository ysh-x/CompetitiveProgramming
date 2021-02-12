int Solution::solve(const string A, const string B) {
    

      string newa;

     if (B.length() < A.length()) {
          return 0;
     }

     else {
         
     newa = newa + B.at(0);

     for (int i = 1; i < B.length(); i++)
     {

          if (B.at(i) != B.at(i - 1)) {
               newa = newa + B.at(i);
          }
        }
     }

    if(newa == A) {
        return 1;
    }
    
    return 0;
}
