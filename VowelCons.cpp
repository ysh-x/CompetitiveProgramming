// Vowels vs Consonants
//     Problem Description

//         Write a program to input T strings(S) from user and print count of vowels and consonants in it.
#include<iostream>

    using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int count,i,j;
    int vow,cons;
    string check;
    
    cin >> count;
    
    for(int j = 0; j < count; j++) {
        cin >> check;
        
        i = 0;
        vow = 0;
        cons = 0;
        
        while(check[i]!='\0') {
            
            if(check[i] == 'a' ||check[i] == 'e'||check[i] == 'i'||check[i] == 'o'||check[i] == 'u') {
                vow++;
            }
            
            else {
                cons++;
            }
            i++;
        }
           cout << vow << " " << cons << endl;
    }

    return 0;
}