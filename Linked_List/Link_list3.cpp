#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

int main(){
    node *first = (node*) malloc(sizeof(node));
    node *second = (node*) malloc(sizeof(node));
    node *third = (node*) malloc(sizeof(node));
    node *fourth = (node*) malloc(sizeof(node));
    node *fifth = (node*) malloc(sizeof(node));
    first->data = 5;
    second->data = 4;
    third->data = 6;
    fourth->data = 2;
    fifth->data = 8;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
     
    return 0;
}
