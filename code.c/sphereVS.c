// find the volume and surface area of sphere

#include <stdio.h>
int main()
{
	int r, V, A;
	printf("Enter the value of radius");
	scanf("%d", &r);
	V = ((3.14 * r)* 4/3);
	A = (4 * (3.14 * r * r));
	printf("Volume of Sphere:%d\n", V);
	printf("Surface area of sphere:%d\n", A);
	return 0;
}
	
