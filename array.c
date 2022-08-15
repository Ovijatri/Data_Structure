#include<stdio.h>

#define size 5
int arr[size];

void traversing(int *a){
    for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void searching(int *a,int element){
    for(int i = 0; i < size; i++){
        if(a[i] != element){
            continue;
        }else{
            printf("Element is found: %d th index\n", i);
            break;
        }
    }
}

void delete(int *a,int element){
    for(int i = 0; i < size; i++){
        if(a[i] == element){
            

        }
    }

}

int main() {
    printf("Enter element : \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    traversing(arr);//traversing on the array
    searching(arr,5);//Linear search
    delete(arr,5);//deleting an element from the array
    
    return 0;
}