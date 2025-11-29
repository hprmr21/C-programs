#include<stdio.h>

int countodd(int arr[], int n);

int main(){
    int arr[10],i;
    printf("enter elements of array:");
    for(i=0;i<10;i++){
        scanf("%d \n",&arr[i]);
    }
    printf("number of odd elements in array is : %d",countodd(arr,10));
    



    return 0;

}

int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}