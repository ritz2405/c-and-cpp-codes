#include<stdio.h>
int main()
{
	int t, n;
	int fact = 1;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d", &n);
		for(int i=1; i<=n; i++)
		{
			fact = fact * i;
		}
		printf("%d\n", fact);
		fact = 1;
	}
}