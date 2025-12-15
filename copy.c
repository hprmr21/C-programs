#include<stdio.h>

int main(){
    char s1[50],s2[50];
    int i;
    puts("Enter first string :");
    fgets(s1,50,stdin);
    for( i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
        
    }
    s2[i]='\0';
    puts("copied string:");
    puts(s2);
    return 0;

}