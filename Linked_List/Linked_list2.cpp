#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void insert(node *n,int data){
    while(n->next != NULL){
        n = n->next;
    }
    n->next = new node;
    n->next->data = data;
    n->next->next = NULL;
}

void display(node *n){
    while(n->next != NULL){
        cout<<n->next->data<<" ";
        n = n->next;
    }
    //cout<<endl;
}

void search(node *n,int item){
    int c = 0;
    while(n->next != NULL){
        if(n->next->data == item){
            c++;
        }
        n = n->next;
    }
    if(c != 0){
        cout<<item<<" is found"<<endl;
    }else{
        cout<<item<<" is not found"<<endl;
    }
}

void delet(node *n,int item){
    while(n->next != NULL){
        if(n->next->data == item){
            n->next = n->next->next;
        }
        n = n->next;
    }
}

int main(){
    struct node *m;
    m = new node;
    m->next = NULL;
    cout<<"How many data insert you :"<<endl;
    int n;
    cin>>n;
    cout<<"insert data in Linklist : ";
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        insert(m,x);
    }
    display(m);
    cout<<endl;
    cout<<"which data search you: ";
    int y;
    cin>>y;
    search(m,y);
    cout<<"which node delete : ";
    int z;
    cin>>z;
    delet(m,z);
    cout<<"After delete node the list is : ";
    display(m);
    return 0;
}