#include<bits/stdc++.h>
using namespace std;

int adj_matrix[10][10];
int power_matrix[10][10];

void display_adjacency_list(int);
void construct_power_Matix(int);
void construct_matix(int);
void number_of_path(int);
void display_matrix(int);

void construct_Matrix(int vertex){
    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++){
            cin>>adj_matrix[i][j];
        }
    }
}

void number_of_path(int n){
    int length,u,v;
    cout<<"Enter your required length : ";
    cin>>length;
    cout<<"Enter source and destination : ";
    cin>>u>>v;
    construct_power_Matix(n);

    for(int l = 1; l < length; l++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int temp = 0;
                for(int k = 0; k < n; k++){
                    temp += power_matrix[i][k] * adj_matrix[k][j];
                }
                power_matrix[i][j] = temp;
            }
        }
    }

    printf("\nNumber of paths of length %d from %d to %d is %d\n", length, u, v, power_matrix[u][v]);

}
void construct_power_Matix(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            power_matrix[i][j] == adj_matrix[i][j];
        }
    }
}

void display_adjacency_list(int n)
{
    printf("\nAdjacency List :\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d --> ", i);
        for(int j = 0; j < n; j++)
        {
            if(adj_matrix[i][j])
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}

void display_matrix(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<power_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of node : ";
    cin>>n;
    cout<<"Enter the matrix : "<<endl;
    construct_Matrix(n);
    number_of_path(n);
    display_matrix(n);
    display_adjacency_list(n);

}