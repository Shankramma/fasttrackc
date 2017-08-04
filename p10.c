#include <stdio.h>

int main(int argc, char const *argv[])
{
	char character;
	printf("enter the character \n");
	scanf("%c",&character);
	if (character >= 'A' && character <= 'Z')
	{
		character = character + 32;
		printf("character is %c\n",character );

		/* code */
	}
	else if(character >= 'a' && character <= 'z')
	{
		character = character - 32;
		printf("character is  %c \n",character );
	}
	else
	{
		printf("please enter the character\n");
		return 0;
	}

	/* code */
	return 0;
}