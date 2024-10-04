//C program to print natural numbers in reverse from n to 1 with while 
#include <stdio.h>
int main (){
    int num, lim;
    printf("enter the maximam number:");
    scanf("%d",&lim);
    num=lim;
    while(num>0){
        
    printf("%d\n",num);
 num--;
    }
    return 0;
}