#include<iostream>
using namespace std;

#define SIZE 3
int stack[SIZE];
int top = -1;

void push (int data) {
    if(top < SIZE - 1) {
        top += 1;
        stack[top] = data;
        printf("%d\n", stack[top]);
    } else{
        printf("out of size\n");
    }
}
int main() {

    push(5);
    push(10);
    push(20);
    push(11);

    // for(int i = 0; i <SIZE; i++) {
    //     printf("%d\n", stack[i]);
    // }

    return 0;

}