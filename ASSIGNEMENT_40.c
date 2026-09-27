#include<stdio.h>
int main(){
    int n;
    int sum=0;
    do{
        printf("Enter the number : ");
        scanf("%d",&n);
        sum=sum+n;
        
    }while(n>0);
    printf("SUM=%d",sum);
}