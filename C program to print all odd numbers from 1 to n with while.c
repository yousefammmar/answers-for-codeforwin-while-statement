//C program to print all odd numbers from 1 to n with while
#include <stdio.h>
int main(){
    int i,lim; 
    printf("enter the limit");
    scanf("%d",&lim);
     printf("the odd numbers in this range are");
     i=1;
    while(i<=lim){
        if(i%2!=0)
    printf("%d\n",i);
    i++;
    }
    return 0;
}