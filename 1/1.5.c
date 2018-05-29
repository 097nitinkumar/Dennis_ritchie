#include <stdio.h>
void main()
{
	
	float farh,celsius;
	int lower,upper,step;
	upper=0;
	step =18;//change it to 20

	printf("Fahrenheit\tCelsius\n");
	for (celsius =lower=300; celsius>=upper; celsius-=step)
	{
		//celsius =5*(farh-32)/9;
		farh=(float)(celsius*9.0)/5.0+32.0;
		printf("%10.1f%13.1f\n",farh,celsius);
		
	}
}
