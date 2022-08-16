#include<bits/stdc++.h>
using namespace std;
#define inf 9999
int matrix[10][10];
int pat_matrix[10][10];
int vertex,edge,u,v;
void print_matrix();
void warshel(int);

void warshel(int vertex){
    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++){
            pat_matrix[i][j] = matrix[i][j];
        }
    }
    //cout<<"Enter source and destination : ";
    cin>>u>>v;
    for(int k = 0; k < vertex; k++){
        for(int i = 0; i < vertex; i++){
            for(int j = 0; j < vertex; j++){
                pat_matrix[i][j] = min(pat_matrix[i][j],pat_matrix[i][k] + pat_matrix[k][j]);
            }
        }
    }
    print_matrix();
}

void print_matrix(){
    cout<<"The graph is : "<<endl;
    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++){
            cout<<pat_matrix[i][j]<<' ';
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter vertex and edge : ";
    cin>>vertex>>edge;
    int matrix[vertex][vertex];
    cout<<"Enter The Graph : "<<endl;
    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++){
            cin>>matrix[i][j];
        }
    }
    warshel(vertex);
}