#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number Of Terms in the A.P : ");
    scanf("%d",&n);
    int a=2,d=2,l;
    l=a+(n-1)*d;
    for(int i=a;i<=l;i=i+d){
        printf("%d ",i);
    }
}