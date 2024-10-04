//C program to find sum of even numbers from 1 to n with while
#include <stdio.h>
int main (){
    int i,sum,lim;
    printf("enter the maximum number you want to sum");
    scanf("%d",&lim);
    sum=0;
    i=1;
    while(i<=lim){
        if(i%2==0)
        sum=sum+i;
        i++;
    }
    printf("the total sum of all even numbers in this rang is =%d",sum);
    return 0;
}