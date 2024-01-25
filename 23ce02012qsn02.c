#include <stdio.h>
/*program to find maximum of three numbers*/
int main(){
    int a,b,c,larg;
    printf("enter a,b,c \n");
    scanf("%d %d %d",&a,&b,&c);
    larg=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("largest number is %d",larg);
    
    return 0;

}