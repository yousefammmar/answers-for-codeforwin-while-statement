/*Write an c code that for a group of cars, finds the percentage of Mercedes/BMW for each 
age category (Old car, Middle age car, New car). The c code should accept the car type (M for 
Mercedes or B for BMW) and car production year, for each car until zero value is entered. Then the 
c code should find and print the percentage of Mercedes and percentage of BMW in each age 
category. 
Car categories are considered as follows: Old Car: for ages above 20, Middle age car : for ages between 
5 and 20 inclusive, New car: for ages under 5. */
#include <stdio.h>
int main (){
    int py,o=0,ob=0,om=0,mi=0,mb=0,mm=0,n=0,nm=0,nb=0,morate,borate,mnrate,bnrate,mmirate,bmirate;
    char cb;
    printf("enter the production year ");
    scanf("%d",&py);
    while(py!=0){
        printf("etner the car brand (m for mercedes and b for bmw)");
        scanf(" %c",&cb);
        if((2024-py)>=20){
            o++;
                if(cb=='M'||cb=='m')
                    om++;
                if(cb=='B'||cb=='b')
                    ob++;
        }
        else if(((2024-py)<20)&&((2024-py)>5)){
           mi++;
                 if(cb=='M'||cb=='m')
                    mm++;
                if(cb=='B'||cb=='b')
                    mb++;   
        }
        else{
            n++;
             if(cb=='M'||cb=='m')
                    nm++;
                if(cb=='B'||cb=='b')
                    nb++;
        }
        printf("enter the production year (enter 0 to finish ) \n");
    scanf("%d",&py);
    }
            morate=((float)om/o)*100;
            borate=((float)ob/o)*100;
            mmirate=((float)mm/mi)*100;
            bmirate=((float)mb/mi)*100;
            mnrate=((float)nm/n)*100;
            bnrate=((float)nb/n)*100;
    printf("Old cars=%d Mercedes & %d BMW\n",morate,borate);
    printf("Middle cars=%d Mercedes & %d BMW\n",mmirate,bmirate);
    printf("New cars=%d Mercedes & %d BMW\n",mnrate,bnrate);
    return 0;
}