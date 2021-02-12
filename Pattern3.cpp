// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

#include <iostream>

    using namespace std;

int main()
{
     int N = 5;
     int count = 1;
    for(int i = 1; i <= N; i++) {

           for(int k = 1; k <= i; k++) {
               cout << count << " ";
               count++;
        
          }
          cout << endl;
    }
    
}