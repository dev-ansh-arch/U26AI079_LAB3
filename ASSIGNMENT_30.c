#include<stdio.h>
int main(){
    int n,q,reverse=0;
    printf("enter the Number : ");
    scanf("%d",&n);
    int temp;
    temp=n;
    while(n>0){
        q=n%10;
        reverse+=q;
        reverse=reverse*10;
        n=n/10;
    }
    printf("the reverse of %d is %d",temp,reverse/10);
    return 0;
}