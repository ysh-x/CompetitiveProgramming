// Divisibility by 8 Given a number A in the form of string.Check if the number is divisible by 8 or not .

//                                                                                                       Return 1 if it is divisible by 8 else return 0. int
//                                                                                                       Solution::solve(string A)
{

     if (A.length() < 4)
     {
          stringstream s(A);

          long long int x = 0;
          s >> x;

          if (x % 8 == 0)
               return 1;
          else
               return 0;
     }

     else
     {

          string b = A.substr(A.length() - 3, A.length());

          stringstream s(b);

          long long int x = 0;
          s >> x;

          if (x % 8 == 0)
               return 1;
          else
               return 0;
     }
}
