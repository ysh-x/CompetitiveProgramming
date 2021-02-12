#include <iostream>
using namespace std;


// DRY -> Dont Repeat Yourself
// copy-paste
// pros -> simple and quick
// cons
// - increase the size of code
// - it is difficult to see that the same thing is happeneing
// - what if I have to change something - I have multiple sources of truths, and I need to update them all

// abstract/refactor this out into a function
// then use that functionality multiple times

// a function might take inputs or it might not
// mathematical functions -> take 1 or more input -> 1 output
// function represents a functionality
// may or may not have inputs, and we may or may not have an output

// int is a datatype -> 2^32 different values -> 0, -1, 1, -2, 2, -3, 3, ..
// bool is a datatype -> 2 different values -> true/false
// void is a datatype -> 1 value -> void
void speak() {
    // takes nothing, and returns nothing
    cout << "Hello world" << endl;
}

//    return type
// --->|   |<----
//          name
//       -->    <---
        int add(int x, int y)     {
//              <- parameters ->
            return x + y;
        }

        void printSomething(int x, int y) {
            cout << x + y << endl;
        }
//

void check_leap(int year) {
    // given an year, print if it is a leap year or not
    // divisible by 4 is leap -> 2100 is NOT a leap year
    // if not leap -> 365 days
    // if leap -> 366 days

    // Earth revolves around the sun, and it completes 1 revolution in 365.25 days
    // 365 days
    // every 4 years, this adds up to another day
    // every 4 years we make a leap year
    // 365.24xx
    // every 100 years
    // every 100 years, we will cancel the leap year
    // every 400 years // 1600
    // let us have that leap year again

    // to check if every kth year
    // check if year is divisible by k
    // % -> remainder
    // year % k == 0   -> divisble by k
    cout << "version 1" << endl;
    if(year % 4 == 0)
        cout << "leap year" << endl;
    else
        cout << "not a leap year" << endl;

    // ---------------------------------------

    cout << "version 2" << endl;
    // 1600
    if(year % 4 == 0)
        cout << "leap year" << endl;
    else if(year % 100 == 0)
        cout << "not a leap year" << endl;
    else
        cout << "not a leap year" << endl;


    // ---------------------------------------

    cout << "version 2.5" << endl;
    if(year % 100 == 0)
        cout << "not a leap year" << endl; // 1600
    else if(year % 4 == 0)
        cout << "leap year" << endl; // 1604
    else
        cout << "not a leap year" << endl; // 1603


    // ---------------------------------------

    cout << "version 3" << endl;
    if(year % 400 == 0) // 1604 % 400   =>  4 != 0
        cout << "leap year" << endl; // 1600
    else
        if(year % 100 == 0) // 1604 % 100 => 4 != 0
            cout << "not a leap year" << endl; // 1700
        else
            if(year % 4 == 0) // 1604 % 4 => 0 == 0
                cout << "leap year" << endl; // 1604
            else
                cout << "not a leap year" << endl; // 1603

    // ---------------------------------------    
    
    cout << "version 4" << endl;
    if(year % 4 == 0){
        if(year % 100 == 0) {
            if(year % 400 == 0)
                cout << "leap year" << endl;
            else
                cout << "not a leap year" << endl;
        } 
        else
            cout << "leap year" << endl;
    }
    else
        cout << "not leap year" << endl;


    // ---------------------------------------    
    
    // boolean operators
    // OR, AND, NAND, XOR
    /*
    |, || -> | is the binary OR, || is the logical OR 
    &. && -> & is the binary AND, && is the logical AND
    // not carrot -> caret
    x y   x||y  x&&y    x^y
    f f    f     f       f
    f t    t     f       t
    t f    t     f       t
    t t    t     t       f
    */

    cout << "version 5" << endl;
    // 1700 -> f || (f && t) -> f || f -> f -> not a leap year
    // 1600 -> t || (f && t) -> f || t -> t -> leap year
    // 2004 -> f || (t && t) -> f || t -> t -> leap year
    // 2003 -> f || (t && f) -> f || f -> f -> not a leap year

    // (divisble by 400) or (not divible by 100 and divible by 4)
    if((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
        cout << "leap year" << endl;
    else
        cout << "not leap year" << endl;

    // ---------------------------------------    
    cout << "version 6" << endl;
    if((year % 400 == 0) or ((year % 100 != 0) and (year % 4 == 0)))
        cout << "leap year" << endl;
    else
        cout << "not leap year" << endl;
    // functions
			cout<<year<<endl;
    cout << "--------------- " << endl;
}

int main() {
    check_leap(1600);
    check_leap(1700);
    check_leap(2000);
    check_leap(2003);
    check_leap(2004);
		check_leap(1200);
		check_leap(800);
		check_leap(700);

    int result = add(10, 20);
    add(100, 200);
    
    // shortcutting
    return 0;
}
    // programming construct
    // syntax -> the representation of something
    // semantics -> meaning of something
/*
    if(condition) statement;
    else statement;
*/
    // in C++ spaces don't really matter
    // is NOT whitespace sensitive
/*
    // indentation
    // layout the code properly across the horizantal space

    if-else block is itself a statement
    // 1. if(a+b-c)
    // 2. if(a+b-c > 0)

       <--expr-->
    if(condition)
        statement;
    else
        statement;

*/
/*
    Blocks
    1. expressions always evaluate to some value
    2. statement exist on their own

         expression
        <-------->
    a = b + c * 10;
    <-------------->
         statement

    {
        statement1;
        statement2;
        statement3;
    }

    Whenever a statement is needed, you can replace that with a block.

    if(condition) {
        s1;
        s2;
        s3;
    }
    else {
        s1;
        s2;
        s3;
    }

    if(condition)
        s1;
    else
        s2;

    if(condition)
        s1;
    else if (condition)
        s2;
    else
        s3;



    if(condition)
        s1;
    else {
        if (condition)
            s2;
        else
            s3;
    }

    if(condition)
        statement;


    if(condition)
        statement;
    else
        statement;
    

*/

/*
    if(condition) {

    } else if (condition) {

    } else {

    }

*/
/*
    if(expression) {
        s1;
        s2;
    }

    if(expression) {
        s1;
        s2;
        s3;
    }
    else {
        ...

    }
*/
/*
SEMANTICS
    if(expression)
        s1;
    else
        s2;

    bool -> 1 byte
    char -> 1 byte
    int -> 4 bytes     0 -> false   anything else -> true
    float -> 4 bytes


    10 + 20
    30 - is "truthy"
    truthiness/falsiness
    
    if the expression "evaluates" to true, then execute s1 else execute s2

    if(10+20)
        s1;       // t his is always executed
    else
        s2;
    
    + is a binary operator
    a + b -> c all a, b, c are integers
    < is also a binary operator
    a < b -> true/false


       ------------
         30
       -------
    if(10 + 20 < 40)
        s1;
    else
        s2;
*/

/*
    if(10 + 20)
        cout << "condition was true" << endl;
    else
        cout << "condition was false" << endl;

    if(10 / 20)
        cout << "condition was true" << endl;
    else
        cout << "condition was false" << endl;
    
    // truthiness of char
    // char -> 0 -> false
    // char == '\0' -> false

    if('a')
        cout << "condition was true" << endl;
    else
        cout << "condition was false" << endl;

    
    return 0;
}
*/