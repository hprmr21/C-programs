#include<stdio.h>

int reverse(int arr[],int n);

int main(){
    int arr[5],i;
    printf("enter elements of array:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("original array is : ");
    for(i=0;i<5;i++){
        printf(" %d \t",arr[i]);
    }
    printf("\n");

    reverse(arr,5);
    printf("reversed array is : ");
    for(i=0;i<5;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");



    return 0;
}

int reverse(int arr[],int n){
    int firstvalue,secondvalue;
    for(int i=0;i<n/2;i++){
        firstvalue=arr[i];
        secondvalue=arr[n-i-1];
        arr[i]=secondvalue;
        arr[n-i-1]=firstvalue;
    }
    return 0;   

}