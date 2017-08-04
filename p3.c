#include <stdio.h>
#include <assert.h>
float flux_luminous(float,float);

int main()
{
	float watt, luminous_per_watt;
	//printf("enter the watt \n");
	//scanf("%f", &watt);
	//printf("enter the value of luminous_per_watt\n");
	//scanf("%f",&luminous_per_watt);
	assert(flux_luminous(60,15)==900);
	flux_luminous(watt,luminous_per_watt);
	/* code */
	return 0;
}

float flux_luminous(float w, float l)
{
   float luminous;
   luminous = w * l;
   //printf("luminous is %f\n",luminous );
   return luminous;
}