#include <stdio.h>
#include <math.h>

int main()
{
	int s;
	float kw,joules;
	printf(" enter the joules\n");
	scanf("%f", &joules);
	printf("\n enter the time in seconds" );
	scanf("%d", &s);

	kw = joules / (1000 * s);
	assert(kw(5,2)==0.0025);
	printf("\n equivalent kw of entered joule is %f",kw);
	
	return 0;

}
