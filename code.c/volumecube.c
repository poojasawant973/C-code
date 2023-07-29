// calculate volume of a cube

#include <stdio.h>
int main()
{
	int side, volume;
	printf("Enter the value of side =");
	scanf("%d", &side);
	volume =(side * side * side);
	printf("%d", volume);
	return 0;
}
