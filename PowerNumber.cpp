// Find the power of the number using loops

#include<iostream>

using namespace std;

int main()  {

    int n,m;
    long long int power = 1;
    
    cin >> n;
    cin >> m;
    
    for(int i = 1; i <=m; i++) {
        power = power * n;
    }
    cout << power << endl;
    
    return 0;
}