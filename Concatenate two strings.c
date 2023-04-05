// C Program to concatenate two
// strings without using strcat
#include <stdio.h>

int main()
{
printf("GAURANSH GOEL\nCSE-A\nCONCATENATE TWO STRINGS\n");
	// Get the two Strings to be concatenated
	char str1[100] = "Geeks", str2[100] = "World";

	// Declare a new Strings
	// to store the concatenated String
	char str3[100];

	int i = 0, j = 0;

	printf("\nFirst string: %s", str1);
	printf("\nSecond string: %s", str2);

	// Insert the first string
	// in the new string
	while (str1[i] != '\0') {
		str3[j] = str1[i];
		i++;
		j++;
	}

	// Insert the second string
	// in the new string
	i = 0;
	while (str2[i] != '\0') {
		str3[j] = str2[i];
		i++;
		j++;
	}
	str3[j] = '\0';

	// Print the concatenated string
	printf("\nConcatenated string: %s", str3);

	return 0;
}
