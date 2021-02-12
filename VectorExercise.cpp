#include<iostream>
#include<vector>

using namespace std;

int main() {

     vector <int> vectorOne;
     vector <int> vectorTwo;
     
     vectorOne.push_back(10);
     vectorOne.push_back(20);

     cout << "V1 \n Size " << vectorOne.size() << endl;
     cout << vectorOne.at(0) << endl;
     cout << vectorOne.at(1) << endl;

     vectorTwo.push_back(100);
     vectorTwo.push_back(200);

     cout << "V2 \n Size " << vectorTwo.size() << endl;
     cout << vectorTwo.at(0) << endl;
     cout << vectorTwo.at(1) << endl;

     vector<vector <int> > TwoD;

     TwoD.push_back(vectorOne);
     TwoD.push_back(vectorTwo);

     cout << "2-D V \n Size " << vectorTwo.size() << endl;
     cout << TwoD.at(0).at(0) << endl;
     cout << TwoD.at(0).at(1) << endl;
     cout << TwoD.at(1).at(0) << endl;
     cout << TwoD.at(1).at(1) << endl;
}