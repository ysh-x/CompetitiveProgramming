#include<iostream>

using namespace std;

class Phone {

     int Price, Pixel;

     public:
     void phone(int price, int pixel) {
     Price = price;
     Pixel = pixel;   
     }

     void compare (Phone P1, Phone P2) {

          if(P1.Price < P2.Price && P1.Pixel > P2.Pixel) {
               cout << "A" << endl;
          }
          else if(P1.Price > P2.Price && P1.Pixel < P2.Pixel) {
               cout << "B" << endl;
          }
          else
          {
               cout << "None" << endl;
          }
          

     }

};


int main() {
     int PR1,PR2,PI1,PI2;

     cin >> PR1;
     cin >> PI1;

     cin >> PR2;
     cin >> PI2;

     Phone P1;
     P1.phone(PR1,PI1);

     Phone P2;
     P2.phone(PR2,PI2);

     P1.compare(P1,P2);

}