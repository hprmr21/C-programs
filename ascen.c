#include<stdio.h>
int main(){
    int a[100],i,j,n;
    printf("Enter numbers of elements in array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    printf("Array in ascending order is : ");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}