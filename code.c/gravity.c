//Acceleration due to gravity

#include <stdio.h>
int main()
{
	int t;
	printf("Enter time :");
	scanf("%d", &t);
	int l, gravity;
	printf("Enter the length :");
	scanf("%d", &l);
	gravity = ((4 *(3.14*3.14)*l)/(t * t));
	printf("%d", gravity);
	return 0;
}
	
	
