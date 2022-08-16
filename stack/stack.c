#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY];
int Top = -1;

void push(int data) {
    if(Top < CAPACITY -1) {
        Top+=1;
        stack[Top] = data;
        printf("%d\n",data);
    }
}

void pop() {
    if(Top >= 0) {
        stack[Top--] ;
        printf("successfully delete the element\n");
    }
}

int top() {
    if(Top >= 0) {
        return stack[Top];
    }
       
}

int main() {
    for(int i = 0; i <CAPACITY;i++) {
        int data;
        scanf("%d", &data);
        push(data);
    } 
    pop();
    top();
    printf("%d",top());
    return 0;
}