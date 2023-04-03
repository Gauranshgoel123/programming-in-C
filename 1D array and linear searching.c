#include<stdio.h>
int main()
{
printf("GAURANSH GOEL\nCSE-A\n1D ARRAY AND LINEAR SEARCH AN ELEMENT\n");
int n, i;
printf("Enter the size of the array: ");
scanf("%d", &n);

printf("Enter elements:\n");                        //creating 1D array
for (i = 0; i < n; i++)
    {
    scanf("%d", &arr[i]);
    }
printf("The elements of the array are: ");          //displaying elements
for (i = 0; i < n; i++)
    {
    printf("%d ", arr[i]);
    }
int check;                                          //linear searching
printf("\nEnter element to be checked: \n");
scanf("%d",&check);
for(i=0; i < n; i++)
    {
    if (check==arr[i])
        {
        printf("Element found at %d th position",i+1);
        }
    }
}
