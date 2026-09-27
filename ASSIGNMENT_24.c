#include<stdio.h>
#include<math.h>
int main(){
    int x,n;
    float Y_function;
    printf("enter the value of x : ");
    scanf("%d",&x);
    printf("enter the value of n : ");
    scanf("%d",&n);
    if(n==1){
        Y_function=1+x;
        printf("the Y_function is 1+x and the value is %f",Y_function);

    }
    else if(n==2){
        Y_function=1+x/(n+0.0);
        printf("the Y_function is 1+x/n and the value is %f",Y_function);

    }
    else if(n==3){
        Y_function=1+pow(x,n);
        printf("the Y_function is 1+x^n and the value is %f",Y_function);

    }
    else if(n>3 || n<1){
        Y_function=1+n*x;
         printf("the Y_function is 1+nx and the value is %f",Y_function);

    }
    return 0;
}