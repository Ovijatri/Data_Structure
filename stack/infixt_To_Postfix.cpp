#include<bits/stdc++.h>
using namespace std;

int preceden(char ch) {
    if(ch == '+' || ch == '-' ) {
        return 1;
    }else if(ch == '*' || ch == '/') {
        return 2;
    }else if(ch == '^') {
        return 3;
    }else {
        return 0;
    }
}

string inPost(string inf) {
    stack <char> infStack;
    infStack.push('#');
    string postFix = "";
    string ::iterator it;

    for(it = inf.begin(); it != inf.end(); it++) {
        if(isalnum(char(*it))){
            postFix += *it;
        }else if(*it == '(') {
            infStack.push(*it);
        }else if(*it == '^') {
            infStack.push(*it);
        }else if(*it == ')') {
            while(infStack.top() != '#' && infStack.top() != '(') {
                postFix += infStack.top();
                infStack.pop();
            }
            infStack.pop();
        }else {
            if(preceden(*it) > preceden(infStack.top())) {
                infStack.push(*it);
            }else {
                while(infStack.top() != '#' && preceden(*it) <= preceden(infStack.top())) {
                    postFix += infStack.top();
                    infStack.pop();
                }
                infStack.push(*it);
            }
        }
    }
    while(infStack.top() != '#') {
        postFix += infStack.top();
        infStack.pop();
    }
    //reverse(postFix.begin(),postFix.end());
    return postFix;
}

int main() {
   
    string infix = "(A+B)+(C-D)";
    cout << "Postfix Form Is: " << inPost(infix) << endl;
    return 0;
}