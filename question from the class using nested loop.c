//A class has a number of students, each student has a number of tests. Write a program to help the teacher wants to get the average of each student’s test scores. 
#include <stdio.h>
int main (){
    float subject,mark,avgc,student,countst=0,avgm,countsu=0,mktot=0,avgtot=0;
    printf("Enter the student number: ");
    scanf("%f",&student);
    while(student!=0){
        countst++;
        countsu=0;
        mktot=0;
        printf("Enter the subject number for this sudent: ");
        scanf("%f",&subject);
        while(subject != 0){
            countsu++;
            printf("enter the mark of this subject: ");
            scanf("%f",&mark);
            mktot+=mark;
            printf("Enter the subject number for this sudent: [Enter number 0 to exit -it must not be the same-]");
            scanf("%f",&subject);
        }
        avgm=mktot/countsu;
        printf("The avarge of the student is :%0.3f\n",avgm);
        printf("Enter the student number for this sudent: [Enter number 0 to exit - it must not be the same -]");
        scanf("%f",&student);
        avgtot+=avgm;
    }
    
    avgc=avgtot/countst;
    printf("The avarge of the class is : %0.3f",avgc);
    return 0;
}