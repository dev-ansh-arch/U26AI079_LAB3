#include<stdio.h>
#include<math.h>
int main(){
    int n,q=0,temp=n,checker=0,count=0;
    printf("enter the number you want to check ARMSTRONG or not : ");
    scanf("%d",&n);
    while(n>0){
        count++;
        n=n/10;
    }
    n=temp;
     while(n>0){
        q=n%10;
        checker+=pow(q,count);
        n=n/10;

    }
    if(temp==checker) printf("the given number is ARMSTRONG");
    else printf("the given number is not ARMSTRONG");
    return 0;

}
