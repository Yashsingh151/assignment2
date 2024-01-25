#include <stdio.h>
int main(){
    int n;
    printf("input a number:\n");
    scanf("%d",&n);
    if (n&1==1)
    printf("the number is odd \n");
    else 
    printf("the number is even \n");
     return 0;
}