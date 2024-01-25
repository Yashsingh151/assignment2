#include <stdio.h>
/*program to check weather a given year is a leap year or not*/
int main(){
    int year,x;
    printf("enter year:");
    scanf("%d",&year);
    if(year%400==0)
    printf("%d is a leap year", year);
    else if (year%100==0)
    printf ("%d is not a leap year",year);
    else if ("year%4==0")
    printf("it is a leap year",year);
    else
     printf("it is not  a leap year");
     return 0;

}