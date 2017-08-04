#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, temp, rn=0, rd;
	printf("enter the number\n");
	scanf("%d",&num);
	temp = num;
	while(temp != 0)
	{
		rd = temp % 10;
		rn = (rn * 10) + rd;
		temp = temp / 10;
	}
	if (rn == num)
	{
		printf("the entered number is palindrome\n");
		/* code */
	}
	else 
	{
		printf("not a palindrome\n");
	}
	/* code */
	return 0;
}