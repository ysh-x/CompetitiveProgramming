#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

string convert(string A) {
     string temp = "";
     vector<string> tempa;
     unordered_map<string, string> date = {{"1st", "01"}, {"2nd", "02"}, {"3rd", "03"}, {"4th", "04"}, {"5th", "05"}, {"6th", "06"}, {"7th", "07"}, {"8th", "08"}, {"9th", "09"}, {"10th", "10"}, {"11th", "11"}, {"12th", "12"}, {" 13th ", "13"}, {"14th ", "14"}, {"15th", "15"}, {"16th", "16"}, {"17th", "17"}, {"18th ", "18"}, {"19th ", "19"}, {"20th", "20"},
      {"21st", "21"}, {"22nd", "22"}, {"23rd", "13"}, {"24th", "24"}, {"25th", "25"}, {"26th", "26"}, {"27th", "27"}, {"28th", "28"}, {"29th", "29"}, {"30th", "30"}, {"31st", "31"}};

     unordered_map<string, string>
         month;
     month["Jan"] =  "01";
     month["Feb"] =  "02";
     month["Mar"] =  "03";
     month["Apr"] =  "04";
     month["May"] =  "05";
     month["Jun"] =  "06";
     month["Jul"] =  "07";
     month["Aug"] =  "08";
     month["Sep"] =  "09";
     month["Oct"] =  "10";
     month["Nov"] =  "11";
     month["Dec"] =  "12";
     

     for(int i = 0; i < A.length(); i++) {
          if(A[i] == ' ') {
                    tempa.push_back(temp);
                    temp = "";
          }
          else if (i == A.length() - 1) {
               temp = temp + A[i];
               tempa.push_back(temp);
               temp = "";
          }
          else
          {
               temp = temp + A[i];
          }
     }
     string ans = tempa[2]+"-"+(month[tempa[1]])+"-"+(date[tempa[0]]);
     return ans;

}
int main() {
     string A = "30th Jul 3532";
     cout << convert(A);
     return 0;
}