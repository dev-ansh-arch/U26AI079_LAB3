#include<stdio.h>
int main(){
    int sales;
    printf("Enter the sales amount : ");
    scanf("%d",&sales);
    if(sales<=500) printf("Commission is %f",(5*sales)/100.0);
    else if(sales>500 && sales<=2000) printf("Commission is %f",35+(10*(sales-500))/100.0);
    else if(sales>2000 && sales<=5000) printf("Commission is %f",185+(12*(sales-2000))/100.0);
    else printf("Commission is %f",((12.5)*sales)/100.0);
}