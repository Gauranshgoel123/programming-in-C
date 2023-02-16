#include<stdio.h>
void swap(int *,int *);      //function declaration
int main()
{
printf("GAURANSH GOEL\nCSE-A\nSWAP TWO NUMBERS USING CALL BY ADDRESS\n");
int a=10;
int b=20;
printf("Before swap a=%d,b=%d\n",a,b);
swap(&a,&b);
printf("After swap in main a=%d,b=%d\n",a,b);
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("After swap in function a=%d,b=%d\n",*a,*b);
}
