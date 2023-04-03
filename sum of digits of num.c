#include<stdio.h>
 int main()
{
printf("GAURANSH GOEL\nCSE-A\nPRINT SUM OF DIGITS\n");
int num,sum=0,digit;
printf("Enter a number:");
scanf("%d",&num);
while(digit>0)
{
    digit=num%10;
    sum=sum+digit;
    num=num/10;
}
printf("Sum is=%d",sum);
return 0;
}
