// Integer in Words
//     Problem Description

//         You are given an integer A.You have to print A in word form.

//     Following are the words which should be replaced in place of a digit :

//     For digit = 0,
//         word = zero
//             For digit = 1,
//         word = one
//             For digit = 2,
//         word = two
//             For digit = 3,
//         word = three
//             For digit = 4,
//         word = four
//             For digit = 5,
//         word = five
//             For digit = 6,
//         word = six
//             For digit = 7,
//         word = seven
//             For digit = 8,
//         word = eight
//             For digit = 9,
//         word = nine
//                    For eg.,
//         If A = 2634, you should print two six three four.

//                      NOTE : Words should be seperated by a single space.Also,
//         the output is case sensitive.

#include<iostream>
#include <vector>

        using namespace std;


int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    string words[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    int number;
    int dig;
    cin >> number;
    vector <int> seq;
    seq.clear();
    
    while(number > 0) {
        dig = number % 10; 
        seq.push_back(dig);
        number = number / 10;
    }
    
    for(int i = seq.size() - 1; i >=0; i--) {
       cout << words[seq[i]] << " ";
    }
    
    return 0;
}