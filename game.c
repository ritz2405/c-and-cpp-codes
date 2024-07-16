#include<stdio.h>
#include<math.h>
void main()
{
	int x;
	int y;
	printf("Enter the number\n");
	scanf("%d", &x);
	y = (2*x + 6)/2 - x;
	printf("The value is: %d", y);
}