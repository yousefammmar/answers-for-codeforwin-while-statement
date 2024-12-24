//C program to check whether a number is Strong number or not
#include <stdio.h>
int main(){
    int num,mod,sum=1,tot=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    int x=num;
    while(num!=0){
        mod=num%10;
        sum=1;
        for(int i=1;i<=mod;i++){
            sum*=i;
        }
        tot+=sum;
        num/=10;
    }
    if(x==tot)
    printf("%d is a strong number",x);
    else 
    printf("%d is not a strong number",x);
    
    return 0;
}