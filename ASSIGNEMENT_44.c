#include<stdio.h>
int main(){
    int consump_unit;
    printf("Enter the the Consumption In Unit : ");
    scanf("%d",&consump_unit);
    if(consump_unit<=200) printf("The Amount To Be Paid is %f",0.5*consump_unit);
    else if(consump_unit>200 && consump_unit<=400) printf("The Amount To Be Paid is %f",100+0.65*(consump_unit-200));
    else if(consump_unit>400 && consump_unit<=600) printf("The Amount To Be Paid is %f",230+0.8*(consump_unit-400));
    else printf("The Amount To Be Paid is %d",425+125*(consump_unit-600));
}
