// Mistyped Words
//     Problem Description

//         There is a big sentence but all the occurrences of the word hello(not substring) were mistyped as gelo and gelo was not in the original sentence.Correct the sentence.

#include<iostream>

    using namespace std;

string Solution(string A)
{

     int count = 0;
     int pos;

     pos = A.find("gelo");
     if (pos != string::npos)

               while (pos != string::npos)
               {
                    if (pos == 0 && A.at(pos + 4) == ' ')
                         A.replace(pos, 5, "hello ");

                    else if (pos == (A.length() - 4))
                    {
                         A.replace(pos, 5, "hello");
                    }

                    else if (pos != 0)
                    {
                         if (A.at(pos - 1) == ' ' && A.at(pos + 4) == ' ')
                         {
                              A.replace(pos, 5, "hello ");
                         }
                    }

                    pos = A.find("gelo", pos + 1);
               }
               return A;
}

int main() {
     string A = "gelo geloqkaidn pigeloerg qtjbgelo nudgelohm nileqnk gfgelomx geloqxsh gelo";
     cout << Solution(A);
}