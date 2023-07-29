// Construct a flowchart to show how to interchange the value of two variable.
#include <stdio.h>
int main()
{
	int a, c;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	c = a;
	b = a;
	c = b;
	printf("value of a:%d\n", a);
	printf("value of b:%d\n", b);
	return 0;
}
