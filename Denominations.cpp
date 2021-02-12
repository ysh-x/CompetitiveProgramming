#include<iostream>

using namespace std;
void denom (int rupee) {
     //Avalaible denomiantions 2000 500 200 100 50 10 5 1
     cout << "Denominations " << endl;
     if(rupee >= 2000) {
          cout << "2000 x  " << rupee/2000;
          cout << endl;
          rupee%=2000;
     }
     if (rupee >= 500)
     {
          cout << "500 x  " << rupee / 500;
          cout << endl;
          rupee %= 500;
     }
     if (rupee >= 200)
     {
          cout << "200 x  " << rupee / 200;
          cout << endl;
          rupee %= 200;
     }
     if (rupee >= 100)
     {
          cout << "100 x  " << rupee / 100;
          cout << endl;
          rupee %= 100;
     }
     if (rupee >= 50)
     {
          cout << "50 x  " << rupee / 50;
          cout << endl;
          rupee %= 50;
     }
     if (rupee >= 20)
     {
          cout << "20 x  " << rupee / 20;
          cout << endl;
          rupee %= 20;
     }

     if (rupee >= 10)
     {
          cout << "10 x  " << rupee / 10;
          cout << endl;
          rupee %= 10;
     }
     if (rupee >= 5)
     {
          cout << "10 x  " << rupee / 5;
          cout << endl;
          rupee %= 5;
     }

     if(rupee >= 1)
      {
          cout << "1 x  " << rupee / 1;
          cout << endl;
     }
}

int main() {
     denom(42);
}
