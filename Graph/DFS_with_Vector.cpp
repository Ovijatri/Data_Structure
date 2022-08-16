#include<bits/stdc++.h>
using namespace std;
#define n 5
vector<int>Graph[n];
bool visited[n];
int vertex,edge,u,v,source;

void dfs(int source){
    visited[source] = 1;
    for(int i = 0; i < Graph[source].size(); i++){
        int next = Graph[source][i];
        if(visited[next] == 0){
            dfs(next);
        }
    }
}

void printGraph(vector<int>Graph[]){
    for(int i = 0; i < vertex; i++){
        if(visited[i] == 1){
            cout<<"Node "<< i <<" is visited"<<endl;
        }else{
            cout<<"Node "<< i <<" is not visited"<<endl;
        }
    }
}

int main(){
    cout<<"Enter vertex and edge : ";
    cin>>vertex>>edge;
    vector<int>Graph[vertex];
    bool visited[vertex];
    cout<<"Enter two adjacency vertex : "<<endl;
    for(int i = 0; i < edge; i++){
        cin>>u>>v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }

    cout<<"Enter source node : ";
    cin>>source;
    dfs(source);
    printGraph(Graph);

    return 0;
}