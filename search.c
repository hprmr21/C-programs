#include<stdio.h>
int main(){
    int a[100],i,n,k;
    int found=0;
    printf("Enter numbers of elements in array : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched : ");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(a[i]==k){
            printf("Element found at position %d\n",i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element not found in array\n");
    }
    return 0;
    
}