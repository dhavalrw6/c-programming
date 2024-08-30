#include<stdio.h>

int main()
{
    int p,n,r,ints;

    printf("Enter p:- ");
    scanf("%d",&p);

    printf("Enter n:- ");
    scanf("%d",&n);

    printf("Enter r:- ");
    scanf("%d",&r);

    ints = p * r * n / 100;
    
    printf("\n p is= %d",p);
    printf("\n n is= %d",n);
    printf("\n r is= %d",r);
    printf("\n ints is= %d",ints);

    return 0;
}