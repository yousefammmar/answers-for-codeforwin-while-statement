//C program to find GCD (HCF) of two numbers
#include<stdio.h>
int main (){
    int num1,num2,gcd=1,i=1;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    while(i<=num1&&i<=num2){
        if((num1%i==0)&&(num2%i==0))
        gcd=i;
        i++;
    }
    printf("the gcd =%d ",gcd);
    return 0;
}