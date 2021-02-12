#include<iostream>
#include<vector>


using namespace std;



void binary (int number) {

     int reminder;
     vector<int> ans;
     vector<int>::iterator i;
     cout << "number: " << number << "\t";

     while (number != 0)
     {
          reminder = number % 2;
          ans.push_back(reminder);
          number = number / 2;
     }

    
     for (i = ans.end()-1; i >= ans.begin(); i--)
     {
          cout << *i;
     }
     cout << endl;

    ans.clear();
}
int main() {


     for(int i = 1; i <= 1000; i++) {
          binary(i);
         
     }
     return 0;

}