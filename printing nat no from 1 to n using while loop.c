//C program to print all natural numbers from 1 to n using while loop

#include <stdio.h>

int main()
{
    printf("GAURANSH GOEL\nCSE-A\nPRINT NATURAL NO FROM 1 TO N USING WHILE LOOP\n");
    int i, end;

    //Input a number from user

    printf("Print all natural numbers from 1 to : ");
    scanf("%d", &end);

    //Print natural numbers from 1 to end

    i=1;
    while(i<=end)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
