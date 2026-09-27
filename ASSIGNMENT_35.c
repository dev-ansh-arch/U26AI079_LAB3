#include<stdio.h>
int main(){
    int n,q;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum=0;
    while(n>=10){
        int sum_temp=0;
        while(n!=0){
            q=n%10;
            sum_temp+=q;
            n=n/10;
        }
        n=sum_temp;
        sum=sum_temp;
    }
    printf("Sum in single digit is %d",sum);
}