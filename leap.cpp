#include<iostream>

using namespace std;

int main() {

    int year;
    cin >> year;
    bool flag;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
         flag = 1;
    }
    else
         flag = 0;
    cout << flag;
}

