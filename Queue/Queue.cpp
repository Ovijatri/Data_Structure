#include<bits/stdc++.h>
using namespace std;

int main(){
    queue <string> animals;
    for(int i = 0; i < 3; i++){
        string s;
        cin>>s;
        animals.push(s);
    }
    while(!animals.empty()){
        cout<<animals.front()<<" ";
        animals.pop();
    }
    // cout<<endl;
    // animals.pop();
    // cout<<animals.front()<<endl;
    // cout<<animals.back()<<endl;
    return 0;
}