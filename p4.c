#include <stdio.h>
float vel_k_m(float);

int main()
{
	float vel;
	printf("enter the velocity in km/hr\n");
	scanf("%f",&vel);
	vel_k_m(vel);


	/* code */
	return 0;
}

float vel_k_m(float v)
{
	v = v * 0.2777778;
	printf("velocityin m/s is  %f\n", v);
	return v;
}