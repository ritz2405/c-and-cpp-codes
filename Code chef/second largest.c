#include<stdio.h>
int main()
{
	int a,b,c;
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d %d", &a, &b, &c);
		if((a>b && a<c) || (a>c && a<b))
		{
			printf("%d\n", a);
		}
		else if((b>a && b<c) || (b>c && b<a))
		{
			printf("%d\n", b);
		}
		else
		{
			printf("%d\n", c);
		}
	}
}