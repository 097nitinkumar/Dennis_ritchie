#include <stdio.h>
void main()
{
	
	int farh,celsius;
	int lower,upper,step;

	lower =0;
	upper=300;
	step =20;

	printf("Fahrenheit\tCelsius\n");
	farh =lower;
	while (farh<=upper)
	{
		celsius =5*(farh-32)/9;
		printf("%10d%13d\n",farh,celsius);
		farh+=step;
	}
}
