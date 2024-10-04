//C program to print natural numbers in reverse from 1 to n with while 
#include <stdio.h>
int main (){
    int num, lim;
    printf("enter the maximam number:");
    scanf("%d",&lim);
    num=1;
    while(num<=lim){
        
    printf("%d\n",num);
 num++;
    }
    return 0;
}