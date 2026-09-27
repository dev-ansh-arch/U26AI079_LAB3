#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter the number you want to check prime or not : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0) count++;
    }
    if(count==2) printf("the entered number %d is prime",n);
    else printf("the entered number %d is not prime",n);
    return 0;
}
