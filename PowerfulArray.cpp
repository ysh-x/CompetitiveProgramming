#include<iostream>
#include<vector>

using namespace std;

int main(){

    static const int arr[] = {82, 161, 163, 157, 119, 107, 126, 81, 202, 184, 102, 90, 140, 103, 143, 76, 173, 184};
vector<int> A(arr, arr + sizeof(arr) / sizeof(arr[0]));

static const int arr1[] = {159, 84, 126, 148, 76, 57, 114, 93, 145, 164, 118, 80, 173, 81, 120, 150, 167, 195};
vector<int> B(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));

unsigned long long int productOne = 1;
unsigned long long int productTwo = 1;

int flag;

for (int i = 0; i < A.size(); i++)
{
     productOne = productOne * A.at(i);
     productTwo = productTwo * B.at(i);
     }
     cout << endl;

     if (productOne > productTwo)
          flag = 1;
     else
          flag = 0;
     cout << productOne << " "<< productTwo << endl;
     cout << flag << endl;

}