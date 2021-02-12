toupper()
    //     Problem Description

    //     You are given a function to_upper() consisting of a character array A.

    //     Convert each charater of A into Uppercase character if it exists.If the Uppercase of a character does not exist,
    //     it remains unmodified.The lowercase letters from a to z is converted to uppercase letters from A to Z respectively.

    //     Return the uppercase version of the given character array.vector<char> Solution::to_upper(vector<char> &A)
    
    vector<char> Solution::to_upper(vector<char> &A)

     {
          vector<char> ans;
          for (auto a : A)
          {
               if (islower(a))
                    ans.push_back(toupper(a));
               else
                    ans.push_back(a);
          }
          return ans;
     }
