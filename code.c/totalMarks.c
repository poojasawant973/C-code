// calculate total marks obtained student in examination

#include <stdio.h>
int main()
{
	int M1, T, totalMarks;
	printf("Enter the marks in hindi : ");
	scanf("%d", &M1);
	int M2;
	printf("Enter the marks in maths : ");
	scanf("%d", &M2);
	int M3;
	printf("Enter the marks in history : ");
	scanf("%d", &M3);
	int M4;
	printf("Enter the marks in English : ");
	scanf("%d", &M4);
	int M5;
	printf("Enter the marks in Marathi : ");
	scanf("%d", &M5);
	totalMarks = M1+M2+M3+M4+M5;
	T = (totalMarks*100)/500;
	printf("totalMarks of students =%d", T);
	return 0;
}
