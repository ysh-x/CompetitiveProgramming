#include<iostream>
#include<bits/stdc++.h>
#include<strings.h>


using namespace std;

string toggle (string A) {
     for(int i = 0; i < A.size(); i++ ) {

          A[i] = (A[i] ^ 32); // The difference between upper and lower case is 32.
          // Taking xor with 32 shifts the bit from smaller to upper case     
     }
     return A;
}

char firstRepeating(string A) {
     //The function finds the first repeating charecter of the string
     int count[27] = {0};

     //building the count array
     //the key is the index and the value is stored in array
     //eg a has an ascii 97. we take a as base and subract it to attain other charecter
     //then 1 = a, 2 = b....
     //and the freqency is in the value of array

     for(int i = 0; i < A.size(); i++) {
          count[A[i] - 'a']++;

          if(count[A[i]- 'a'] == 2) {
               return A[i];
          }
     }
     return 'A';
}

char veryFirstRepeating(string A) {
     //The function finds the very first charecter that repeats in the string

     int count[27] = {0};
     //building the count array
     //the key is the index and the value is stored in array
     //eg a has an ascii 97. we take a as base and subract it to attain other charecter
     //then 1 = a, 2 = b....
     //and the freqency is in the value of array

     for(int i = 0; i < A.size(); i++) {
          count[A[i]-'a']++;
     }

     for(int i = 0; i < A.size(); i++) {
          if(count[A[i] - 'a'] >= 2) {
               return A[i];
          }
     }
     return 'A';
}
string sorting (string A) {
     //the key is the index and the value is stored in array
     //eg a has an ascii 97. we take a as base and subract it to attain other charecter
     //then 1 = a, 2 = b....
     //and the freqency is in the value of array

     string sorted = "";
     int count[27] = {0};
     for (int i = 0; i < A.size(); i++)
     {
          count[A[i] - 'a']++;
     }

     for(int i = 0; i <26; i++) {
          for(int j = 0; j < count[i]; j++) {
               sorted += (char)('a'+i);
          }
     }
     
     return sorted;
}

bool anagram (string A, string B) {
     //the key is the index and the value is stored in array
     //eg a has an ascii 97. we take a as base and subract it to attain other charecter
     //then 1 = a, 2 = b....
     //and the freqency is in the value of array

     int countOne[27] = {0};
     int countTwo[27] = {0};

     // Making count table for string A
     for (int i = 0; i < A.size(); i++)
     {
          countOne[A[i] - 'a']++;
     }
     // Making count table for string B
     for (int i = 0; i < B.size(); i++)
     {
          countTwo[B[i] - 'a']++;
     }

     for(int i = 0; i < (sizeof(countOne) / sizeof(countOne[0])); i++) {
          if(countOne[i] != countTwo[i]) {
               return false; // if the count isn't matching, return false
          }
     }
     return true; // else it is an anagram
}

int substrvowel(string A) {
     const int mod = 100003;
     long long int ans = 0;
     for(int i = 0; i < A.size(); i++) {
          if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u') {
               ans += (A.size() - i);
          }
     }
     return ans % mod;
}

bool palindrome(string A, int start, int end) {
     
     //Check if a substring is a palindrome

     while(start <= end) {
          if(A[start] == A[end]) {
               start++;
               end--;
          }
          else {
               return false;
          }
     }
     return true;
}

int longestPalindrome(string A) {

     int ans = 0;
     for(int i = 0; i < A.size(); i++) {
          for(int j = i; j < A.size(); j++) {
               if(palindrome(A,i,j)) {
                    ans = max(ans,j-i+1);
               }
          }
     }
     return ans;
}

int main()
{
     cout << "Toggled String                                :    " << toggle("YoGeShwaR") << endl;
     cout << "The first charecter to have a duplicate       :    " << firstRepeating("eagklkem") << endl;
     cout << "The first repeating charecter of the string   :    " << veryFirstRepeating("eagklkem") << endl;
     cout << "The sorted string                             :    " << sorting("abzbacd") << endl;
     cout << "Result of anagram                             :    " << anagram("dogi","god") << endl;
     cout << "Number of substr with vowel                   :    " << substrvowel("AzZGBauYuTknYjjWEEbLvqMQwnoSgXKBdHKEVpeoxYNNtBfrxQrPauttMzjKFayKwMeuChjzCocgAHfAmPCatOqarzLuabyTnxoheeocVshfERNssVPfRyPmwvOVGbzNAuvryYNWwIeyZLMlLbkcFFJRHjEIgIwOThRJJFpLbunVrbhAYsMtdsKslLAGElwrZjvZweIytMpPEYVmktQeNleNROcTjrNxXeHvOMMTMfqZHTUjetojHFzZwOekfAILYISANxeJFRNgeZDKoOTddXqxduPIjGXsRSSkgIqKMeSqlQwAKtdrkvHLgmKleNAPEztGMPmZzUuCImLAhzUnXmsVzFvJUTeIKleuRnMPNAPWJYAZLXgzTBPmkXVShbBSlIAJSeFgvRFvcoqfVFgHUefxUxuYFCfUxbxlOslUhYRFXKmMmqDIQhhfXyGqUwGMSYeLLpEsKAhvFUzavDCOUgtmmNMnsvfmCdPWuWIjuUfZCBTrWnaDopbqXcjzSqRMpQWIBNnMcOQZjDkjPkxsuwENYQyjgSHFJrgSLnwbEInBfdeIfBbVuZZbBrblJgKHOmLZACLQkSRxxQJeUMPIQutraxFtrRcSeqAejOTSqaFGglQOoWPkcNOnLIgfclWNtjGQRVMlqCPUnUlOLbHfkzUyNAmTsswWtZjIGUBrLmRmstHgVcRUgWdQTCEPRzjPVTMJRJocYHftwoRzOSyQexjmceRHdqFdgNuGmGTUdXQaNwKmvOUzZPzGCBVcbVLgMoQrESbpVGteVVntOwEWxXsZnSAoIfBSsWVhDFBuDTkcrnsPdmmSHymouxHlcgtjgKUAPznxsIRUjDFsrjadJjEtPaWTVBHpatqYeSgrpWJDOGfgIGQPcTIXVsCVyCfKMpcXWGkvwuRuTmvCbNMLeUkZrEpYZdlKAgFELfwCCbZCYBcXhfUrsIHfdwhYyxHKAMYMERwlyRtxObDoxBhjXmynYkmkYZrkzlCuvrhW") << endl;
     cout << "Result of palindrome                          :    " << palindrome("abacdcadf",2,6) << endl;
     cout << "Longest palindrome                            :    " << longestPalindrome("abanaman") << endl;

     return 0;
}