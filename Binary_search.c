#include<stdio.h>

int binary_search(int *a,int low,int high,int data){
    
    while(low <= high){
        int mid = (low + high)/2;
        if(data == a[mid]){
            return mid;
        }
        else if(data > a[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
     return -1;
}

int main(){
    printf("How many data insert you? ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("insert data: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int temp = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n ; j++){
            if(a[i] > a[j]){
                temp = a[i] ;
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("which data search you? ");
    int data ;
    scanf("%d",&data);
    int low = 0;
    int high = n-1;
    int value = binary_search(a,low,high,data);
    if(value == -1){
        printf("Value is not found.");
    }
    else{
       printf("Data is found %d index", value);
    }

    return 0;
}