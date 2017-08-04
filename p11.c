#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, bin_val, deci_val=0, base=1, rem;
	printf("enter the a binary value\n");
	scanf("%d",&num);
	bin_val=num;
	while(num > 0)
	{
		rem = num % 10;
		deci_val=deci_val+rem*base;
		num = num / 10;
		base = base*2;
	}
	printf("the decimal value is %d\n",deci_val);
	
	/* code */
	return 0;
}