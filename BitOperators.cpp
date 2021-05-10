//Bit Manipulation - I
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {

     int a = 3;
     int b = 5;
     int c = 1;

     cout << "A          :" << (a);
     cout << endl;
     cout << "B          :" <<(b); 
     cout << endl;
     cout << "AND        :" << (a & b);
     cout << endl;
     cout << "XOR        :" << (a ^ b);
     cout << endl;
     cout << "COMP-A     :" << (~a); // = - a - 1 = (-3 - 1 ) = -4
     cout << endl;
     cout << "COMP-B     : " << (~b);
     cout << endl;


     cout << "COMMUTITATIVE(A&B)   : " << (a & b) << endl;
     cout << "COMMUTITATIVE(B&A)   : " << (b & a) << endl;

     cout << "ASSOCIATIVE (A&B)&C   : " << ((a & b) & c) << endl;
     cout << "ASSOCIATIVE B&(A&C)   : " << (a & (b & c)) << endl;

     cout << " PROPERTIES " << endl;
     cout << "1. X & 0 = 0    :" << (a & 0) << endl;
     cout << "2. X & X = X    :" << (a & a) << endl;
     cout << endl;
     cout << "3. X | 0 = X    :" << (a | 0) << endl;
     cout << "4. X | X = X    :" << (a | a) << endl;
     cout << endl;
     cout << "5. X ^ 0 = X    :" << (a ^ 0) << endl;
     cout << "6. X ^ X = 0    :" << (a ^ a) << endl; // Very important Property
     //1101 ^ 1101 = 0000

     return 0;
}