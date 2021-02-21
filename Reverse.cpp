string Solution::solve(string A) {
    vector <string> ans;
    string temp = "";
    string final;
    int count = 0;
    
    for(int i = 0; i <= A.size(); i++) {
        if(A[i] == ' ' || A[i] == '\0') {
            if(temp!="")
            ans.push_back(temp);
            temp = "";
        }
        else {
                temp+= A[i];
        }
    }
    
    for(int j = ans.size() - 1; j >= 0; j-- ) {
        if(ans[j] == " " && ans[j+1] == " ") {
            count++;
        }
        final = final +" " + ans[j];
    }
    
    final = final.substr(count+1,final.length()-1);
    return final;
}