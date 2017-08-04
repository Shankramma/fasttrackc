#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num,temp,digit,sum=0;
	printf("enter the number\n");
	scanf("%d", &num);
	temp = num;
	while(num > 0)
	{
		digit=num%10;
		sum = sum +digit;
		num = num /10;
	}
	printf("the sum is %d\n",sum );
	/* code */
	return 0;
}