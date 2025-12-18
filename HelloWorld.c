#include <stdio.h>

int main() {
    int n, i,t1,t2,t3;
    t1=0;
    t2=1;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);


    if(n<=0){
        printf("Enter a valid number :  ");
    
    }
    else if (n==1)
    {
        printf("%d ",t1);
    }
    else if (n==2)
    {
        printf("%d /n %d ",t1,t2);
    }
    else if {
        printf("%d  %d ",t1,t2);
        for(i=3;i<=n;i++){
            t3=t1+t2;
            printf("%d  ",t3);
            t1=t2;
            t2=t3;
        }
            
        if (t3 % 2 != 0){
       printf("%d \n", t3);
        }

    }

    

    
    return 0;
}