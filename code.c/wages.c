//Construct a flowchart to show how tot obtain the daily wages of worker on the basic of the hours worked during the day

#include <stdio.h>
int main()
{
	int hr;
	int r, wages;
	printf("Enter wages hours\n");
	printf("Enter rate\n");
	scanf("%d%d", &hr, &r);
	wages = hr * r;
	printf("%d", wages);
	return 0;
}
	
