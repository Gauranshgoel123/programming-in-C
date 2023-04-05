#include <stdio.h>

int main()
{printf("GAURANSH GOEL\nCSE-A\nCOPY ONE STRING TO ANOTHER\n");
    char s1[1000],s2[1000];
    int i;

    printf("Enter any string: ");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)  //  or  for(i=0;s1[i];i++)
    {
    	s2[i]=s1[i];
	}
	s2[i]='\0';

    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'",s2);


    return 0;
}
