// calculate lateral surface area and total surface area of a cube.
#include <stdio.h>
int main()
{
	int sideLength, A, B;
	printf("Enter the side length of cube =");
	scanf("%d", &sideLength);
	A = 4 * (sideLength * sideLength);
	B = 6 * (sideLength * sideLength);
	printf("Lateral surface area of cube : %d\n", A);
	printf("Total surface area of a cube : %d\n", B);
	return 0;
}
