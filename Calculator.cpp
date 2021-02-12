#include <iostream>
#include<vector>
#include<string>

using namespace std;
int const ZEN_MODE = 1;
int const NORMAL_MODE = 0;
int MODE = 0;
vector<double> history;
vector<string> operHistory;

void initHistory() {
     history.clear();
     operHistory.clear();
}

void updateHistory(string oper, double answer) {
     operHistory.push_back(oper);
     history.push_back(answer);
}

void printHistory() {

     if(history.empty()) {
          cout << "\t NO HISTORY FOUND " << endl;
     }
     else {
          system("clear");
          cout << "\t\t HISTORY DETAILS " << endl;
          for(int i = 0; i < history.size(); i++) {

               cout << "\t" <<  i+1 << " : OPERATION PERFORMED : " << operHistory[i] << " ANSWER :  " << history[i] << endl;
          }
     }
}

int zen() {
     cout << "\n\n";

     string s;
     cin >> s;
     if(s == "normal") {
          return NORMAL_MODE;
     }
     else if(s == "exit") {
           system("clear");
          cout << "\n\n\n\n\t\tTHANK YOU FOR USING SIMPLE - MIND ";
          exit(0);
     }

     double a, b;
     string operation;

     a = stoi(s);
     cin >> operation;

     if(operation == "+") {
          cin >>b;
          cout << endl << (a+b);
          cout << endl;
          updateHistory("+",(a + b));
     } 
     else if(operation == "-") {
          cin >> b;
          cout << endl << (a-b);     
          cout << endl;
          updateHistory("-", (a - b));
     }
     else if(operation == "*") {
          cin >> b;
          cout << endl << (a*b);     
          cout << endl;
          updateHistory("*", (a * b));
     }
     else if(operation == "/") {
          cin >> b;
          cout << endl << (a/b);     
          cout << endl;
          updateHistory("/", (a / b));
     }

     else if(operation == "!") {
           int fact = 1;
               for(int i = 1; i <= a; i++) {
                    fact = fact * i;
               }
          cout << endl << fact;
          cout << endl;
          updateHistory("!", fact);
     }
     else if(operation == "!!") {
              int zeros = 0;
               while(a > 0) {
                    zeros +=  a/5;
                    a = a/5;
               }
               cout << endl << zeros;
               cout << endl;
               updateHistory("!!", zeros);
     }

     return 1;
}
int normal() {
          cout << "\n\n\tMENU\n";
          cout << "\t1. + " << endl;
          cout << "\t2. - "<< endl;
          cout << "\t3. * "<< endl;
          cout << "\t4. / "<< endl;
          cout << "\t5. ! "<< endl;
          cout << "\t6. ZEROS IN END OF FACTORIAL "<< endl;
          cout << "\t7. ZEN MODE :) " << endl;
          cout << "\t8. CHECK HISTORY " << endl;
          cout << "\tQ TO QUIT " << endl;
          cout << "\tCHOICE : ";

          int select;
          cin >> select;

          if(select >=1 && select <= 4) {
               double a,b;
               cout << "\t NUMBER 1 : ";
               cin >> a;
               cout << "\t NUMBER 2 : ";
               cin >> b;
               if(select == 1) {
               cout << "\t" << a << " + " << b << " = " << (a+b) << endl;
               updateHistory("+", (a + b));
               }
               else if(select == 2) {
               cout << "\t" << a << " - " << b << " = " << (a-b) << endl;
               updateHistory("-", (a - b));
               }
               else if(select == 3) {
               cout << "\t" << a << " * " << b << " = " << (a*b) << endl;
               updateHistory("*", (a * b));
               }
               else if(select == 4) {
               cout << "\t" << a << " / " << b << " = " << (a/b) << endl;
               updateHistory("/", (a / b));
               }
          }
          else if(select == 5) {
               int x;
               int temp  = x;
               cout << "\t" << "NUMBER : " << endl;
               cin >> x;
               int fact = 1;
               for(int i = 1; i <= x; i++) {
                    fact = fact * i;
               }
               cout << "\t" << temp << " ! = " << fact << endl;
               updateHistory("!", fact);
          }

          else if(select == 6) {
               int x;
               cout << "\t" << "NUMBER : ";
               cin >> x;          

               int zeros = 0;
               while(x > 0) {
                    zeros +=  x/5;
                    x = x/5;
               }
               cout << "\tZEROS IN  " << x <<"! = " << zeros << endl;
               updateHistory("!!", zeros);
          }

          else if(select == 7) {
               return ZEN_MODE;     
          }
          else if(select == 8) {
               printHistory();
          }
          else {
                system("clear");
               cout << "\n\n\n\n\t\tTHANK YOU FOR USING SIMPLE - MIND ";
               exit(0);
          }
          return NORMAL_MODE;
}

int ch;
bool flag = true;

void start() {
   
     while(true) {

          if(MODE == NORMAL_MODE) {
               MODE = normal();
          }
          else if(MODE == ZEN_MODE) {
               MODE = zen();
          }
     }
}
void title() {
     system("clear");
     cout << "\n\n\t\t SIMPLE - MIND" << endl;
     cout << "\t\tDEVELOPED BY YOGESHWAR.G" << endl;
     cout << "PRESS [1] TO START " << endl;
     cin >> ch;
     if(ch == 1) {
          start();
     }
     else {
          system("clear");
          cout << "\n\n\n\n\t\tTHANK YOU FOR USING SIMPLE - MIND ";
     }
}


int main() {
     initHistory();
     title();
}