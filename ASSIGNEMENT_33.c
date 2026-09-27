#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        int countmax=0;
        int countmin=0;
        for(int j=0;j<=n-1;j++){
            if(arr[i]>=arr[j]) countmax++;
            if(arr[i]<=arr[j]) countmin++;

        }
        if(countmax==n) printf("%d is the maximum number \n",arr[i]);
        if(countmin==n){
            printf("%d is the minimum number \n",arr[i]);
           

        } 
        
    }
    return 0;


}