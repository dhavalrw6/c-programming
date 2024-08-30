#include<stdio.h>
void main()
{
    int i,start,last;
    printf("Enter number:- ");
    scanf("%d",&start);
    printf("Enter number:- ");
    scanf("%d",&last);

    for(i=start;i<=last ;i++)
    {
        if((i%4==0 || i%400==0) && i%100!=0)
        {
            printf("%d ",i);
        }
    }

}