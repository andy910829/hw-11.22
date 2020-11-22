#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char string1[20];
	char string2[] = "string literal";
	int i;

	printf("enter a string: ");
	scanf_s("%s", string1, (unsigned)_countof(string1));

	printf("string1 is: %s\nstring2 is: %s\n"
		"string1 with spaces between characters is: \n",
		string1, string2);

	for (i = 0; string1[i] != '\0'; i++)

		printf("%c ", string1[i]);

	printf("\n");
	system("pause");
	return 0;
}