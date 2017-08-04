#include <stdio.h>

int main(int argc, char const *argv[])
{
	int fib, fib1,fib2,fib3;
	printf("enter 3 numbers\n");
	scanf("%d %d %d", &fib1,&fib2,&fib3);
	fib=fib1+fib2;
	if(fib == fib3)
	{
		printf("the numbers are in fib series\n");

	}
	else
	{
		printf("not in fib series\n");
	}
	/* code */
	return 0;
}