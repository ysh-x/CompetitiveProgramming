// A
//     B B
//         C C C
//             D D D D
#include<iostream>

    using namespace std;


void charecterStair(int size) {
      char array[27] = {'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    
    for(int i = 1; i <=size; i++) {
        for(int j = 1; j<=i; j++) {
            if(j==i) 
                cout << array[i];
            else
                cout << array[i] << " ";
        }
        cout << endl;
    }
    
}

void numer
int main() {
     charecterStair(5);
}