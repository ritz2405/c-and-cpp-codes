#include<stdio.h>
int main()
{
	int t,a,b;
	int ans=0;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d %d", &a, &b);
		ans = a + b;
		printf("%d\n", ans);
	}

}