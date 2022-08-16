#include<stdio.h>
#include<stdlib.h>

struct node{
    int vertex;
    struct node* next;
};

struct node* creteNOde(int);

struct Graph{
    int nV;
    struct node** adjList;
};

//create a node
struct node* createNode(int v){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

//create graph
struct Graph* createGraph(int vertices){
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->nV = vertices;
    graph->adjList = malloc(vertices*sizeof(struct node));
    for(int i = 0; i < vertices; i++){
        graph->adjList[i] = NULL;
    }
    return graph;
}

//addEdge
void addEdge(struct Graph* graph,int s,int d){
    //addEdge from source to destination
    struct node* newNode = createNode(d);
    newNode->next = graph->adjList[d];
    graph->adjList[d] = newNode;
}

//print the Graph
void printGraph(struct Graph* graph){
    for(int i = 0; i < graph->nV; i++){
        struct node* temp = graph->adjList[i];
        printf("\n Vertex %d\n: ", i);
        while(temp){
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
    }
}

int main(){
    struct Graph* graph = createGraph(4);
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,0,3);
    addEdge(graph,1,2);

    printGraph(graph);

    return 0;
}