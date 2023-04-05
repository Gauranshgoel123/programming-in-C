#include<stdio.h>
int main()
{
printf("GAURANSH GOEL\nCSE-A\nLENGTH OF STRING\n");
char s[] = "Programming is fun";
int i;
for (i = 0; s[i] != '\0'; i++);
    printf("Length of the string: %d", i);
return 0;
}
