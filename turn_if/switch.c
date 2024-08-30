#include<stdio.h>
// #include<conio.h>
void main()
{
    char ch;
    // clrscr();
    printf("Enter your Grade: ");
    scanf("%c",&ch);
   
    switch(ch)
    {
        case 'A' :
        case 'a' :
            printf("Grade A");
            break;
        case 'B' :
            printf("Grade B");

        case 'C' :
            printf("Grade C");
        default:
            printf(" Wrong Choice.\n Pls Enter A to C");
    }
    // getch();
}