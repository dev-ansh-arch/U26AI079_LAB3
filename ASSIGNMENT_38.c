#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number Of Terms in the A.P : ");
    scanf("%d",&n);
    int a=1,d=1,l;
    l=n;
    for(int i=a;i<=l;i=i+d){
        printf("%d ",i*i);
    }
}