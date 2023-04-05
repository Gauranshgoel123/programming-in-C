#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("GAURANSH GOEL\nCSE-A\nCOUNT NUMBER OF UPPERCASE,LOWERCASE,NUMERIC,SPECIAL CHAR IN FILE\n");
    FILE *fp;
    char ch;
    int countl=0,countu=0,countd=0,counts=0;
    fp=fopen("data.txt","r");
    if(fp==NULL)
    {
        printf("Error while opening for reading");
        return 0;
    }
    printf("Contents of the file are:\n\n");
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
        if((ch>=65)&&(ch<=90))
        {
            countu++;
        }
        else if((ch>=97)&&(ch<=122))
        {
            countl++;
        }
        else if((ch>=48)&&(ch<=57))
        {
            countd++;
        }
        else
        {
            counts++;
        }
    }
    fclose(fp);
    printf("\n\nTotal number of Uppercase letters are %d",countu);
    printf("\nTotal number of Lowercase letters are %d",countl);
    printf("\nTotal number of Digits are %d",countd);
    printf("\nTotal number of special characters are %d",counts);
    return 0;
}
