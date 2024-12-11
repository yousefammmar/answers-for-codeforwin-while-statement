/* Write an c code that calculates the prices for any number of items. The c code 
should accept for each item purchased the number of item units and item price (itemprice = number of item 
units * unit price). The total number of items is unknown), (when the user finish he must enter -1): 
Then this c code computes the following:
 -- Print price for each item 
 -- Average prices (Hint = Total prices / total number of units)
 -- Highest and lowest price -- How many prices are above 1000$ 
 -- How many prices between 500 $ and 1000 $ (inclusive) 
 -- Summation for all Prices 
 itemp->item price 
 unitp->unit price
 nunit->number of units
 ntu-> total number of units
 totp->total price
 hip->highest price
 lop->lowest price
 ab1000->items above 1000$
 bt500->items between 500$ and 1000$
 avgp->the avarage price 
 */
#include <stdio.h>
int main (){
    int itemp,nunit,unitp,ntu=0,totp=0,hip=0,lop=100000,ab1000=0,bt500=0;
    float avgp;
    printf("enter the number of units:");
    scanf("%d",&nunit);
    while (nunit!=-1){
        printf("enter the price of the unit:");
        scanf("%d",&unitp);
        itemp=nunit*unitp;
        totp=totp+itemp;
        ntu=ntu+nunit;
        avgp=((float)totp/ntu);
                if(hip<unitp)
                    hip=unitp;
                if(lop>unitp)
                    lop=unitp;
                if(unitp>=1000)
                    ab1000++;
                if(unitp>=500&&unitp<=1000)
                    bt500++;
    printf("enter the number of units:(to exit type -1)");
    scanf("%d",&nunit);
    }
        printf("the total price is %d\n",totp);
        printf("the number of units are %d\n",ntu);
        printf("the average price is %f\n",avgp);
        printf("the highest price is %d\n",hip);
        printf("the lowest price is %d\n",lop);
        printf("the number of items that are above 1000$%d\n",ab1000);
        printf("the number of items that are between 500 and 1000 are%d\n",bt500);
    return 0;
}