#include <stdio.h>

int main(int argc, char const *argv[])
{
	long deci,num,binary=0,i=1;
	int rem;
	printf("enter the decimal number\n");
	scanf("%ld",&num);
	deci=num;
	while(num!=0)
	{
		rem = num % 2;
		num = num / 2;
		binary= binary + (rem * i);
		i = i * 10;
	}
	printf("the binary value is %ld\n",binary);

	/* code */
	return 0;
}