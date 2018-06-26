#include <stdio.h>
float func(int celsius)
{
	return (float)(celsius*9.0)/5.0+32.0;
}
void main()
{
	
	float farh,celsius;
	int lower,upper,step;

	lower =0;
	upper=300;
	step =18;//change it to 20

	printf("Fahrenheit\tCelsius\n");
	farh =lower;
	while (celsius<=upper)
	{
		farh=func(celsius);
		printf("%10.1f%13.1f\n",farh,celsius);
		celsius+=step;
	}
}