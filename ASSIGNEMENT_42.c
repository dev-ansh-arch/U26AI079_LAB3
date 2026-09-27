#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0) count++;
    }
    if(count==2) printf("The entered number which is %d is Prime",n);
    else printf("The entered number which is %d is composite",n);

    
}