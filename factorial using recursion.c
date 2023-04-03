#include<stdio.h>
long factorial(int n)
{
if (n==0)
    return 1;
else
    return (n*factorial(n-1));
}
void main()
{
printf("GAURANSH GOEL\nCSE-A\nPRINT FACTORIAL USING RECURSION\n");
int num;
long fact;
printf("Enter the number: ");
scanf("%d",&num);
fact=factorial(num);
printf("Factorial of %d is %ld\n",num,fact);
}
