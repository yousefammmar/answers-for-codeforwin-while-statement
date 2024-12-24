//C program to print strong numbers between 1 to n
#include <stdio.h>
int main (){
    int i,lim,x,j,mod,tot,sum;
    printf("enter the limit: ");
    scanf("%d",&lim);
    for(i=1;i<=lim;i++){
        x=i;
        tot=0;
        while(x!=0){
            mod=x%10;
            sum=1;
            for(j=1;j<=mod;j++)
            sum*=j;
            tot+=sum;
            x/=10;
        }
        if(tot==i){
        printf("%d is a strong number\n",i);
        }
    }
    return 0;
}
