// Construct a flowchart to obtain the Farhenheit equivalent of a temperature given in a celcius where the relationship between the two scale of temperature.

#include <stdio.h>
int main()
{
	int c, F;
	printf("Enter the celcius : ");
	scanf("%d", &c);
	F = (((c/5)*9) + 32);
	printf("%d", F);
	return 0;
}
