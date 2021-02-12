//     @ 1 2 3 4 5
//     @ @1 2 3 4
//     @ @ @1 2 3
//     @ @ @ @1 2
//     @ @ @ @ @1

#include <iostream>

    using namespace std;

int main()
{
     int N = 5;
     for (int i = N; i > 0; i--)
     {
          for(int k = i-1; k < N; k++) {
            cout << "@ ";
        }
        for(int j = 1; j <=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
}