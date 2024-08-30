#include<stdio.h>
void main()
{
    int num;
    char ch;
    printf("Enter Value:- ");
    scanf("%d",&num);

    ch = num<10 
            ? 'A' 
            : num < 20 
                     ? 'B' : printf("Wrong Input..");

    printf("\n%c",ch);

    if(ch == 'A' || ch=='B')
    {
        printf("\nHello..");
    }
    else{
        printf("\nHi....");
    }

}