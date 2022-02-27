#include <stdio.h>

int main(int argc, char const *argv[])
{
	char chr;

	printf("\nLetter to ASCII converter by ilyaa07");

	printf("Enter a character: ");
	scanf("%c", &chr);

	printf("\n");

	printf("You typed: %c", chr);
	printf("\nYour characters ASCII value is: %d", chr);

	return 0;
}