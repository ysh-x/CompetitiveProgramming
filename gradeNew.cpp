// string Solution::solve(int A)
// {

//      string grade;

//      if (A >= 90)
//           grade = 'A';
//      else if (A >= 80)
//           grade = 'B';
//      else if (A >= 70)
//           grade = 'C';
//      else if (A >= 60)
//           grade = 'D';
//      else if (A >= 50)
//           grade = 'E';
//      else
//           grade = 'F';

//      return grade;
// }

string Solution::solve(int A) {
    
    string grade;
    
    if(A >= 90)
        grade = 'A';
    else if(A >= 80)
        grade = 'B';
    else if(A >= 70)
        grade = 'C';
    else if(A >= 60)
        grade = 'D';
    else if(A >= 50)
        grade = 'E';
    else
        grade = 'F';
        
    return grade;
}
