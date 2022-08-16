#include<bits/stdc++.h>
using namespace std;

int adj[10][10];
int v,u,status;

void edge(int v,int u){
    if(status == 1){
        adj[v][u] = 1;
    }else if(status == 2){
        adj[v][u] = 1;
        adj[u][v] = 1;
    }    
}

void display_matrix(int vertex){
    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int vertex,edges;
    cout<<"Enter vertex and edge : ";
    cin>>vertex>>edges;
    printf("Enter 1 for directed graph or 2 for undirected graph : ");
    cin>>status;
    cout<<"Enter pair of v and u : "<<endl;
    for(int i = 0; i < edges; i++){
        cin>>v>>u;
        edge(v,u);
    }
    cout<<"matrix is : "<<endl;
    display_matrix(vertex);

    return 0;

}