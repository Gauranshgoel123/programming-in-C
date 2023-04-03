#include<stdio.h>
int main()
{
printf("GAURANSH GOEL\nCSE-A\nPRINT REVERSE OF NUMBER USING LOOP\n");
int num,digit;
printf("Enter a number:");
scanf("%d",&num);
while(num>0)
{
    digit=num%10;
    printf("%d",digit);
    num=num/10;
}
return 0;
}
