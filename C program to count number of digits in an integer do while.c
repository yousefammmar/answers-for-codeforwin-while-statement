//C program to count number of digits in an integer
#include <stdio.h>
int main (){
    int i;
    int num;
    printf("enter the number please=");
    scanf("%d",&num);
    i=0;
    do{
        i++;
        num=num/10;
    }
    while(num/10!=0);
if (i>1)
i++;
    printf("the number has %d digits",i);
    
    return 0;
}