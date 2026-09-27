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
        int count=0;
        for(int j=0;j<=n-1;j++){
            if(arr[i]>=arr[j]) count++;
        }
        if(count==n-1) printf("%d is the second maximum number \n",arr[i]);
        if(count==n){
            printf("%d is the maximum number ",arr[i]);
           

        } 
        
    }
    return 0;


}