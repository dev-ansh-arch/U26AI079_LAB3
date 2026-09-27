#include<stdio.h>
int main(){
    int n,odd_sum=0,even_sum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0) even_sum+=i;
        else odd_sum+=i;
    }
    printf("the sum of all even number from 1 to %d is %d\n",n,even_sum);
    printf("the sum of all odd number from 1 to %d is %d",n,odd_sum);
    return 0;
}