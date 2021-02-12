#include<iostream>
#include<vector>


using namespace std;

void baseConverter(int decimal, int base) {
     vector <int> binary;
     int temp;

     while(decimal > 0) {
          temp = decimal % base;
          binary.push_back(temp);
          decimal/=2;
     }
     for(int i = (binary.size() - 1); i >=0; i--) {
          cout << binary.at(i);
     }
}

int main() {
     baseConverter(10,2);
}