#include<stdio.h>
void main()
{
	int a,b,o;
	scanf("%d%d", &a, &b);
	scanf("%d", &o);
	switch(o)
	{
		case 1:
			printf("%d\n", a+b);
			break;
		case 2:
			printf("%d\n", a - b);
			break;
		case 3:
			printf("%d\n", a*b);
			break;
		case 4:
			printf("%d\n", a/b);
			break;
		default:
			printf("");
	}
}