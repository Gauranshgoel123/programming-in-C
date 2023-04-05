#include <stdio.h>
#include <stdlib.h>
int main()
{printf("GAURANSH GOEL\nCSE-A\nCOUNT NUMBER OF UPPERCASE,LOWERCASE,NUMERIC,SPECIAL CHAR IN STRING\n");
    char str[100];
    int i;
    int upper=0,lower=0,num=0,special=0;;
    printf("Please enter the string \n");
    gets(str);
    i=0;
    while(str[i] != '\0'){
        //check for uppercase
            if(str[i]>='A' && str[i]<='Z') {
                upper++;
                //ceck lower case
    }else if(str[i]>='a' && str[i]<='z') {
                lower++;
                //Check numeric
    }else if(str[i]>='1' && str[i]<='9') {
                num++;
    }
    else{//check special character
        special++;
    }
    i++;
    }
    printf("\nUpper case letters: %d",upper);
    printf("\nLower case letters: %d",lower);
    printf("\nnumbers: %d",num);
    printf("\nSpecial characters: %d",special);
    getch();
    return 0;
}
