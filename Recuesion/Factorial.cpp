#include<bits/stdc++.h>
using namespace std;

int fact(int x){
    if(x==1){
        return 1;
    }else{
        return x*fact(x-1);
    }

}

int main(){
    cout<<"Enter a num : "<<endl;
    int n;
    int factorial;
    cin>>n;
    factorial = fact(n);
    cout<<factorial<<endl;
    return 0;
}