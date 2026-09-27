#include<stdio.h>
int main(){
    int n;
    printf("enter the number of terms in fibonacci series : ");
    scanf("%d",&n);
    int x=0;
    int y=1;
    printf("%d ",x);
    printf("%d ",y);
    int count=1;
    while(count<=n-2){
        int sum=x+y;
        x=y;
        y=sum;
        printf("%d ",sum);
        count++;
        
    }

}