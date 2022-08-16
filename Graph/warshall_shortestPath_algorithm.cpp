#include<bits/stdc++.h>
using namespace std;
//#define nV 4
#define inf 99999
void create_matrix(int);
void warshel_algorithm(int);
void print_matrix();
int root_matrix[10][10] = {inf};
int pat_matrix[10][10];
int vertex,edge,u,v,w,x,y,m = 0,n = 0,l = 1,length;

void create_matrix(int edge){
    
    for(int i = 0; i < edge; i++){
        cout<<"Enter two adjacency vertex (u,v): ";
        cin>>x>>y;
        cout<<endl;
        printf("Enter weight for %d and %d vertices : ",x,y);
        cin>>w;
        root_matrix[x][y] = w;
        root_matrix[m++][n++] = 0;
    }
}

void warshel_algorithm(int vertex){
    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++){
            pat_matrix[i][j] = root_matrix[i][j];
        }
    }
    cin>>u>>v;
    cout<<endl;
    cout<<"Enter required length : ";
    cin>>length;
    for(int k = 0; k < length; k++){
        for(int i = 0; i < vertex; i++){
            for(int j = 0; j < vertex; j++){
                pat_matrix[i][j] = min(pat_matrix[i][j],pat_matrix[i][k] + pat_matrix[k][j]);
            }
        }
        // print_matrix();
        // printf("\nNumber of paths of length %d from %d to %d is %d\n", k+1, u, v, pat_matrix[u][v]);
    }
    print_matrix();
    printf("\nNumber of paths of length %d from %d to %d is %d\n", length, u, v, pat_matrix[u][v]);
}

void print_matrix(){
    printf("Matrix-%d is : \n",l++);
    for(int i = 0 ; i < vertex; i++){
        for(int j = 0; j < vertex; j++){
            if(pat_matrix[i][j] == inf){
                printf("%4s","INF");
            }
            else{
                printf("%4d",pat_matrix[i][j]);
            }
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter vertex and edge : ";
    cin>>vertex>>edge;
    create_matrix(edge);
    warshel_algorithm(vertex);
    return 0;
}