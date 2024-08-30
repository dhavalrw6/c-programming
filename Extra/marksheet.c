#include<stdio.h>

int main()
{
    int rollno, sub1, sub2, sub3, total;
    float avg;
    char name[20];


    printf("Enter RollNo:- "); 
    scanf("%d",&rollno);

    printf("Enter Name:- ");
    scanf("%s",&name);

    printf("Enter Sub1:- ");
    scanf("%d",&sub1);

    printf("Enter Sub2:- ");
    scanf("%d",&sub2);

    printf("Enter Sub3:- ");
    scanf("%d",&sub3);

    total = sub1+sub2+sub3;
    avg = total / 3;

    printf("\n Roll no is:- %d",rollno);
    printf("\n Name is: %s",name);
    printf("\n sub1 is: %d",sub1);
    printf("\n sub2 is: %d",sub2);
    printf("\n sub3 is: %d",sub3);
    printf("\n Total is: %d",total);
    printf("\n Avg is: %.2f",avg);
    
    return 0;
}