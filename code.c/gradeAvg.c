// construct a flowchart to show how a student's registration number and grade in 3 subject , m1, m2, m3 are displayed along with the total average grade

#include <stdio.h>
int main()
{
	int M1, avg;
	printf("Enter the marks in first subject :");
	scanf("%d", &M1);
	int M2;
	printf("Enter the marks in second subject :");
	scanf("%d", &M2);
	int M3;
	printf("Enter the marks in third subject :");
	scanf("%d", &M3);
	avg = ((M1 + M2 + M3)/2);
	printf("Average: %d", avg);
	return 0;
}
	
	
