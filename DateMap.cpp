// Change Date Format
//     Given a date string in the format Day Month Year,
//     where :

//     Day is in the set{"1st", "2nd", "3rd", "4th", "5th", "6th", "7th", "8th", "9th", ..., "29th", "30th", "31st"}
//         .Month is in the set{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}
//         .Year is in the inclusive range[1900, 3000]
//         .

//     Convert the date string to the format YYYY -
//         MM - DD,
//     where :

//     YYYY denotes the 4 digit year.MM denotes the 2 digit month.DD denotes the 2 digit day.For example :

//     1st Mar 1984 → 1984 -
//         03 - 01 2nd Feb 2013 → 2013 - 02 - 02 4th Apr 1900 → 1900 - 04 - 04

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>
#include<string>

using namespace std;
string convert(string A)
{
     string temp = "";
     vector<string> tempa;
     unordered_map<string, string> date = {{"1st", "01"}, {"2nd", "02"}, {"3rd", "03"}, {"4th", "04"}, {"5th", "05"}, {"6th", "06"}, {"7th", "07"}, {"8th", "08"}, {"9th", "09"}, {"10th", "10"}, {"11th", "11"}, {"12th", "12"}, {"13th", "13"}, {"14th", "14"}, {"15th", "15"}, {"16th", "16"}, {"17th", "17"}, {"18th", "18"}, {"19th", "19"}, {"20th", "20"}, {"21st", "21"}, {"22nd", "22"}, {"23rd", "13"}, {"24th", "24"}, {"25th", "25"}, {"26th", "26"}, {"27th", "27"}, {"28th", "28"}, {"29th", "29"}, {"30th", "30"}, {"31st", "31"}};

     unordered_map<string, string>
         month;
     month["Jan"] = "01";
     month["Feb"] = "02";
     month["Mar"] = "03";
     month["Apr"] = "04";
     month["May"] = "05";
     month["Jun"] = "06";
     month["Jul"] = "07";
     month["Aug"] = "08";
     month["Sep"] = "09";
     month["Oct"] = "10";
     month["Nov"] = "11";
     month["Dec"] = "12";

     for (int i = 0; i < A.length(); i++)
     {
          if (A[i] == ' ')
          {
               tempa.push_back(temp);
               temp = "";
          }
          else if (i == A.length() - 1)
          {
               temp = temp + A[i];
               tempa.push_back(temp);
               temp = "";
          }
          else
          {
               temp = temp + A[i];
          }
     }
     string ans = tempa[2] + "-" + (month[tempa[1]]) + "-" + (date[tempa[0]]);
     return ans;
}
string Solution::solve(string A)
{

     return convert(A);
}
