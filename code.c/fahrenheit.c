//obtain Fahrenheit temperature

#include <stdio.h>
int main()
{
	int C,F;
	printf("Enter the temperature in celsius");
	scanf("%d", &C);
	F = ((9*C / 5 )+32);                // C/5 = F-32/9
	printf("Fahrenheit tempt of given celcius is:%d", F);
	return 0;
}
