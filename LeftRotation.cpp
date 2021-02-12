
// Left Rotation
//     Problem Description

//         Write a program to print the input array A of size N after rotating it by B units where you have to take integer N and further N elements as input from user.

#include<iostream>
#include<vector>

    using namespace std;

vector<int> rotate(vector<int> v) {
    int temp = v[0];
    for(int i = 1; i < v.size(); i++) {
        v[i-1] = v[i];
    }
    v[v.size() - 1] = temp;
    return v;
}
int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    vector <int> v;
    int length;
    
    cin >> length;
    
    for(int i = 0; i < length; i++) {
        int e;
        cin >> e;
        v.push_back(e);
    }
    int times;
    cin >> times;

    for (int i = 0; i < times % length; i++)
    {
         v = rotate(v);
    }

    for(auto a: v) {
        cout << a << " ";
    }
    return 0;
}