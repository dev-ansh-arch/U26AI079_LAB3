#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number Of Terms : ");
    scanf("%d",&n);
    float sum=0;
    for(int i=1;i<=n;i++){
        int fact=1;
        for(int j=1;j<=i;j++){
            fact=fact*j;

        }
        sum=sum+(i/(fact+0.0));
    }
    printf("Sum=%f",sum);
}