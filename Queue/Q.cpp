#include<bits/stdc++.h>
using namespace std;

#define size 5
int Q[size];
int front = -1;
int rare = -1;

void enqueue(int data){
    if(rare == size - 1){
        cout<<"Queue overflow."<<endl;
    }else if(front == -1 && rare == -1){
        front = 0;
        rare = 0;
        Q[rare] = data;
        cout<<Q[rare]<<endl;
    }else{
        rare++;
        Q[rare] = data;
        cout<<Q[rare]<<endl;
    }
}

void dequeue(){
    if(front == rare){
        cout<<"Queue underflow."<<endl;
    }else{
        front++;
        
    }
}

int main() {
    
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    return 0;
}