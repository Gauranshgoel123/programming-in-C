#include<stdio.h>
int main()
{
printf("GAURANSH GOEL\nCSE-A\nMENU DRIVEN PROGRAM FOR(+,-,*,/)\n");
int num1,num2;
char c;
printf("Enter any operator (+,-,*,/):");
scanf("%c",&c);
printf("enter any two numbers :");
scanf("%d %d",&num1,&num2);
switch(c)
{
case '+':
    printf("%d+%d=%d",num1,num2,num1+num2);
    break;
case '-':
    printf("%d-%d=%d",num1,num2,num1-num2);
    break;
case '*':
    printf("%d*%d=%d",num1,num2,num1*num2);
    break;
case '/':
    printf("%d/%d=%d",num1,num2,num1/num2);
    break;
}
}
