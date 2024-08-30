#include<stdio.h>
// #include<conio.h>
void main()
{
    int a,b,c;
    // clrscr();
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);

    a>=b 
        ? a>=c 
              ? printf("a is Max")
              : printf("c is Max")
        : b>=c
              ? printf("b is Max")
              : printf("c is Max");

    // getch();
}