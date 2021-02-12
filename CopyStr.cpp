// Copy The String
//     Problem Description

//         You will be given a constant string(A)
//             .

//     You have to return another copy of that input string after removing last character from it.string Solution::solve(const string A)
{
     string A1 = A;
     int size = A1.length() - 1;
     A1.erase(size, 1);
     return A1;
}
