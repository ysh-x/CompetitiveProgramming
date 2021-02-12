#include<iostream>

using namespace std;

int strtoi (char ch[]) {
     int i = 0;
     int a = 0;
     int dig;
     int num = 0;

     while(ch[i] != '\0') {
          dig = ch[i] % 48;
          int a = dig;
          num = num * 10 + a;
          i++;
     }
     return num;
}
int main() {
     char st[10] = "123456";
     cout << strtoi(st) + 1;
     return 0;
}