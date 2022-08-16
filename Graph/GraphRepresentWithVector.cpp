#include<bits/stdc++.h>
using namespace std;

//void create_Graph(vector<int> arr[]);
//void display_Graph(vector<int> arr[]);
vector<int>Graph[5];
int vertex,edge,v,u,status;

void create_Graph(vector<int>Graph[]){
    cout<<"Enter two adjacency vertex : "<<endl;
    if(status == 1){
        for(int i = 0; i < edge; i++){
        cin>>v>>u;
        Graph[v].push_back(u);
        }
    }
    else if(status == 2){
        for(int i = 0; i < edge; i++){
        cin>>v>>u;
        Graph[v].push_back(u);
        Graph[u].push_back(v);
        }
    }     
}

void display_Graph(vector<int>arr[]){
    cout<<"The graph is: "<<endl;
    for(int i = 0; i < vertex; i++){
        cout<< i <<" -> ";
        for(int j = 0; j < arr[i].size(); j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
    
}

int main(){
    cout<<"Enter vertex and edge : ";
    cin>>vertex>>edge;
    vector<int>Graph[vertex];
    cout<<"Enter 1 for directed and 2 for undirected graph: ";
    cin>>status;
    create_Graph(Graph);
    display_Graph(Graph);
    return 0;
}