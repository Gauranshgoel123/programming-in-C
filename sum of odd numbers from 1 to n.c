// C Program To Print sum of odd numbers from 1 to n
#include <stdio.h>
void main()
{
printf("GAURANSH GOEL\nCSE-A\nPRINT SUM OF ODD NUMBERS FROM 1 TO N\n");
int n,sum=0;
printf("enter number: ");
scanf("%d",&n);
for (int i = 1; i <= n; i++)
    {
    if (i % 2 ==! 0)
        sum=sum+i;
    }
printf("%d",sum);
}
