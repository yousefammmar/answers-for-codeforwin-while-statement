//C program to print multiplication table of a given number with while
#include <stdio.h>
int main (){
    int i,num,sum;
    printf("enter the number you want to mutiply");
    scanf("%d",&num);
    i=1;
    while(i<=10){
        sum=i*num;
        printf("%d * %d = %d\n",num,i,sum);
        i++;
    }
    return 0;
}