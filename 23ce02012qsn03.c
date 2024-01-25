#include <stdio.h>
/*program to convert no of days into years,months and weeks*/
int main(){
    int days,years,months,weeks;
    printf("enter number of days:");
    scanf("%d",&days);
    years= days/365;
    months=(days%365)/30;
    weeks=((days%365)%30)/7;
    days=(((days%365)%30)%7);
    printf("no of year is %d \n",years);
    printf("no of months is %d \n",months);
    printf("no of weeks is %d \n",weeks);
    printf("no of days is %d \n",days);
    return 0;
}