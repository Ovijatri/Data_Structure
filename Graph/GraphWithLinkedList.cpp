#include<iostream>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }
    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printList(){
        for(int i = 0; i < V; i++){
            cout<<"node "<< i <<" -> ";
            for(int adj:l[i]){
                cout<<adj<<' ';
            }
            cout<<endl;
        }
    }
};

int main(){
    int vertex,edge,u,v;
    cout<<"Enter vertex and edge : ";
    cin>>vertex>>edge;
    Graph g(vertex);
    cout<<"Enter two adjacency vertex : "<<endl;
    for(int i = 0; i < edge; i++){
        cin>>u>>v;
        g.addEdge(u,v);
    }
    g.printList();

    return 0;
}