#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void insert(Node* Head,int data){
    while(Head->next!=NULL) {
        Head = Head->next;
    }
    //Head->next = ( Node*)malloc(sizeof( Node));
    Head = new Node;
    Head->next->data = data;
    Head->next->next = NULL;
}

void display(Node* Head){
    while(Head->next!=NULL){
        cout<<Head->next->data<<endl;
        Head = Head->next;
    }
}

void search(Node* Head,int value){
        int c = 0;
        while(Head->next!=NULL){
            if(Head->next->data==value){
                c++;
            }
            Head = Head->next;
        }
        if(c>0){
            cout<<"Value is found"<<endl;
        }else{
            cout<<"Value is not found"<<endl;
        }
}

void delet(Node* Head,int del){
        while(Head->next!=NULL){
            if(Head->next->data == del){
                Head->next = Head->next->next;
            }
            Head = Head->next;
        }
}

int main(){
    struct Node  *first;
    //first = (Node*)malloc(sizeof(Node));
    first = new Node;
    first->next = NULL;

    insert(first,4);
    insert(first,5);
    insert(first,2);
    insert(first,6);
    insert(first,9);
    // cout<<"How many data want to insert?"<<endl;
    // int x;
    // cin>>x;
    // for (int i = 0; i < x; i++)
    // {
    //     int value ;
    //     cin>>value;
    //     insert(first,value);
    // }
    

    display(first);

    search(first,9);

    delet(first,4);

    display(first);

    //printf("%d ", first->next->data);

    return 0;
}
