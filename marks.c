#include<stdio.h>

int main(){
    int n;
    printf("Enter the numbers of students : ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the marks of %d students : \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(marks[j]>marks[i]){
                int temp=marks[i];
                marks[i]=marks[j];
                marks[j]=temp;
            }
        }
    }
    printf("\n Marks with rank \n");
    for(int i=1;i<n;i++){
        printf("Rank %d : %d\n",i,marks[i]);
    }
    return 0;
}