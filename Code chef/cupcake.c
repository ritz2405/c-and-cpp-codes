#include<stdio.h>
int main()
{
	int t;
	int a;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &a);
		printf("%d\n", (a/2)+1);
	}
}