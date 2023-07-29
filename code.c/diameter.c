// calculate diameter
#include <stdio.h>
int main()
{
	int circumference, diameter;
	printf("Enter the value of circumference");
	scanf("%d", &circumference);
	diameter = 2 * circumference;
	printf("Diameter :%d", diameter);
	return 0;
}
