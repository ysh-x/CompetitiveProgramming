// 1
// 1 2
// 1 2 3
// 1 2 3 4
#include<iostream>

using namespace std;


void numbericStair(int size) {
      for(int i = 1; i <= size; i++) {
        for(int j = 1; j<=i; j++) {
            if(j==i)
            cout << j;
            else
            cout <<j <<" ";
        }
        cout << endl;
    }
}

int main() {
     // numbericStair(5);
}