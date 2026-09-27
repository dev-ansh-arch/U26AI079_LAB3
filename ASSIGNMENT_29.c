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
    if(temp==reverse/10) printf("%d is a PALINDROM",temp);
    else printf("%d is not a PALINDROM",temp);
    return 0;
}