//C program to print multiplication table
#include <stdio.h>
void main()
{
printf("GAURANSH GOEL\nCSE-A\nPRINT MULTIPLICATION TABLE\n");
int n,i,prod;
printf("enter number: ");
scanf("%d",&n);
for (i = 1; i <= 10; i++)
    {
    prod=n*i;
    printf("%d X %d=%d\n",n,i,prod);
    }
}
