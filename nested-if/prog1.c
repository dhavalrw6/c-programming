#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter x:- ");
    scanf("%d",&x);
    printf("Enter y:- ");
    scanf("%d",&y);
    printf("Enter z:- ");
    scanf("%d",&z);


    if(x>=y)
    {
        if(x>=z)
        {
            printf("x is Max");
        }
        else
        {
            printf("z is Max");
        }
    }
    else
    {
        if(y>=z)
        {
            printf("y is Max");
        }
        else
        {
            printf("z is Max");
        }
    }


}