#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int n1,n2,power=0;
	printf("enter the number and power\n");
	scanf("%d  %d", &n1, &n2);
	power =pow(n1,n2);
	printf("the power is %d\n", power);
	/* code */
	return 0;
}