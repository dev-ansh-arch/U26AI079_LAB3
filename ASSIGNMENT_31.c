#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        int quotient=n%10;
        sum=sum+quotient;
        n=n/10;
    }
    printf("the sum of indivisual digits of number %d is %d",temp,sum);
    return 0;

}